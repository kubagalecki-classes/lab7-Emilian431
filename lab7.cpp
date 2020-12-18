#include <iostream>
#include <variant>
#include <vector>
using namespace std;

// zad 5
double podziel(int l, int m)
{
    if (m == 0) {
        int wyjatek = 0;
        throw wyjatek;
    }
    return l / m;
}

// zad 6
class Informer
{
public:
    Informer() { cout << "Konstruuje" << endl; }
    ~Informer() { cout << "Niszcze" << endl; }
};

int main()
{
    // zad 1
    /*
    cout << "Podaj liczbe elementow wektora" << endl;
    int n;
    cin >> n;
    try {
        vector< int > wektor(n, 0);
    }

    catch (...) {
        cout << "Zostal rzucony wyjatek" << endl;
    }
    */
    // zad 2
    /*
    catch (const bad_alloc& e) {
        cout << "wyjatek: " << e.what() << endl;
    }
    */
    // zad 3
    /*
    int a, b;
    cout << "Podaj pierwsza liczbe calkowita" << endl;
    cin >> a;
    cout << "Podaj druga liczbe calkowita" << endl;
    cin >> b;
    try {
        vector< int >          wektor3(a, 0);
        variant< int, string > wariant;
        if (b % 2 == 0) {
            wariant = 42;
        }
        else {
            cout << "Nieparzyste" << endl;
        }
    }
    catch (const bad_alloc& ba) {
        cout << ba.what() << endl;
    }
    catch (const bad_variant_access& bva) {
        cout << bva.what() << endl;
    }
    */

    // zad 4
    /*
    int a, b;
    cout << "Podaj pierwsza liczbe calkowita" << endl;
    cin >> a;
    cout << "Podaj druga liczbe calkowita" << endl;
    cin >> b;
    try {
        vector< int >          wektor3(a, 0);
        variant< int, string > wariant;
        if (b % 2 == 0) {
            wariant = 42;
        }
        else {
            cout << "Nieparzyste" << endl;
        }
    }
    catch (const exception& e) {
        cout << e.what() << endl;
    }
    */
    // zad 5 i 6
    int x, y;
    cout << "Podaj licznik ulamka" << endl;
    cin >> x;
    cout << "Podaj mianownik ulamka" << endl;
    cin >> y;

    try {
        Informer info;
        podziel(x, y);
    }
    catch (const exception& wyjatek) {
        podziel(x, y);
    }
}