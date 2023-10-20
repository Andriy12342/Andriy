#include <iostream>
#include <climits> 
using namespace std;
int main() {
    int number;
    int minPositive = INT_MAX; 
    int maxNegative = INT_MIN; 

    while (true) {
        cout << "Введіть число (введення 0 завершить програму): ";
        cin >> number;

        if (number == 0) {
            break; 

        if (number > 0 && number < minPositive) {
            minPositive = number; 
        }
        else if (number < 0 && number > maxNegative) {
            maxNegative = number; 
        }
    }

    if (minPositive != INT_MAX) {
        cout << "Найменше додатнє число: " << minPositive << endl;
    }
    else {
        cout << "Додатніх чисел не було введено." << endl;
    }

    if (maxNegative != INT_MIN) {
        cout << "Найбільше від'ємне число: " << maxNegative << endl;
    }
    else {
        cout << "Від'ємних чисел не було введено." << endl;
    }

    return 0;
}
