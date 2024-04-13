#include "polyline.h"

void CPolyLine::addLine(const CLine& line) {
    lines.push_back(line);
}

std::vector<CLine> CPolyLine::getLines() const {
    return lines;
}