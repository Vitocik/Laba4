#pragma once
#ifndef COLORED_POINT_H
#define COLORED_POINT_H

#include "point.h"

class CColoredPoint : public CPoint {
private:
    std::string color;
public:
    CColoredPoint(double x = 0, double y = 0, const std::string& color = "black");
    void setColor(const std::string& color);
    std::string getColor() const;
};

#endif // COLORED_POINT_H