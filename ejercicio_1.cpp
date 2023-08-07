/*Una función recibe como parámetro un entero. 
La función debe imprimir este entero en su equivalente en hexadecimal(base 16).*/
#include<iostream>

using namespace std;

string hexadecimal(int num)
{
  int residuo=0;
  string aux="   ";

  while (num>0)
  {
    residuo=num%16;
    aux= to_string(residuo)+aux ;
    num=num/16;

  }
  return aux;
}



//convierte un entero en hexadecimal (base 16)
string decimalHexadecimal(int num)
{
  int residuo=0;
  string aux="";
  while(num>0)
  {
    residuo = num % 16;
    if(residuo<10)
     aux= to_string(residuo) + aux;
    else if (residuo==10)
     aux = "A" + aux;
    else if (residuo==11)
     aux = "B" + aux;
    else if (residuo==12)
     aux = "C" + aux;
    else if (residuo==13)
     aux = "D" + aux;
    else if (residuo==14)
     aux = "E" + aux;
    else if (residuo==15)
     aux = "F" + aux;
    
    num = num / 16;
  }

  return aux;
}

int main()
{
  int num=255;
  cout <<endl<< "EL  número " <<num<<"en hexadecimal es: "<<decimalHexadecimal(num);

  num=1634;
  cout <<endl<< "EL  número " <<num<<"en hexadecimal es: "<<decimalHexadecimal(num);

  num=9999;
  cout <<endl<< "EL  número " <<num<<"en hexadecimal es: "<<decimalHexadecimal(num);

  return 0;

}