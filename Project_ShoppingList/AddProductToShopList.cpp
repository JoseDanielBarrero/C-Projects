#include <iostream>
#include <conio.h>

using namespace std;

int ingresoProductos()
{
	int cantidad = 0;
	
	cout<<"Digite la cantidad de elementos que va a agregar a la lista de compras: ";
	cin>>cantidad;
	
	string productos[cantidad];
	
	for(int i = 0; i<cantidad; i++)
	{
		cout<<"Digite el nombre del producto que va a agregar a la lista de compras: ";
		cin>>productos[i];
	}
	 
	system("cls");
	
	cout<< "Los productos ingresados fueron los siguientes: " << endl;
	cout<<endl;
	for(int i = 0; i<cantidad; i++)
	{
		cout<<productos[i]<<endl;
		
	}	
	cout<<endl;
}

int main()
{
	ingresoProductos();
	int satisfecho;
	while(true)
	{
		cout<<"Esta satisfecho con la lista mostrada? " <<endl;
		cout<<"0 - No esta satisfecho." <<endl;
		cout<<"1 - Esta satisfecho "<<endl;
		cout<<endl;
		cout<<"Digite la opcion deseada: ";
		cin>>satisfecho;
		
		if(satisfecho==0)
		{
			system("cls");
			ingresoProductos();
		}
		else
		{
			cout<<"Gracias por usar el programa :D"<<endl;
			break;
		}
	}
	
	cout<<endl;
	cout<<"Hecho por: Jose Daniel Barrero Barrios"<<endl;
	
	getch();
}

