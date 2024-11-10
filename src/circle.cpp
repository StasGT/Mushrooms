#include "../include/circle.h"

Circle::Circle()
    : centerY(0)
    , centerX(0)
    , r(0)
    , color(0)
{}

Circle::Circle(Circle& obj)
    : centerY(obj.centerY)
    , centerX(obj.centerX)
    , r(obj.r)
    , color(obj.color)
{}

Circle::Circle(int y, int x, int rad, BWColor c) 
    : centerY(y)
    , centerX(x)
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
            mat.at(y, x) = color;
        }
    }
}