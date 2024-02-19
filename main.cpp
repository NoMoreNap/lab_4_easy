#include <iostream>
using namespace std;

int main() {
   setlocale(LC_ALL, "Russian");

    int b=0.1,
            c=0,
            d=1,
            f=0,
            j=0
    , wrapper_b = 0, wrapper_c = 0;

    if (d == 0) {
        wcout << L"Нельзя делить на 0";
        return 0;
    }
    b < 0 ? wrapper_b = b * -1 : wrapper_b = b;
    c < 0 ? wrapper_c = c * -1 : wrapper_c = c;
    unsigned long mult_value = static_cast<long>( wrapper_b*wrapper_c ) ;
    long max_value = ((-1 * (1<<31)) - 1);
    if ( mult_value >= max_value || wrapper_c == max_value || wrapper_b == max_value) {
        wcout << L"Введены некорректные данные";
        return 0;
    }
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
