#include <iostream>
using namespace std;

int main() {
    double a, b, c, x;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    cout << "Enter x: ";
    cin >> x;

    // Скорочене розгалуження
    double F1;
    if (a < 0 && c != 0) {
        F1 =(a*x*x) + (b*x) + c ;
    }
    if (a > 0 && c == 0) {
        F1 =(-a)/(x-b) ;
    }
    if (!(a < 0 && c != 0) && !(a > 0 && c == 0)) {
        F1 = a*(x+c);
    }

    // Повне розгалуження 
    double F2;
    if (a < 0 && c != 0) {
        F2 = (a * x * x) + (b * x) + c;
    }
    else if (a > 0 && c == 0) {
        F2 = (-a) / (x - b);
    }
    else {
        F2 = a * (x + c);
    }

    cout << "Result (shortened form): F = " << F1 << endl;
    cout << "Result (full form): F = " << F2 << endl;

    return 0;
}
