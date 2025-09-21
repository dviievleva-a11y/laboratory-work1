#include <iostream>
using namespace std;

int main() {
    double alpha;          
    const double PI = 3.14;  

    cout << "Введіть кут α у радіанах (0 ≤ α < 2π): ";
    cin >> alpha;

    if (alpha < 0 || alpha >= 2 * PI) {
        cout << "Помилка: кут повинен бути в межах 0 ≤ α < 2π." << endl;
    } else {
        double degrees = alpha * 180.0 / PI;
        cout << "Кут у градусах: " << degrees << "°" << endl;
    }

    return 0;
}
