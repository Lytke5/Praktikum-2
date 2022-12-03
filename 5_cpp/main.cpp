#include <iostream>

using namespace std;

int translate(char buchstabe)
{
    switch(buchstabe)
    {
    case 'I':
    return 1;

    case 'V':
    return 5;

    case 'X':
    return 10;

    case 'L':
    return 50;

    case 'C':
    return 100;

    case 'D':
    return 500;

    case 'M':
    return 1000;
    }
    return 0;
}

int main()
{
    string roemischeZahl;
    int dezimalzahl = 0;
    int teilsumme = 0;

    cout << "Zahl = ";
    cin >> roemischeZahl;
    cout << endl;
    const char* roemischArray = roemischeZahl.c_str();

    int i = 0;
    while (i < roemischeZahl.length())
    {
        int aktuelleZahl = translate(roemischArray[i]);
        int naechsteZahl = translate(roemischArray[i+1]);

        if(aktuelleZahl >= naechsteZahl)
        {
            teilsumme += aktuelleZahl;
            dezimalzahl += teilsumme;
            teilsumme = 0;
        }
        else
        {
            teilsumme -= aktuelleZahl;
        }

        i++;
    }


    cout << "Dezimal von " << roemischeZahl << " = " << dezimalzahl << endl;
    cout << "Binaer von " << roemischeZahl << " = ";

    while (dezimalzahl > 0)
    {
        cout << dezimalzahl % 2;
        dezimalzahl /= 2;
    }


    return 0;
}
