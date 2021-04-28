#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int numero;
    bool esPrimo = true;
    int primoNumero = 0;
    int calculos = 0;

    cout << "Ingrese un número para el rango de N primos:" << endl;
    cin >> numero;

    primoNumero++;
    cout << primoNumero << ". " << 2 << endl;

    for (int numeroActual = 3; numeroActual < numero; numeroActual += 2)
    {
        for (int divisor = 2; divisor < int(sqrt(numeroActual)) + 1; divisor++)
        {
            calculos++;

            if (numeroActual % divisor == 0)
            {
                esPrimo = false;
                break;
            }
        }
        if (esPrimo)
        {
            primoNumero++;
            cout << primoNumero << ". " << numeroActual << endl;
        }
        esPrimo = true;
    }

    cout << "Calculos: " << calculos << endl;

    return 0;
}
