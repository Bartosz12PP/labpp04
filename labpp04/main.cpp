#include <iostream>
using namespace std;

int dodawanie(int a, int b); //funkcja (zwracajaca wynik typu int)
void wyswietlanie(int a, int b); //funkcja bedaca procedura :)
void siema(string imie);
void tabliczka();
void pokazWieksza(int a, int b);
int zwrocWieksza(int a, int b);
void pokazNajmniejsza(int a, int b, int c);
int zwrocNajmniejsza(int a, int b, int c);
double poleTrojkata(double podstawa, double wysokosc);
void wyswietlDzielniki(int n);
double sredniaWazona(double val1, double val2);
void przeciwprostokatna(double a, double b);
double dodaj(double a, double b);
double odejmij(double a, double b);
double pomnoz(double a, double b);
double podziel(double a, double b);
double sumaSkladnikowZwrot(int n);
void sumaSkladnikowWypis(int n);
double obwodProstokata(double a, double b);
double objetoscProstopadloscianu();
long long potegaAB(int a, int b);
long long silnia(int n);
long long potegaDwojkiBezLib(int n);
double potegaDwojkiZLib(int n);
void losujSzczesliwyNumerek(int szczesliwyNumerek);
int dzialanieParzysta(int n);
int dzialanieNieparzysta(int n);
void wykonajDzialania100();
int przetworzLiczbe(int n);

int zmiennaGlobalna = 10;
int main()
{
	srand(time(NULL));
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
	//zad2
	tabliczka();
	//zad3
    int a3, b3;
    cout << "Podaj a i b (Zad 3): ";
    cin >> a3 >> b3;
    pokazWieksza(a3, b3);
    cout << "Wieksza (zwrocona): " << zwrocWieksza(a3, b3) << endl;

    //zad4
    int a4, b4, c4;
    cout << "Podaj a, b i c (Zad 4): ";
    cin >> a4 >> b4 >> c4;
    pokazNajmniejsza(a4, b4, c4);
    cout << "Najmniejsza (zwrocona): " << zwrocNajmniejsza(a4, b4, c4) << endl;

    //zad5
    double p5, h5;
    cout << "Podaj podstawe i wysokosc trojkata: ";
    cin >> p5 >> h5;
    double pole = poleTrojkata(p5, h5);
    cout << "Podwojone pole: " << 2 * pole << endl;

    //zad6
    int n6;
    cout << "Podaj liczbe n (Zad 6): ";
    cin >> n6;
    wyswietlDzielniki(n6);

    //zad7
    double v1, v2;
    cout << "Podaj dwie wartosci do sredniej wazonej: ";
    cin >> v1 >> v2;
    cout << "Srednia wazona wynosi: " << sredniaWazona(v1, v2) << endl;

    //zad8
    double a8, b8;
    cout << "Podaj przyprostokatne (a i b): ";
    cin >> a8 >> b8;
    przeciwprostokatna(a8, b8);

    //zad9
    double a9, b9;
    cout << "Podaj a i b dla kalkulatora: ";
    cin >> a9 >> b9;
    cout << "Suma: " << dodaj(a9, b9) << endl;
    cout << "Roznica: " << odejmij(a9, b9) << endl;
    cout << "Iloczyn: " << pomnoz(a9, b9) << endl;
    cout << "Iloraz: " << podziel(a9, b9) << endl;

    //zad10
    int n10;
    cout << "Podaj liczbe skladnikow (Zad 10): ";
    cin >> n10;
    cout << "Zwrocona suma: " << sumaSkladnikowZwrot(n10) << endl;
    sumaSkladnikowWypis(n10);

    //zad11
    double a11, b11;
    cout << "Podaj boki prostokata: ";
    cin >> a11 >> b11;
    cout << "Obwod prostokata: " << obwodProstokata(a11, b11) << endl;

    //zad12
    cout << "Objetosc prostopadloscianu: " << objetoscProstopadloscianu() << endl;

    //zad13
    int a13, b13;
    cout << "Podaj podstawe a i wykładnik b (a^b): ";
    cin >> a13 >> b13;
    cout << "Wynik a^b: " << potegaAB(a13, b13) << endl;

    //zad14
    int n14;
    cout << "Podaj n do silni: ";
    cin >> n14;
    cout << "n! = " << silnia(n14) << endl;

    //zad15
    int n15;
    cout << "Podaj n: ";
    cin >> n15;
    cout << "Bez lib: " << potegaDwojkiBezLib(n15) << endl;
    cout << "Z lib: " << potegaDwojkiZLib(n15) << endl;

    //zad16
    int numerek;
    cout << "Podaj szczesliwy numerek [1-10]: ";
    cin >> numerek;
    losujSzczesliwyNumerek(numerek);

    //zad17
    wykonajDzialania100();

    //zad18
    int n18;
    cout << "Podaj liczbe calkowita: ";
    cin >> n18;
    przetworzLiczbe(n18);









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
void pokazWieksza(int a, int b) {
	if (a > b){
		 cout << "Wieksza liczba to: " << a << endl;
	}
    else if(b > a){
		cout << "Wieksza liczba to: " << b << endl;
		}
    else{
		cout << "Liczby sa rowne." << endl;
	}
}

int zwrocWieksza(int a, int b) {
    if (a > b) {
    return a;
	} 
	else{
    return b;
	}
}

void pokazNajmniejsza(int a, int b, int c) {
    int minVal = a;
    if (b < minVal) minVal = b;
    if (c < minVal) minVal = c;
    cout << "Najmniejsza liczba to: " << minVal << endl;
}

int zwrocNajmniejsza(int a, int b, int c) {
    int minVal = a;
    if (b < minVal) minVal = b;
    if (c < minVal) minVal = c;
    return minVal;
}

double poleTrojkata(double podstawa, double wysokosc) {
    double pole = 0.5 * podstawa * wysokosc;
    cout << "Pole trojkata wynosi: " << pole << endl;
    return pole;
}

void wyswietlDzielniki(int n) {
    if (n <= 0) {
        cout << "Liczba musi byc wieksza od 0!" << endl;
        return;
    }
    cout << "Dzielniki liczby " << n << " to: ";
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) cout << i << " ";
    }
    cout << n << endl;
}

