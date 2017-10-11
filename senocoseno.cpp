#include<iostream>
#include<math.h>
#include<stdio.h>
#include<conio.h>

using namespace std;
int menu();
int cos(int coseno, int fin);
int in(int lin, int fin);
int seno(int seno, int fin);
int fac(int lim);
int main(){
	int opc;
	int valor=0,num,fin;
	do{
		menu();
		cin>>opc;


switch (opc)
{	
	
	case 1:
		cout<<"Ingresa el valor de x: ";
		cin>>valor;
		cout<<"Ultimo valor para finalizar: ";
		cin>>fin;
		cos(valor,fin);
	break;
		case 2:
		
			cout<<"Ingresa  el valor ";
			cin>>valor;
			cout<<"Ingrese la base ";
			cin>>fin;
			in(valor,fin);
		
		break;
			case 3: //(num==3)
			
				cout<<"Ingresa el valor de x: ";
				cin>>valor;
				cout<<"Ingresa el valor a finalizar: ";
				cin>>fin;
				seno(valor,fin);
			
			break;
		}
			}
	while(opc>0);
	return 0;
			
			}
	

int cos(int coseno, int fin)
{	
	double final=1,a=2,b=-1;
	for(int cont=1;cont<=fin;cont++)
	{
		final+=(pow(coseno,a)/fac(a));
		a+=2;
		b*=-b;
	}
	cout<<"="<<final-b;
	cout<<endl;
	system("pause");
	return 1;
}
int in(int lin, int fin)
{
	double final=1;
	for(int cont=1;cont<=fin;cont++)
	{	
		//cout<<cont<<",";
		if(cont==1)
			final+=(lin-1/lin);
		else
			final+=(1/cont)*pow((lin-1/lin),cont);
	}
	cout<<final;
	cout<<endl;
	system("pause");
	return 1;
}
int seno(int seno, int fin)
{
	double final=1;
	int a=3;
	for(int cont=1;cont<=fin;cont++)
	{
		final+=(pow(seno,a)/fac(a));
		a+=2;
	}
	cout<<" ="<<final-seno;
	cout<<endl;
	system("pause");
	return 1;
}
int fac(int lim)
{	
	int factorial=1, inicial;
    for(inicial=1;inicial<=lim;inicial++)
	{	
     	factorial*=inicial;
	}
	return factorial;
}
int menu()
{
	system("cls");
	cout<<"Que quieres hacer? "<<endl;
	cout<<"  "<<endl;
	cout<<" 1 Coseno         "<<endl;
	cout<<" 2 Logaritmo Natural "<<endl;
	cout<<" 3 Seno          "<<endl;
	cout<<" 0 Salir         "<<endl;
	cout<<"  "<<endl;
	cout<<"   ";
}

