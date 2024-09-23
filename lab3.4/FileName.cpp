// Lab_03_4.cpp
// < Печерна Каріна >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 0.1

#include <iostream>
using namespace std;
int main()
{
    double x; // вхідний аргумент
    double y; // вхідний параметр
    double R; // вхідний параметр

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R = "; cin >> R;

    // Перша чверть (частина кола)
    if ((x >= 0 && y >= 0 ) ||
        (x >= 0 && y >= 0 && y >= -x - R))
        cout << "yes" << endl;
    else 
        cout << "no" << endl;
        
        
    cin.get();
    return 0;
}