double sredniaWazona(double val1, double val2) {
    double w1, w2;
    cout << "Podaj wage pierwszej wartosci: ";
    cin >> w1;
    cout << "Podaj wage drugiej wartosci: ";
    cin >> w2;
    return (val1 * w1 + val2 * w2) / (w1 + w2);
}

void przeciwprostokatna(double a, double b) {
    double c = sqrt(a * a + b * b);
    cout << "Przeciwprostokatna wynosi: " << c << endl;
}

double dodaj(double a, double b) { return a + b; }
double odejmij(double a, double b) { return a - b; }
double pomnoz(double a, double b) { return a * b; }
double podziel(double a, double b) {
    if (b == 0) {
        cout << "Blad: Dzielenie przez zero!" << endl;
        return 0;
    }
    return a / b;
}

double sumaSkladnikowZwrot(int n) {
    double suma = 0, val;
    for (int i = 1; i <= n; i++) {
        cout << "Podaj skladnik " << i << ": ";
        cin >> val;
        suma += val;
    }
    return suma;
}

void sumaSkladnikowWypis(int n) {
    double suma = 0, val;
    for (int i = 1; i <= n; i++) {
        cout << "Podaj skladnik " << i << ": ";
        cin >> val;
        suma += val;
    }
    cout << "Suma podanych skladnikow: " << suma << endl;
}

double obwodProstokata(double a, double b) {
    return 2 * a + 2 * b;
}

double objetoscProstopadloscianu() {
    double a, b, c;
    cout << "Podaj krawedzie prostopadloscianu (a b c): ";
    cin >> a >> b >> c;
    return a * b * c;
}

long long potegaAB(int a, int b) {
    long long wynik = 1;
    for (int i = 0; i < b; i++) {
        wynik *= a;
    }
    return wynik;
}

long long silnia(int n) {
    long long wynik = 1;
    for (int i = 1; i <= n; i++) {
        wynik *= i;
    }
    return wynik;
}

long long potegaDwojkiBezLib(int n) {
    long long wynik = 1;
    for (int i = 0; i < n; i++) {
        wynik *= 2;
    }
    return wynik;
}

double potegaDwojkiZLib(int n) {
    return pow(2, n);
}

void losujSzczesliwyNumerek(int szczesliwyNumerek) {
    if (szczesliwyNumerek < 1 || szczesliwyNumerek > 10) {
        cout << "Liczba musi byc z przedzialu [1, 10]!" << endl;
        return;
    }
    int liczniki = 0;
    cout << "Wylosowane liczby: ";
    for (int i = 0; i < 10; i++) {
        int wylosowana = rand() % 10 + 1;
        cout << wylosowana << " ";
        if (wylosowana == szczesliwyNumerek) liczniki++;
    }
    cout << endl;
    cout << "Numerek " << szczesliwyNumerek << " pojawi sie " << liczniki << " razy (" 
         << (liczniki / 10.0) * 100 << "% losowan)." << endl;
}

int dzialanieParzysta(int n) { return n / 2; }
int dzialanieNieparzysta(int n) { return (n - 1) / 2; }

void wykonajDzialania100() {
    for (int n = 1; n <= 100; n++) {
        if (n % 2 == 0) {
            cout << "n=" << n << " (parzysta) -> " << dzialanieParzysta(n) << endl;
        } else {
            cout << "n=" << n << " (nieparzysta) -> " << dzialanieNieparzysta(n) << endl;
        }
    }
}

int przetworzLiczbe(int n) {
    if (n % 6 == 0) {
        cout << "Liczba podzielna przez 6: zwracam 0" << endl;
        return 0;
    } else if (n % 3 == 0) {
        cout << "Liczba podzielna przez 3: zwracam szescian (" << n * n * n << ")" << endl;
        return n * n * n;
    } else if (n % 2 == 0) {
        cout << "Liczba parzysta: zwracam kwadrat (" << n * n << ")" << endl;
        return n * n;
    } else {
        cout << "Liczba nie spelnia zadnego z warunkow" << endl;
        return n;
	}
	}
}