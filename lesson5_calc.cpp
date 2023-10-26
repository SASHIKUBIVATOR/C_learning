#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    float res;
    bool flag = false;
    cout << flag;
    cout << "Enten num1\n";
    cin >> num1;

    cout << "Enten num2\n";
    cin >> num2;

    char math;
    cout << "Enten math symbol\n";
    cin >> math;
        switch (math) {
            case '+':
                res = num1 + num2;
                break;
            case '-':
                res = num1 + num2;
                break;
            case '*':
                res = num1 + num2;
                break;
            case '/':
                res = num1 + num2;
                break;
            default:
                cout << "Error, try again" << endl;
        }
    cout << "Result: " << res << endl;
}