#include <iostream>
using namespace std;

double max(double a, double b, double c) {
    double maxValue = a;

    if (b > maxValue) {
        maxValue = b;
    }

    if (c > maxValue) {
        maxValue = c;
    }

    return maxValue;
}

int main() {
    double a, b, c;
    cout << "Введіть перше число: ";
    cin >> a;
    cout << "Введіть друге число: ";
    cin >> b;
    cout << "Введіть третє число: ";
    cin >> c;

    
    double result = max(a, b, c);
    cout << "Максимальне значення: " << result << endl;

    return 0;
}
