#include<iostream>
#include<conio.h>
#include<string.h>
#include<cstdlib>
#include<sstream>

using namespace std;


string empleados[5][10];
double final;

int agregarEmpleado(int pos)
{
	cout<<"Nombre del empleado: ";
	cin>> empleados[pos][0];
	
	cout<<"Cedula del empleado: ";
	cin>> empleados[pos][1];
	
	cout<<"Telefono del empleado: ";
	cin>> empleados[pos][2];
	
	cout<<"Cargo del empleado: ";
	cin>> empleados[pos][3];
	
	cout<<"Salario Base del empleado: ";
	cin>> empleados[pos][4];
	
	cout<<"Horas Extra del empleado: ";
	cin>> empleados[pos][5];
	
	cout<<"Descuentos por prestamo del empleado(valores del 0 al 1): ";
	cin>> empleados[pos][6];
	
	cout<<"Ahorro Voluntario del empleado(valores del 0 al 1): ";
	cin>> empleados[pos][7];
	
	cout<<"Descuentos por seguridad social del empleado(valores del 0 al 1): ";
	cin>> empleados[pos][8];
	
	
}

int calcularSalarioEmpleado(int pos)
{
	float salario, ahorro, seguridadSocial, prestamo;
	double nomina;
	int horasExtras;
	
	stringstream ss;	
	ss<< empleados[pos][4];
	ss>> salario;	
	
	
	stringstream ss1;
	ss1<< empleados[pos][5];
	ss1>> horasExtras;	

	
	stringstream ss2;
	ss2<< empleados[pos][6];
	ss2>> prestamo;

	
	stringstream ss3;
	ss3<< empleados[pos][7];
	ss3>> ahorro;
	
	stringstream ss4;
	ss4<< empleados[pos][8];
	ss4>> seguridadSocial;

	nomina = salario + (salario/160*1.5*horasExtras) - (salario*ahorro) - (salario*prestamo) - (salario*seguridadSocial);
	
	stringstream sss;
	sss<<nomina;
	empleados[pos][9] = sss.str();

}

int main()
{
	int numEmpleados;
	cout<<"Cuantos Empleados desea agregar a la nomina? (Maximo 5)"<<endl;
	cin>>numEmpleados;
	
	for (int i =0; i<numEmpleados;i++)
	{
		agregarEmpleado(i);
		calcularSalarioEmpleado(i);
		system("cls");
	}
	
	
//	Imprimir datos empleados

	cout<< "Los Datos De la nomina son los siguientes: " <<endl;
	cout<<endl;
	
	for (int i =0; i<numEmpleados;i++)
	{	
		cout<<"Nombre: " << empleados[i][0]<<endl;
		cout<<"Cedula: " << empleados[i][1]<<endl;
		cout<<"Telefono: " << empleados[i][2]<<endl;
		cout<<"Cargo: " << empleados[i][3]<<endl;
		cout<<"Salario Base: " << empleados[i][4]<<endl;
		cout<<"Horas Extra: " << empleados[i][5]<<endl;
		cout<<"Descuentos por prestamo: " << empleados[i][6]<<endl;
		cout<<"Ahorro Voluntario: " << empleados[i][7]<<endl;
		cout<<"Descuentos Seguridad Social: " << empleados[i][8]<<endl;
		
		stringstream ssf;
		ssf<<empleados[i][9]<<endl;
		ssf>>final;
		cout<<"Nomina Final: $" << std::fixed << final<<endl;
		cout<<"========================================="<<endl;
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"**************************************"<<endl;
	cout<<"Hecho por: Jose Daniel Barrero Barrios"<<endl;
	cout<<"**************************************"<<endl;
	getch();
}
