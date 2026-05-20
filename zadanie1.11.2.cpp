#include <iostream>
#include <clocale>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string str1, str2;
    str1 = {"малина"};
    
    cout << "Угадайте слово: ";
    cin >> str2;

    while (str1.compare(str2)) {
        cout << "Неправильно" << endl;
        cout << "Угадайте слово: ";
        cin >> str2;
    }
    cout << "Правильно! Вы победили! Загаданное слово — " + str1 << endl;
    

    return EXIT_SUCCESS;
}