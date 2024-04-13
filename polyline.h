#pragma once
#ifndef POLYLINE_H
#define POLYLINE_H

#include <vector>
#include "line.h"

class CPolyLine {
private:
    std::vector<CLine> lines;
public:
    void addLine(const CLine& line);
    std::vector<CLine> getLines() const;
};

#endif // POLYLINE_H