#include <iostream>
using namespace std;

int main() {
    int b=10,c=11,d=8,f=20,j=9;


    setlocale(LC_ALL, "Russian");

    int mult = b * c;
    int difference = f + j; // реверсивное действие
    int division =  mult / d;

    int a1 = division -  difference;
    int a2 =  static_cast<double>( mult ) / d - difference;
    double a3 = static_cast<double>( mult ) / d - difference;

    cout << a1 << endl;
    cout << a2 << endl;
    cout << a3 << endl;
    return 0;

}
