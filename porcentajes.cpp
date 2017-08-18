#include <iostream>
using namespace std;
int main()
{
 float sueldo;
 cout<<"Ingresa tu sueldo actual ";
 cin>>sueldo;
 
 	if (sueldo>1300)
 	{
		sueldo=(sueldo*.8)+sueldo;
	}
    else
    {
    	if ((sueldo>=1201)&&(sueldo<=1300))
     	{
 	 	   sueldo=(sueldo*.10)+sueldo;
		}
		else 
		{
		 	if ((sueldo>=1101)&&(sueldo<=1200))
 			{	 
 				sueldo=(sueldo*.12)+sueldo;
	 		}
	 
			else	
			{	 
  				if ((sueldo>=1001)&&(sueldo<=1100))
  				{
  	 				sueldo=(sueldo*.15)+sueldo;
  				}
				else
				{ 
 					if((sueldo>=0)&&(sueldo<=1000))
					 {
 						sueldo=(sueldo*.18)+sueldo;
 					}
				}
   
 			}		 
		}
	}

 cout<<"\nTu nuevo sueldo es : "<<sueldo;
 return 0;
}
