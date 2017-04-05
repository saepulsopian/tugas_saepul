#include <iostream>

using namespace std;
//prototype
int faktor(int n);	


int main()
{
	int n;
	
    
   cout<<"\n Nama   : Saepul Sopian";  
   cout<<"\n NIM    : 16.111.255"; 
   cout<<"\n Kelas  : TIF RM-16 C"<<endl;    
   cout<<"\n Masukan faktorial : ";  
   
      cin>>n;
		
		cout<<" = "<<faktor(n);
		
		
		return 0;
		
	
}

int faktor(int n) 
{
	int hasil=1,i;		
	for(i=n;i>0;i--)
	{
		if(i!=1)
			cout<<i<<"x";
			else
			cout<<"1";
			hasil=hasil*i;
	}
	return hasil;
	}
