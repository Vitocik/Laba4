#pragma once
#ifndef POINT_H
#define POINT_H

#include <string>

class CPoint {
protected:
    double x;
    double y;
public:
    CPoint(double x = 0, double y = 0);
    void setCoordinates(double x, double y);
    double getX() const;
    double getY() const;
};

#endif // POINT_H
