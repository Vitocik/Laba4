/*Вариант 2
Создать класс CPoint — точка. На его основе создать классы CcoloredPoint и
CLine. На основе класса CLine создать класс CColoredLine и класс CPolyLine —
многоугольник. Все классы должны иметь методы для установки и получения
значений всех координат, а также изменения цвета и получения текущего цвета.
Написать демонстрационную программу, в которой будет использоваться список
объектов этих классов в динамической памяти. */
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Определение класса CPoint (точка)
class CPoint {
protected:
    int x;  // Координата X
    int y;  // Координата Y

public:
    // Конструктор класса CPoint
    CPoint(int x = 0, int y = 0) : x(x), y(y) {}

    // Методы для установки координат
    void setX(int newX) { x = newX; }
    void setY(int newY) { y = newY; }

    // Методы для получения координат
    int getX() const { return x; }
    int getY() const { return y; }
};

// Определение класса CColoredPoint (цветная точка), наследующего от CPoint
class CColoredPoint : public CPoint {
private:
    string color;  // Цвет точки

public:
    // Конструктор класса CColoredPoint
    CColoredPoint(int x = 0, int y = 0, const string& color = "black") : CPoint(x, y), color(color) {}

    // Методы для установки и получения цвета
    void setColor(const string& newColor) { color = newColor; }
    string getColor() const { return color; }
};

// Определение класса CLine (линия), состоящего из двух точек
class CLine {
protected:
    CPoint start;  // Начальная точка линии
    CPoint end;    // Конечная точка линии

public:
    // Конструктор класса CLine
    CLine(const CPoint& start = CPoint(), const CPoint& end = CPoint()) : start(start), end(end) {}

    // Методы для установки начальной и конечной точек
    void setStart(const CPoint& newStart) { start = newStart; }
    void setEnd(const CPoint& newEnd) { end = newEnd; }

    // Методы для получения начальной и конечной точек
    CPoint getStart() const { return start; }
    CPoint getEnd() const { return end; }
};

// Определение класса CColoredLine (цветная линия), наследующего от CLine
class CColoredLine : public CLine {
private:
    string color;  // Цвет линии

public:
    // Конструктор класса CColoredLine
    CColoredLine(const CPoint& start = CPoint(), const CPoint& end = CPoint(), const string& color = "black") : CLine(start, end), color(color) {}

    // Методы для установки и получения цвета
    void setColor(const string& newColor) { color = newColor; }
    string getColor() const { return color; }
};

// Определение класса CPolyLine (многоугольник), состоящего из списка точек
class CPolyLine {
protected:
    vector<CColoredPoint> points;  // Список точек многоугольника

public:
    // Метод для добавления новой точки в многоугольник
    void addPoint(const CColoredPoint& point) { points.push_back(point); }

    // Метод для получения списка точек многоугольника
    vector<CColoredPoint> getPoints() const { return points; }
};

int main() {
    setlocale(LC_ALL, "Ru");
    // Создание объектов для игры "Морской бой"
    CPolyLine ships;  // Многоугольник для кораблей
    CPolyLine hits;   // Многоугольник для попаданий

    // Добавление кораблей и попаданий в соответствующие многоугольники
    ships.addPoint(CColoredPoint(1, 2, "красный"));   // Корабль 1
    ships.addPoint(CColoredPoint(3, 4, "желтый"));   // Корабль 2

    hits.addPoint(CColoredPoint(5, 6, "синий"));  // Попадание 1
    hits.addPoint(CColoredPoint(7, 8, "зеленый"));  // Попадание 2

    // Вывод информации о кораблях
    cout << "Корабли:" << endl;
    for (const auto& point : ships.getPoints()) {
        cout << "Корабль в (" << point.getX() << ", " << point.getY() << "), Цвет: " << point.getColor() << endl;
    }

    // Вывод информации о попаданиях
    cout << "\nПопадания:" << endl;
    for (const auto& point : hits.getPoints()) {
        cout << "Попадание в (" << point.getX() << ", " << point.getY() << "), Цвет: " << point.getColor() << endl;
    }

    return 0;
}
