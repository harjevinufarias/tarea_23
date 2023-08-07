/*
Diseñe la función que determina si un número cualquiera existe en un vector de N elementos. 
Si el número existe, devuelve verdadero, devuelve falso en caso contrario.
Por ejemplo sea el vector 10, 20, 11, 16, 5, 1, 23, y el número que deseo buscar es 16. 
Para este caso la función devuelve verdadero porque 16 si existe en el vector. 
*/

#include <iostream>
#include <vector>

using namespace std;


bool existeEnVector(const vector<int>& vec, int numero) 
{
    for (int i=0; i<vec.size(); i++) 
    {
        if (vec[i]==numero) 
        {
            return true;
        }
    }
    return false;
}

int main() 
{
    vector<int> vectorNumeros = {10,20,11,16,5,1,23};
    int numeroBuscado = 16;

    if (existeEnVector(vectorNumeros, numeroBuscado)) 
    {
        cout<<"El número "<<numeroBuscado<<" existe en el vector."<<endl;
    } 
    else 
    {
        cout<<"El número "<<numeroBuscado<<" no existe en el vector."<<endl;
    }

    return 0;
}
