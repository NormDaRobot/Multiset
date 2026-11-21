#include "MultiConjunto.h"
#include "Persona.h"

template <typename T>
Multiconjunto<T>::Multiconjunto()
{
    num = 0;
}

template <typename T>
bool Multiconjunto<T>::esVacio() const {
    bool esta = false;

    if (num == 0) {
        esta = true;
    } else {
        esta = false;
    }

    return esta;
}

template <typename T>
int Multiconjunto<T>::cardinalidad() const {
    return num;
}

template <typename T>
void Multiconjunto<T>::anade(const T& objeto) {
    c[num] = objeto;
    num++;
}

template <typename T>
void Multiconjunto<T>::elimina(const T& objeto) {
    int pos = 0;
    while (c[pos] != objeto) {
        pos++;
    }

    while (pos < num - 1) {
        c[pos] = c[pos + 1];
        pos++;
    }

    num--;
}

template <typename T>
bool Multiconjunto<T>::pertenece(const T& objeto) const {
    int pos = 0;
    bool esta = false;

    do {
        if (c[pos] == objeto) {
            esta = true;
        }

        pos++;
    } while (pos < num);
}

template class Multiconjunto<int>;
template class Multiconjunto<char>;
template class Multiconjunto<Persona>;
