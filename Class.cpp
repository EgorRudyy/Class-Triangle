// Рудый Е.А. 05-901
//Классы.2 задание
/*Создать класс Triangle, разработав следующие элементы класса: Поля: int a, b, c;
Конструктор, позволяющий создать экземпляр класса с заданными длинами сторон.
Методы, позволяющие: вывести длины сторон треугольника на экран; рассчитать периметр
треугольника; рассчитать площадь треугольника. Свойства: позволяющее получить-
установить длины сторон треугольника (доступное для чтения и записи); позволяющее
установить, существует ли треугольник с данными длинами сторон (доступное только для
чтения).*/


#include <iostream>
#include <math.h>
using namespace std;

class Triangle
{
private:
    int a, b, c;
    double P, S;
public:
    Triangle()
    {
    }
    Triangle(int A, int B, int C)
    {
        setTriangle(A, B, C);
    }

    void setTriangle(int A, int B, int C)
    {
        a = A;
        b = B;
        c = C;
    }
    void getTriangle()
    {
        cout << "a= " << a << "b= " << b << "c= " << c;
    }

    void printSides()
    {
        cout << "a=" << a << " b=" << b << " c=" << c << endl;
    }

    double Perimetr()
    {
        P = a + b + c;
        cout << "Perimetr = " << P << endl;
        return P;
    }

    double Area()
    {
        double p;
        p = P / 2;
        S = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << "Area = " << S << endl;
        return S;
    }

    bool IsTriangle()
    {
        if (a + b > c&& b + c > a&& a + c > b)
        {
            return true;
        }
        return false;
    }


};


int main()
{
    int a, b, c;
    cout << "Enter the size of the sides of the triangle" << endl;
    cout << "Enter a";
    cin >> a;
    cout << "Enter b";
    cin >> b;
    cout << "Enter c";
    cin >> c;
    Triangle objTriangle;
    objTriangle.setTriangle(a, b, c);
    objTriangle.getTriangle();
    objTriangle.IsTriangle();
    objTriangle.Perimetr();
    objTriangle.Area();

    system("pause");
    return 0;

}