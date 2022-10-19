// lab1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <fstream>
#include <list>
#include <ostream>

using namespace std;
int main()
{
    cout << "Are you already registered? (y/n)\n>";
    char c;
    cin >> c;
    if (c == 'y') {
        ifstream inp{"test.txt"};
        list<string> l1{};
        string s;
        if (inp.is_open()) {

            while (inp.good()) {
                inp >> s;
                
                l1.push_back(s);
            }
        }
        for (auto e : l1) {
            cout << e << "\n";
        }
    }
    else {
        cout << "***********Registration************\n";
        string s1, s2;
        cout << "Login: ";
        cin >> s1;
        cout << "Password: ";
        cin >> s2;

        ofstream outFile{ "test.txt", ios_base::app };
        if (!outFile.good()) {
            cerr << "Error while opening output file!" << endl;
        }
        outFile << "Login: " << s1 << "\n" << "Password: " << s2 << "\n";
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
