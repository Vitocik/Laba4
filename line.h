#pragma once
#ifndef LINE_H
#define LINE_H

#include "point.h"

class CLine {
private:
    CPoint start;
    CPoint end;
public:
    CLine(const CPoint& start = CPoint(), const CPoint& end = CPoint());
    void setStart(const CPoint& start);
    void setEnd(const CPoint& end);
    CPoint getStart() const;
    CPoint getEnd() const;
};

#endif // LINE_H