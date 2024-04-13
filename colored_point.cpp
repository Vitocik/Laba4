#include "colored_point.h"

CColoredPoint::CColoredPoint(double x, double y, const std::string& color) : CPoint(x, y), color(color) {}

void CColoredPoint::setColor(const std::string& color) {
    this->color = color;
}

std::string CColoredPoint::getColor() const {
    return color;
}