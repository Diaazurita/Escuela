#include<iostream>
#include<stdlib.h>
using namespace std;
void cuadrado();
void menu();
void menu()
{ int y;
char x;
	do{
		
		cout<<"a.- Calcular el doble de un numero entero\n";
		cout<<"b.- Calcular la mitad de un numero entero\n";
		cout<<"c.- Calcular el cuadrado de un numero entero\n";
		cout<<"d.- Salir\n";
		cout<<"*************************************************"<<endl;
		cout<<"digita una opcion: "<<endl;
		cin>>x;
		switch(x)
		{
			case 'a':
				cout<<"digita un numero entero: "<<endl;
				cin>>y;
				y=y*2;
				cout<<"tu resultado es: "<<y<<endl;
				break;
				case 'b':
					cout<<"digita un numero entero: "<<endl;
				cin>>y;
				y=y/2;
				cout<<"tu resultado es: "<<y<<endl;
				break;
				case 'c':
					cuadrado();
				break;
				case 'd':
					system("exit");
				break;
			default:
			cout<<"error";	
		}
	}
	
	while (x!='d');
	system("pause");
}
void cuadrado(){
	int c;
	cout<<"digita un numero entero: ";
	cin>>c;
	c=c*c;
	cout<<"tu valor es: "<<c<<endl;
}
int main() {
	 menu();
	return 0;
}
	
	
	

