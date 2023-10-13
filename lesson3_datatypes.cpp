#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout.precision(0); // Сколько отображать чисел после точки
    std::cout << "Hello, World!" << std::endl; // Одинаковые строки
    cout << "Hello, World!" << std::endl; // Одинаковые строки


    // Типы данных
    cout << fixed;
    short num;
    cout << "short lenght: " << sizeof(num) << " bytes, lay between " << -(pow(2, sizeof(num)*8) / 2) << " and " << pow(2, sizeof(num)*8) / 2 - 1 << " \n";
    cout << "Псевдонимы short int, signed short int, signed short\n";
    int num1;
    cout << "int lenght: " << sizeof(num1) << " bytes, lay between " << -(pow(2, sizeof(num1)*8) / 2) << " and " << pow(2, sizeof(num1)*8) / 2 - 1<< " \n";
    cout << "Псевдонимы signed int и signed, unsigned int - положительное число от 0 до 2^16 (64K) \n";
    float num2;
    cout << "float lenght: " << sizeof(num2) << " bytes, lay between " << -(pow(2, sizeof(num2)*8) / 2) << " and " << pow(2, sizeof(num2)*8) / 2 - 1<< " \n";
    cout << "Число с плавающей точкой одинарной точности \n";
    long num3;
    cout << "long lenght: " << sizeof(num3) << " bytes, lay between " << -(pow(2, sizeof(num3)*8) / 2) << " and " << pow(2, sizeof(num3)*8) / 2 - 1<< " \n";
    cout << "Длинный int на 8 байт, псевдонимы: long int, signed long int и signed long \n";
    double num4;
    cout << "double lenght: " << sizeof(num4) << " bytes, lay between " << -(pow(2, sizeof(num4)*8) / 2) << " and " << pow(2, sizeof(num4)*8) / 2 - 1<< " \n";
    cout << "Число с плавающей точкой двойной точности \n";
    bool num5;
    cout << "bool lenght: " << sizeof(num5) << " bytes, lay between " << -(pow(2, sizeof(num5)*8) / 2) << " and " << pow(2, sizeof(num5)*8) / 2 - 1 << " \n";
    cout << "Логический тип bool может хранить одно из двух значений: true (истинно, верно) и false (неверно, ложно). \nПо умолчанию false \n";
    char num6;
    char sym = 'f'; // Обязательно в одинарных кавычках
    cout << sym;
    cout << "\nТип char представляет один символ в кодировке ASCII, -128 до 127, либо от 0 до 255 \n";
    cout << "Приписка unsigned перед типом данных делает так, чтобы переменная принимала только положительные числа \n";


    auto aboba = 1;
    auto aboba1 = "dsadas";
    auto meow = 1.22;
    auto meow1 = 111.2;
    return 0;

}
