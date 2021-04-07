#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int numero;
    int contador = 0;
    int primoNumero = 0;
    int calculos = 0;
    unsigned t0, t1;

    cout << "Ingrese un número para el rango de N primos:" << endl;
    cin >> numero;

    t0 = clock();

    primoNumero++;
    cout << primoNumero << ". " << 2 << endl;

    for (int numeroActual = 3; numeroActual < numero; numeroActual += 2)
    {
        for (int divisor = 2; divisor < numeroActual; divisor++)
        {
            calculos++;

            if (numeroActual % divisor == 0)
            {
                contador++;
                break;
            }
        }
        if (contador == 0)
        {
            primoNumero++;
            cout << primoNumero << ". " << numeroActual << endl;
        }
        contador = 0;
    }

    t1 = clock();

    cout << "Calculos: " << calculos << endl;
    double time = (double(t1 - t0) / CLOCKS_PER_SEC);
    cout << "Tiempo de ejecución: " << time << endl;
    return 0;
}