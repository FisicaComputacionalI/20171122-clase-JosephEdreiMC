//Joseph Edrei Moreno Cruz
//22 de novimebre
//Derivada de la función coseno
//Después de una serie de corrida manuales he encontrado que la h más pequeña para la cual r(=cos(x+h)-cos(x+2*h)) sigue siendo distinto de cero es h=9*10^-8 conforme a las instrucciones dadas, sin embargo el valor de h para el cual realmente el programa funciona es: h=3*10^-7 , ver la explicación más abajo.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  float x=0.15;
  float h=3*pow(10,-7);
  float r,p;
//cout << "ingresar h tan pequeña como querramos ";
//  cin >> h;
r=cos(x+h)-cos(x+2*h);
p=cos(x+h)-cos(x);
cout<<"checar que r siempre es mayor a cero, r es "<< r <<endl;
cout<<"checar que p siempre es mayor a cero, p es "<< p <<endl;
cout<<"el valor de la h elegida es "<< h <<endl;
//Despues de una serie de corrida manuales he encontrado que la ha mas pequeña en la que r sigue siendo distinto de cero es h=9*10^-8
//Sin embargo esto no ocurre con p, aun cuando r>0 p si puede ser cero, esto es un problema ya que la h mas pequeña para que p>0 es mayor que la h necesaria para que r>0
//Ahora hallaremos el valor del limite para el valor mas pequeño de h que la computadora puede emplear para p>0 (si elegimos la h mas pequeña para r>0 entonces p=0, luego derivative=0 para toda x en reales lo cual es absurdo).
float derivative, exacto;
derivative=(cos(x+h)-cos(x))/h;
//Es bien sabido en cálculo diferencial en una variable que la derivada de la función cos es -sin
exacto=-sin(x);
cout<<"El valor aproximado de la derivada en "<< x << " es: "<<derivative<<endl;
cout<<"El valor 'exacto' de la devivada en "<< x <<" es; "<<exacto<<endl;

  return 0;
}
