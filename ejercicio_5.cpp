/*
Se tiene un vector de N enteros. Diseñe la función que determina cuantas veces se encuentra un número cualquiera en el vector.
por ejemplo si el array es 10, 2, 3, 4, 2, 7, 2, 1, 2, 77 y se pide buscar el número 2
El resultado sería: El elemento #2 existe en el vector 4 veces
*/

#include <iostream>
#include <vector>

using namespace std;

int contarApariciones(const vector<int>& vec, int numero) 
{
    int contador = 0;
    for (int j= 0; j < vec.size(); j++) 
    {
        if (vec[j]==numero) 
        {
            contador++;
        }
    }
    return contador;
}

int main() 
{
    vector<int> vectorNumeros = {10,2,3,4,2,7,2,1,2,77};
    int numeroBuscado=2;

    int apariciones=contarApariciones(vectorNumeros,numeroBuscado);

    cout<<"El elemento #"<<numeroBuscado<<" existe en el vector "<<apariciones<<" veces." <<endl;

    return 0;
}
