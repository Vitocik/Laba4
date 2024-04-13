/*Вариант 2
Создать класс CPoint — точка. На его основе создать классы CcoloredPoint и
CLine. На основе класса CLine создать класс CColoredLine и класс CPolyLine —
многоугольник. Все классы должны иметь методы для установки и получения
значений всех координат, а также изменения цвета и получения текущего цвета.
Написать демонстрационную программу, в которой будет использоваться список
объектов этих классов в динамической памяти.*/
#include <iostream>
#include "colored_point.h"
#include "colored_line.h"
#include "polyline.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "Ru");
    CColoredPoint point(1.5, 2.5, "red");
    cout << "Colored Point: (" << point.getX() << ", " << point.getY() << "), Color: " << point.getColor() << endl;

    CColoredLine line(CPoint(1, 1), CPoint(2, 2), "blue");
    cout << "Colored Line: Start (" << line.getStart().getX() << ", " << line.getStart().getY() << "), End (" << line.getEnd().getX() << ", " << line.getEnd().getY() << "), Color: " << line.getColor() << endl;

    CPolyLine polyline;
    polyline.addLine(CLine(CPoint(1, 1), CPoint(2, 2)));
    polyline.addLine(CLine(CPoint(2, 2), CPoint(3, 3)));

    vector<CLine> lines = polyline.getLines();
    cout << "Polyline:" << std::endl;
    for (const auto& line : lines) {
        cout << "Start (" << line.getStart().getX() << ", " << line.getStart().getY() << "), End (" << line.getEnd().getX() << ", " << line.getEnd().getY() << ")" << endl;
    }

    return 0;
}
