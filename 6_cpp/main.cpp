#include <iostream>

using namespace std;


int main()
{
    int i = 0;
    int auswahl;
    cout << "Was soll ich tun? (1-4) ";
    cin >> auswahl;

    while (i <= 100)
    {
        if(auswahl == 1) // ungerade Schnapszahl
        {
            if(i % 2 == 1 && i % 11 == 0)
                 cout << i << ", ";
        }

        else if(auswahl == 2) // gerade Zahl zwischen 27 und 61
        {
            if(i % 2 == 0 && i < 62 && i > 26)
                  cout << i << ", ";
        }

        else if(auswahl == 3)
        {
            if(i % 11 == 0 || (i >= 0 && i < 10)) // Palindrom
                  cout << i << ", ";
        }

        else if(auswahl == 4) // Primzahl
        {
            if(i == 2 || i == 3 || i == 5 || i == 7)
                 cout << i << ", ";

            else if(i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
                 cout << i << ", ";

        }

        i++;
    }
    return 0;
}
