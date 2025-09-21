#include <iostream>
using namespace std;

int main() {
    //Задача 37
    
    double a, b;

    cout << "Введіть два числа a і b: ";
    cin >> a >> b;

    if (a + b == 0) {
        cout << "Помилка: a + b = 0, середнє гармонійне не існує." << endl;
    } else {
        double H = (2 * a * b) / (a + b);
        cout << "Середнє гармонійне H = " << H << endl;
    }

    return 0;
}
