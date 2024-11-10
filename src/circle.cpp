#include "../include/circle.h"

Circle::Circle()
    : centerY(0)
    , centerX(0)
    , r(0)
    , color({ 0 })
{}

Circle::Circle(Circle& obj)
    : centerX(obj.centerX)
    , centerY(obj.centerY)
    , r(obj.r)
    , color(obj.color)
{}

Circle::Circle(std::list<int>center, int rad, BWColor c) 
    : centerX(*center.begin())
    , centerY(center.back())
    , r(rad)
    , color(c.getColor())
{}

Circle::Circle(std::list<int>center, int rad, RGBColor c)
    : centerX(*center.begin())
    , centerY(center.back())
    , r(rad)
    , color(c.getColor())
{}

void Circle::draw(Matrix& mat) {
    int r2 = r * r;  // Pre-calculate r squared
    int height = mat.getRows();
    int width = mat.getCols();

    // Optimize bounds checking
    int startY = std::max(centerY - r, 0);
    int endY = std::min(centerY + r, height - 1);

    for (int y = startY; y <= endY; ++y) {
        int dy = y - centerY;
        int dx = static_cast<int>(sqrt(r2 - dy * dy));

        // Calculate horizontal bounds
        int startX = std::max(centerX - dx, 0);
        int endX = std::min(centerX + dx, width - 1);

        // Fill the horizontal line
        for (int x = startX; x <= endX; ++x) {
            for (size_t ch = 0; ch < mat.getChannels(); ++ch) {
                mat.at(y, x, ch) = *std::next(color.begin(), ch);
            }
        }
    }
}