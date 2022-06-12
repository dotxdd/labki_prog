// szablony klas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
using namespace std;
template<class Typ1, class Typ2>
class para {
    Typ1 a; Typ2 b;
public:
    para() {};
    void wpisz(Typ1 a1, Typ2 b1) { a = a1, b = b1; }
    void wypisz() { cout << "twoje liczby:" << a << " i "<<b<<endl; }
};



template<>
class para<int, int> {
    int a; int b; int z;
public:
    para() {};
    void wpisz(int a1, int b1) { a = a1, b = b1; }
    void podaj_z(int _z) { z = _z; }
    void wypisz() { cout << "twoje liczby:" << a << " i " << b << " oraz "<<z<<endl; }
};
template<>
void para<const char*,const char*>::wypisz() {
    cout << "Mamy dwa napisy: " << a << " oraz napis: " << b;
}


int main()
{

    int c = 3;
    para<int, float > paroweczka;
    paroweczka.wpisz(c,81);
    paroweczka.wypisz();
    cout <<endl<< "######################" << endl;
    para<int,  int> p2;
    p2.wpisz(1, 2);
    p2.podaj_z(3);
    p2.wypisz();

    cout << endl << "######################" << endl;
    
    para<const char*, const char*> p3;
    p3.wpisz("test1", "test2");
    p3.wypisz();
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
