#include <iostream>
#include <cctype>
#include <string> 
using namespace std;

int main() {
    string inputString;
    cout << "Введіть рядок символів: ";

    getline(cin, inputString);

    int punctuationCount = 0;

    for (char character : inputString) {
        if (ispunct(character)) {
            punctuationCount++;
        }
    }

    cout << "Кількість символів пунктуації в рядку: " << punctuationCount << endl;

    return 0;
}
