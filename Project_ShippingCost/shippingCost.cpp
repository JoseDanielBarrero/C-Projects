#include <iostream>
#include <conio.h>

using namespace std;

int calcularValor(double peso)
{
	double valor;
	if(peso < 10)
	{
		valor = 28000;
	}
	else if(peso<30)
	{
		valor = 34000;
	}
	else if(peso<50)
	{
		valor = 34000 + 1600*(peso-30);
	}
	else
	{
		valor = 60000 + 1900*(peso-50);
	}
	return valor;
}

int main()
{
	double peso;
	
	cout << "Ingrese el peso del producto a enviar: "<<endl;
	cin>> peso;
	
	double valor = calcularValor(peso);
	cout<< endl;
	cout<< "El valor del envio es : $ " << valor <<endl;	
}
