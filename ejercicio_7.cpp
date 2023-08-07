/*Diseñe la función devuelve el valor menor de un vector de N Elementos.
Por ejemplo si el vector es 16, 3, 4, 55, 6, 10, 1, 33, 12. El valor menor sería el 1*/

#include <iostream>
#include <vector>

using namespace std;

int encontraMenor(const vector<int>& vec) 
{
  int menor = vec[0]; 
  for (int i = 1; i < vec.size(); i++) 
  {
    if (vec[i] < menor) 
    {
      menor = vec[i]; 
    }
  }
  return menor;
}

int main() 
{
  vector<int> numero = {16, 3, 4, 55, 6, 10, 1, 33, 12};

  int menor = encontraMenor(numero);
  cout << "El menor es: " << menor << endl;

  return 0;
}