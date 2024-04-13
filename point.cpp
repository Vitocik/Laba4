#include "point.h"

CPoint::CPoint(double x, double y) : x(x), y(y) {}

void CPoint::setCoordinates(double x, double y) {
    this->x = x;
    this->y = y;
}

double CPoint::getX() const {
    return x;
}

double CPoint::getY() const {
    return y;
}