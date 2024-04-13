#include "line.h"

CLine::CLine(const CPoint& start, const CPoint& end) : start(start), end(end) {}

void CLine::setStart(const CPoint& start) {
    this->start = start;
}

void CLine::setEnd(const CPoint& end) {
    this->end = end;
}

CPoint CLine::getStart() const {
    return start;
}

CPoint CLine::getEnd() const {
    return end;
}