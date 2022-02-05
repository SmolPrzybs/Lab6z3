#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int tab[9];
    float srednia = 0, suma = 0;

    srand(time(NULL));
    for (int i = 0; i < 9; i++)
    {
        *(tab + i) = rand() % 10;
        cout << *(tab + i) << " ";
        suma += (tab + i);
    }

    srednia = suma / 9;
    cout << srednia << endl;

    for (int i = 0; i < 9; i++)
    {
        if ((tab + i) > srednia) cout << *(tab + i) << " ";
    }
}