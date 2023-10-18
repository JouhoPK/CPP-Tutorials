#include <iostream>

using namespace std;

int main() {
    cout << "Fahrenheit: ";
    int fahrenheit;
    cin >> fahrenheit;
    double celsius = (fahrenheit - 32)*5/9;
    cout << "Celsius: " << celsius;
    return 0;
}