#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

void menu();
int dado();
int histograma(int tam);
int main(){
	srand(time(NULL));
	int opc,caras[6]={0},n;
do
{
	menu();
	cin>>opc;
	switch (opc)
{
	
		
	 case 1: 
	 cout<<"1 Lanzamiento "<<endl;
	 for (int i=1;i<=100;i++)
	 {
	 	n=dado();
	 	caras[n-1]++;
	 }
	 for (int a=1;a<=6;a++)
	 {
	 
	 	cout<<"cara "<<a<<" ";
	 	cout<<histograma(caras[a-1])<<endl;
	 
}
		break;
	 
	 case 2: 
	 int suma;
	 cout<<"2 Lanzamiento ";
	    for(int i=1;i<=100;i++)
	    {
	    	n=dado()+dado();
	    	caras[n-1]++;
		}
		for(int i=1;i<=6;i++)
		{
			
			suma+=caras[i-1];
		}
			cout<<"Caras totales "<<suma<<" ";
			cout<<histograma(suma)<<endl;
		
	
}
return 0;
	
}

 while (opc!=0);
return 0;
}
void menu()
{
int valor=0,num,fin;
cout<<"Dado"<<endl<<endl;
cout<<"¿Que quieres hacer? "<<endl;
cout<<" "<<endl;
cout<<"lanzamiento 1 "<<endl;
cout<<"lnzamiento 2 "<<endl;
cout<<"salir 0"<<endl;

}
int dado()
{
int n;
n=rand()%6+1;
return n;
}
int histograma(int tam)
{
int i;
for(i=1;i<=tam;i++)
cout<<"*";
}

