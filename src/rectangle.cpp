#include "../include/rectangle.h"

Rectangle::Rectangle() 
    : left_x(0)
    , top_y(0)
    , width(0)
    , height(0)
    , color(0)
{}
Rectangle::Rectangle(Rectangle& obj) 
    : left_x(obj.left_x)
    , top_y(obj.top_y)
    , width(obj.width)
    , height(obj.height)
    , color(obj.color)
{}
Rectangle::Rectangle(Point left_top, int t_width, int t_height, BWColor color) 
    : left_x(left_top.x)
    , top_y(left_top.y)
    , width(t_width)
    , height(t_height)
    , color(color.getColor())
{}

Rectangle::Rectangle(Point left_top, int t_width, int t_height, RGBColor color)
    : left_x(left_top.x)
    , top_y(left_top.y)
    , width(t_width)
    , height(t_height)
    , color(color.getColor())
{}


    // Draw method
void Rectangle::draw(Matrix& mat) {
    int bm_y = top_y + height;
    int right_x = left_x + width;

    // Bounds checking
    int rows = mat.getRows() - 1;
    int cols = mat.getCols() - 1;

    int start_y = std::max(0, top_y);
    int end_y = std::min(rows, bm_y);
    int start_x = std::max(0, left_x);
    int end_x = std::min(cols, right_x);

    // Draw rectangle
    for (int y = start_y; y <= end_y; ++y) {
        for (int x = start_x; x <= end_x; ++x) {
            for (size_t ch = 0; ch < std::min(mat.getChannels(), color.size()); ++ch) {
                mat.at(y, x, ch) = *std::next(color.begin(), ch);
            }
        }
    }
}