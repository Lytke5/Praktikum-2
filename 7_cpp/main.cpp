#include <iostream>

using namespace std;

int main()
{
    int index = 1;
    int ersetzen;
    char FelderOffen[50];
    bool FelderIntern[50];
    bool imSpiel = true;
    int zuege = 0;

    int i = 0;
    while(i < 50)
    {
        FelderOffen[i] = '*';
        FelderIntern[i] = false;
        i++;
    }

    int position;
    cout << "Ort erste Mine = ";
    cin >> position;
    FelderIntern[position] = true;
    cout << "Ort zweite Mine = ";
    cin >> position;
    FelderIntern[position] = true;
    cout << "Ort dritte Mine = ";
    cin >> position;
    FelderIntern[position] = true;

    system("CLS");

    while (imSpiel)
    {
    int i = 1;
    while(i <=5)
    {
        int j = 1;
        while (j <= 10)
        {
            cout <<FelderOffen[index];
            j++;
            index++;
        }
        cout << endl;
        i++;
    }
    index = 0;
    cout << endl;
    cout << "Feld = ";
    cin >> ersetzen;
    zuege++;

    if(FelderIntern[ersetzen] == true)
    {
        imSpiel = false;
        FelderOffen[ersetzen] = 'o';
    }
    else
    {
        FelderOffen[ersetzen] = '_';
    }

    system("CLS");
    }
    // verloren ab hier:

    i = 1;
    while(i <=5)
    {
        int j = 1;
        while (j <= 10)
        {
            cout <<FelderOffen[index];
            j++;
            index++;
        }
        cout << endl;
        i++;
    }
    cout << endl;
    cout << "Leider verloren!" << endl;
    cout << "Zuege = " << zuege << endl;;
    return 0;
}
