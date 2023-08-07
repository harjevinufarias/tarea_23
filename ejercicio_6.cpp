/*Diseñe la función devuelve el valor mayor de un vector de N elementos.
Por ejemplo si el vector es 16, 3, 4, 55, 6, 10, 1, 33, 12. El valor mayor sería el 55*/

#include <iostream>
#include <vector>

using namespace std;

int encontraMayor(const vector<int>& vec) 
{
  int mayor = vec[0]; 
    for (int i = 1; i < vec.size(); i++) 
    {
      if (vec[i] > mayor) 
      {
        mayor = vec[i]; 
      }
    }
  return mayor;
}

int main() 
{
  vector<int> numero = {16, 3, 4, 55, 6, 10, 1, 33, 12};

  int mayor = encontraMayor(numero);
  cout << "El mayor es: " << mayor << endl;

  return 0;
}