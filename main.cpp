#include <iostream>
#include <fstream>
#include <locale>
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;

struct shaurma
{
    int kalorii;
    double ves;
    wstring sous;
    wstring meat;
};

int main()
{
    //функция 1:

    //функция 2:
    wstringstream ss;
    int k = 12;
    ss << left << setw(k) << "Соус" << setw(k) << "Вес" << setw(k) << "Мясо" << setw(k) << "Килокалории" << endl;

    ofstream out("out.bin", ios::binary);
    //функция 3:
    return 0;
}
