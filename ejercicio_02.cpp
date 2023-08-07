/*
Una función recibe como parámetro 3 enteros que indican el año, mes y día del nacimiento
de una persona. La función debe devolver la edad de la persona en años, meses y días.
Debe investigar como capturar la fecha actual de la computadora.
*/

#include <iostream>
#include <ctime>

using namespace std;

//Tipo definido por el usuario
struct Fecha {
    int dia;
    int mes;
    int anio;
};

string calcularEdadActual(int anioNac, int mesNac, int diaNac)
{
    time_t now = time(0);
    tm* currentDate = localtime(&now);

    Fecha fechaActual;
    fechaActual.dia = currentDate->tm_mday;
    fechaActual.mes = currentDate->tm_mon + 1;
    fechaActual.anio = currentDate->tm_year + 1900;
    /*
    cout<<endl<<"DIA "<<fechaActual.dia;
    cout<<endl<<"MES "<<fechaActual.mes;
    cout<<endl<<"AÑO "<<fechaActual.anio;
    */
    int diasActuales = (fechaActual.anio * 360) + (fechaActual.mes*30) + fechaActual.dia;
    int diasNac = (anioNac*360) + (mesNac*30) + diaNac;
    int totDiasVida = diasActuales - diasNac;

    int edadAnio = totDiasVida/360;
    int edadMes = (totDiasVida % 360) / 30;
    int edadDias =  (totDiasVida % 360) % 30;
    string aux="Años " + to_string(edadAnio) + ", mes(es) " + to_string(edadMes)+ ", día(s) " + to_string(edadDias);


    return aux;
}


int main()
{
  int anio=2004;
  int mes=9;
  int dia=3;
  string edad = calcularEdadActual(anio, mes, dia);
  cout<<endl<<"Tu edad es "<<edad;
  return 0;
}