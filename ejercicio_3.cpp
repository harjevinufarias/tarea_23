/*
Se tiene un vector de N entonces:
Se pide diseñar la funcion que devuelva la sumatoria de sus elementos
*/

#include<iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

//LLena el vector con números aleatorios
void llenarVector(int vector[], int tamanio)
{
  for (int k=0; k<tamanio; k++)
  {
    int num=50+rand()%(100);
    vector [k]=num;
  }
}

//método para imprimir vector
void imprimeVector(int vector[], int tamanio)
{//vector indica la posicion inicial de memoria donde s enecuentra el primer elemento del array
  cout<<endl<<"Los elementos del vector son: ";
  for(int k=0; k<tamanio; k++)
  {
  cout<<endl<<vector[k];
  }
}

int sumatoria(int vector[], int tamanio)
{
  int suma=0;
  for(int k=0; k<tamanio; k++)
  suma+=vector[k];
  return suma;
}

int main()
{
  srand(time(NULL));


  const int MAX=20;
  int vector[MAX];

  llenarVector(vector, MAX);
  imprimeVector(vector, MAX);
  int suma=sumatoria(vector, MAX);
  cout<<endl<<"La sumatoria de los elementos del vector es "<<suma;

  return 0;
}