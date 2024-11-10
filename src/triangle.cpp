#include "..\include\triangle.h"

Triangle::Triangle(Matrix& mat) {
    // Convert lists to x,y coordinates
    int x1 = *m_a.begin(), y1 = *std::next(m_a.begin());
    int x2 = *m_b.begin(), y2 = *std::next(m_b.begin());
    int x3 = *m_c.begin(), y3 = *std::next(m_c.begin());

    // Bounds checking for coordinates
    int width = mat.getCols();
    int height = mat.getRows();

    // Find bounding box with clipping
    int minY = std::max(0, std::min({ y1, y2, y3 }));
    int maxY = std::min(height - 1, std::max({ y1, y2, y3 }));

    // For each scanline
    for (int y = minY; y <= maxY; y++) {
        std::vector<int> xIntersections;

        // Handle vertical and non-vertical edges separately
        // Edge 1: (x1,y1) to (x2,y2)
        if (y >= std::min(y1, y2) && y <= std::max(y1, y2)) {
            if (y1 == y2) {
                // Vertical line case
                xIntersections.push_back(x1);
                xIntersections.push_back(x2);
            }
            else {
                int x = x1 + (x2 - x1) * (y - y1) / (y2 - y1);
                xIntersections.push_back(x);
            }
        }

        // Edge 2: (x2,y2) to (x3,y3)
        if (y >= std::min(y2, y3) && y <= std::max(y2, y3)) {
            if (y2 == y3) {
                xIntersections.push_back(x2);
                xIntersections.push_back(x3);
            }
            else {
                int x = x2 + (x3 - x2) * (y - y2) / (y3 - y2);
                xIntersections.push_back(x);
            }
        }

        // Edge 3: (x3,y3) to (x1,y1)
        if (y >= std::min(y3, y1) && y <= std::max(y3, y1)) {
            if (y3 == y1) {
                xIntersections.push_back(x3);
                xIntersections.push_back(x1);
            }
            else {
                int x = x3 + (x1 - x3) * (y - y3) / (y1 - y3);
                xIntersections.push_back(x);
            }
        }

        // Sort and remove duplicates
        if (!xIntersections.empty()) {
            std::sort(xIntersections.begin(), xIntersections.end());
            auto last = std::unique(xIntersections.begin(), xIntersections.end());
            xIntersections.erase(last, xIntersections.end());

            // Fill between pairs of intersections
            for (size_t i = 0; i < xIntersections.size() - 1; i += 2) {
                int startX = std::max(0, xIntersections[i]);
                int endX = std::min(width - 1, xIntersections[i + 1]);

                for (int x = startX; x <= endX; x++) {
                    mat.at(x, y) = m_color;
                }
            }
        }
    }
}


Triangle::Triangle(std::list<int>a, std::list<int> b, std::list<int> c, BWColor& color) 
    : m_a(a)
    , m_b(b)
    , m_c(c)
    , m_color(color.getColor())
{}