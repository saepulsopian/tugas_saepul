/*	TUGAS ARRAY
*/	

#include <iostream>

using namespace std;

int main(){
	//KAMUS
	
	char hrf[4]; 
	char f; 
	int e=0, sum=0;
	//ALGORITMA
	
	while(e<= 3){
			cout<<"+---+\n";
			cout<<"> ";cin>>hrf[e];  
			e++;
	}
	
	for(int x=0; x<=3; x++ ){
	cout<<"huruf masukan ke-"<<x<<": "<<hrf[x]<<"\n";
	}
	
	cout<<"masukan huruf penentu \n";
	cin>>f;
	
	for(int e=0; e<=3; e++ ){
	if(f == hrf[e]){int v=1; sum+=v; }
	}
	
	
	cout<<"jumlah huruf "<<f<<" : sebanyak: "<<sum;
	
}
