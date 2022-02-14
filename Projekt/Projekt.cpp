#include <iostream>
using namespace std;

int main()
{
    float a, b, c, Z;
    int elementy = 0;
    int okna, drzwi;
    float powierzchnia;
    double puszki;

    cout << "Podaj dlugosc pomieszczenia: ";
    cin >> a;
    cout << "Podaj szerokosc pomieszcenia: ";
    cin >> b;
    cout << "Podaj  wysokosc pomieszcenia: ";
    cin >> c;
    cout << "Podaj wydajnosc farby: ";
    cin >> Z;

    if (c > 2) {
        for (int i = 1; i <= 5; i++) {
            if (0.3 * a >= i * 0.9) {
                elementy = elementy + 1;
            }
        }

        for (int i = 1; i <= 5; i++) {
            if (0.3 * b >= i * 0.9) {
                elementy = elementy + 1;
            }
        }

        elementy = 2 * elementy;

        if (elementy == 0 || elementy == 1) {
            cout << "Pomieszczenie jest zbyt male.";
            return 0;
        }
        else if (elementy == 2) {
            okna = 1;
            drzwi = 1;
        }
        else if (elementy == 3) {
            okna = 2;
            drzwi = 1;
        }
        else if (elementy == 4) {
            okna = 3;
            drzwi = 1;
        }
        else {
            okna = 3;
            drzwi = 2;
        }

        powierzchnia = 2 * a * c + 2 * b * c - drzwi * 2 * 0.9 - okna * 0.9;
        puszki = powierzchnia / Z / 1.25;
        puszki = ceil(puszki);

        cout << "Liczba drzwi: " << drzwi << endl;
        cout << "Liczba okien: " << okna << endl;
        cout << "Do pomalowania pomieszczenia trzeba kupic " << puszki << " puszek farby." << endl;

    }
    else {
        cout << "Pomieszczenie jest zbyt male.";
    }

    return 0;
}

