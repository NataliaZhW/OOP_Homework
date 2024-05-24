// OOP_HW_1.cpp 

#include <iostream>
using namespace std;

class Point
{
    double x;
    double y;
public:
    double getX() const { return x; }
    void setX(double x) { this->x = x; }
    double getY() const { return y; }
    void setY(double y) { this->y = y; }
    double distanse_metod(double x, double y) //метод, внутри класса, принимает одну точку (в данном случае координаты)
                                              //и находит расстояние до текущей,  
    {
        return sqrt(pow(x - this->x, 2) + pow(y - this->y, 2));
    }
    double distanse_metod(Point obgect) // можно написать вариант где принимается именно точка (Point obgect)
    {
        return sqrt(pow(obgect.x - this->x, 2) + pow(obgect.y - this->y, 2));
    }
};

double distanse_foo(Point First, Point Second) // функция, вне класса, принимет две точки
{
    return sqrt(pow(First.getX() - Second.getX(), 2) + pow(First.getY() - Second.getY(), 2));
}
//#define CLASS_POINT

void main()
{
    setlocale(LC_ALL, "");
    //#ifdef CLASS_POINT
    
    // координаты временной точки, введенные с консоли
    double x; 
    double y;
    cout << "Введите x: ";
    cin >> x;
    cout << "Введите y: ";
    cin >> y;
    cout << endl;

    // объявление и инициализация 2х точек
    Point A;
    A.setX(2);
    A.setY(3);
    Point B;
    B.setX(3);
    B.setY(3);

    cout << "Расстояние от координат (" << x << ";" << y << ") до точки A: " << A.distanse_metod(x, y) << "\n";
    cout << "Расстояние между точками А и В: " << distanse_foo(A, B) << "\n";
    cout << "Расстояние от точки B до точки A: " << A.distanse_metod(B) << "\n";

    //#endif
}