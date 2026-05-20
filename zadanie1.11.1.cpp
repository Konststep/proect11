//#include <iostream>
#include <clocale>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string str1, str2;

    cout << "Введите имя: ";
    cin >> str1;
    cout << "Введите фамилию: ";
    cin >> str2;
    cout << "Здравствуйте, " + str1 + " " + str2 << endl;

    return EXIT_SUCCESS;
}