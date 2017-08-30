#include<iostream>
#include<math.h>
#include<stdio.h>
#include<conio.h>

using namespace std;

int main()
{
    int menu=0;
	int long fac,o,i,factorial,final,valor2,res,resultado,valor1;
	

	while(menu>=0)
	{
		system ("cls");
	 	cout<<"Seleciona un opcion";
	 	cout<<endl<<"1 Valor de la constante ";
	 	cout<<endl<<"2 Valor exponencial ";
	 	cout<<endl<<"0 salir ";
	 	cin>>menu;
	

	    switch (menu)
		{
			case 1: 
	   		cout<<"Ingresa el valor de la constante ";
	   		cin>>valor1;
			for (i=1;i<=valor1;i++)
			{
				factorial*=i;
				resultado+=1/factorial;
    		}
    		resultado+=valor1;

    		cout<<"El resultado es "<<resultado;
	 		break;

		
			case 2:
        	cout<<"Ingresa el valor ";
			cin>>valor2;
			for(o=1;o<=valor2;o++)
	     	{ 
				fac*=o;
				res=pow(valor2,o);
				res+=res/fac;
		 	} 
	   		cout<<"El resultado es "<<res;
		
			break; 
				
			case 0: 
			return 0;
			break;
			
			default:
				cout<<"opcion no valida ";
		}
			getch();
	}
}

