#pragma once
#ifndef COLORED_LINE_H
#define COLORED_LINE_H

#include "line.h"

class CColoredLine : public CLine {
private:
    std::string color;
public:
    CColoredLine(const CPoint& start = CPoint(), const CPoint& end = CPoint(), const std::string& color = "black");
    void setColor(const std::string& color);
    std::string getColor() const;
};

#endif // COLORED_LINE_H