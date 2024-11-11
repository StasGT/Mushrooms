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
Rectangle::Rectangle(std::list<int>left_top, int t_width, int t_height, BWColor color) 
    : left_x(*left_top.begin())
    , top_y(left_top.back())
    , width(t_width)
    , height(t_height)
    , color(color.getColor())
{}

Rectangle::Rectangle(std::list<int>left_top, int t_width, int t_height, RGBColor color)
    : left_x(*left_top.begin())
    , top_y(left_top.back())
    , width(t_width)
    , height(t_height)
    , color(color.getColor())
{}

void Rectangle::draw(Matrix& mat) {
    int bm_y = top_y + height;
    int right_x = left_x + width;
    for (int y = top_y; y <= bm_y; ++y) {
        for (int x = left_x; x <= right_x; ++x) {
            for (size_t ch = 0; ch < mat.getChannels(); ++ch) {
                mat.at(y, x, ch) = *std::next(color.begin(), ch);
            }
        }
    }
}