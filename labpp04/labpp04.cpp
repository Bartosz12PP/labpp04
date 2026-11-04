#include <iostream>
using namespace std;

int dodawanie(int a, int b); //funkcja (zwracajaca wynik typu int)
void wyswietlanie(int a, int b); //funkcja bedaca procedura :)
void siema(string imie);
void tabliczka();

int zmiennaGlobalna = 10;
int main()
{
    //zad0
    int a = 45, b = 25;
    int suma = dodawanie(a, b);
    cout << "Jesli dodam " << a << " do " << b << " to otrzymam " << suma << endl;
    wyswietlanie(11, 22);
    cout << "Zmienna globalna: " << zmiennaGlobalna << endl;
    cout << "Wartosci a oraz b: " << a << " i " << b << endl;

    //zad1
    string imie;
    cout << "podaj imie: ";
    cin >> imie;
    siema(imie);
    tabliczka();
    cout << "podaj a i b";
    cin >> a >> b;










    return 0;
}
int dodawanie(int a, int b) {
    int wynik = a + b;
    return wynik;
}
void wyswietlanie(int a, int b) {
    cout << "Wynik procedury / funkcji z void: " << a + b << endl;
    zmiennaGlobalna = 20;
    a = 111;
    b = 222;
}
void siema(string imie) {
    cout << "Czesc " << imie << endl;
}
void tabliczka() {
    cout << "Tabliczka mnozenia:" << endl;
    for (int k = 1; k <= 10; k++) {
        for (int l = 1; l <= 10; l++) {
            cout << k * l << "\t";
        }
        cout << endl;

    }
}

