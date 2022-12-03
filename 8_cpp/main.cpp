#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> zahlen;
    int groessteZahl = 0;
    int summe = 0;
    int mittelwert;

    char weiter = 'j';
    while(weiter == 'j')
    {
        int neueZahl;
        cout << "Naechste Zahl = ";
        cin >> neueZahl;
        zahlen.push_back(neueZahl);

        cout << "Weiter? (j/n) ";
        cin >> weiter;
    }
    int i = 0;
    while(i < zahlen.size())
    {
        if(zahlen[i] > groessteZahl)
            groessteZahl = zahlen[i];

        summe += zahlen[i];
        i++;
    }

    mittelwert = summe/zahlen.size();

    cout << "Groesste Zahl = " << groessteZahl << endl;
    cout << "Mittelwert = " << mittelwert << endl;

    return 0;
}
