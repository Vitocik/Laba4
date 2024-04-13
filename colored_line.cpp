#include "colored_line.h"

CColoredLine::CColoredLine(const CPoint& start, const CPoint& end, const std::string& color) : CLine(start, end), color(color) {}

void CColoredLine::setColor(const std::string& color) {
    this->color = color;
}

std::string CColoredLine::getColor() const {
    return color;
}