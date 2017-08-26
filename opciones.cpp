#include <iostream>

using namespace std;

int main() {
		int a, i, n = 0, factorial;
		float numero[10000], suma;
		int b, o;
		float promedio;
		cout<<"Escoje una opcion";
		cout<<endl<<"1 numero primo";
		cout<<endl<<"2 factorial";
		cout<<endl<<"3 promedio";
        cout<<endl<< "Ingrese una opcion";
        int opcion;
        cin>>opcion;
     
       	 switch(opcion)
     	{
     		case 1:
			 	 cout<< "  1.-Leer un numero y mostrar si es primo" << endl;
				cout<< "Ingrese el numero"<<endl;
				cin>> a;
					for(i=1; i<(a+1);i++)
					{
						if(a%i==0)
						{
							n++;
						}
					}
						if(n!=2)
					{
						cout<<"No es primo"<<endl;
					}
						else
					{
						cout<<"Si es primo"<<endl;
						
					}
		
				return 0;
     		 break;
        case 2: 
		    cout<< "  2.-Leer un numero y mostrar el factorial"<< endl;
        	cout<< "Ingresa el numero"<<endl;
        	cin>> a;
        	factorial = 1;
        		for (i=1; i<=a; i++)
				{
        			factorial = i*factorial;
        		}
        	cout<< "El factorial es"<< factorial<<endl;
        return 0;
        break;
        case 3: 
			cout<< "  3.-Leer calificaciones y promediarlas"<< endl;
        	cout<<"De cuantos numeros quieres el promedio"<<endl;
			cin>>b;
				for(o=1; o<=b; o++)
				{
					cout<<"Ingrese el numero"<<endl;
					cin>>numero[o];
				}
			suma = 0;
				for(o=1;o<=b;o++)
				{
					suma = suma + numero[o];
				}
			promedio = suma/b;
			cout<<"El promedio es "<<promedio<<endl;
				
		return 0;	
       	break;
       	case 0:
       		return 0;
       	break;	
        default: 
			cout<< " Salir"<< endl;
		
     }

}
