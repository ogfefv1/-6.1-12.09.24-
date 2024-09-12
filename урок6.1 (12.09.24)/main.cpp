//
//  main.cpp
//  урок6.1 (12.09.24)
//
//  Created by Егор Джемлиханов on 12.09.2024.
//




#include<iostream>
using namespace std;

class Point3D 
{
    int x, y, z;

public:
  
    void Input(int x, int y, int z) 
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    void Input()
    {
        x = rand() % 10;
        y = rand() % 10;
        z = rand() % 10;
    }

    void Show() 
    {
        cout << x << "\t" << y << "\t" << z << endl;
    }

    Point3D Sum(Point3D & b)
    {
        Point3D rez;
        rez.x = x + b.x;
        rez.y = y + b.y;
        rez.z = z + b.z;
        return rez;
    }

    Point3D& Sum(int a, int b, int c)
    {
        x += a;
        y += b;
        z += c;
        return *this;
    }
};

int main() 
{
    Point3D obj1;
    obj1.Input(1, 2, 3);
    obj1.Show();

    Point3D obj2;
    obj2.Input(4, 5, 6);
    obj2.Show();

    Point3D rez = obj1.Sum(obj2);
    rez.Show();

    obj1.Sum(10, 20, 30);
    obj1.Show();

    return 0;
}
