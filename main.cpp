#include <iostream>
#include "MultiConjunto.h"

using namespace std;

template <typename T>
void insertar(Multiconjunto<T> &mc)
{
    T num;
    if (mc.cardinalidad() == 100)
    {
        cout << "El conjunto de datos ya esta al completo.";
    }
    else
    {
        cout << "Valor a anadir : ";
        cin >> num;
        mc.anade(num);
    }
}

int main()
{
    Multiconjunto<int> mci;
    Multiconjunto<char> mcc;
    int opc;

    do {
        cout << "------Menu--------" << endl;
        cout << "1. Ingresar valor." << endl;
        cout << "2. Eliminar valor." << endl;
        cout << "3. Ingresar caracter." << endl;
        cout << "4. Eliminar caracter." << endl;
        cout << "5. Verificar tamano de enteros." << endl;
        cout << "6. Verificar tamano de caracteres." << endl;
        cout << "7. Ingresar Persona." << endl;
        cout << "8. Eliminar Persona." << endl;
        cout << "9. Modificar Persona." << endl;
        cout << "10. Verificar cuantas personas hay." << endl;
        cout << "11. Salir." << endl ;
        cout << "Elija opcion : ";
        cin >> opc;

        switch (opc) {
            case 1: insertar(mci);
                break;
            case 2:
                break;





        }
    } while (opc != 11);

    return 0;
}
