#include<iostream>
using namespace std;

 int main() 



 {
 	float horaentrada,horasalida,horas,min,seg,minsalida,segsalida;
 
 cout<<"Ingresa la hora de entrada";
 cin>>horaentrada;
 cout<<"Ingresa los minutos";
 cin>>min;
 cout<<"Ingresa los segundos";
 cin>>seg;
 cout<<"Ingresa la hora de salida";
 cin>>horasalida;
 cout<<"Ingresa los minutos";
 cin>>minsalida;
 cout<<"Ingresa los segundos";
 cin>>segsalida;


 int restarhoras,restarmin,restarseg,totaldehoras,totaldemin,totalseg,a,b,c,d;
 
     restarhoras=horaentrada-horasalida;
     restarmin=min-minsalida;
     restarseg=seg-segsalida;
     
     a=restarhoras*3600;
     b=restarmin*60;
     c=restarseg*60;
     
     d=a+b+c;
     totaldehoras=3600/d;
     d=d-totaldehoras;
     totaldemin=60/d;
     d=d-totaldemin;
     totalseg=60/d;
     
 cout<<"las horas trabajadas son"<<totaldehoras<<" minutos"<<totaldemin<<" segundos "<<totalseg;
 return 0;
}
