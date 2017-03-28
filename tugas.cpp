#include <iostream> 
 
 
 using namespace std; 

 
 
 
 int main() 
 { 
     float ip[100], max=0, min=4, sum_ip=0; 
 	int lulus=0, tdk_lulus=0, error_kebawah=0, error_keatas=0; 
 	int i=1, pembagi; 
 	 
 	cout<<"--------DATA IP MAHASISWA-------"<<endl<<endl; 
 	cout<<"================================"<<endl<<endl; 
 
 
 	while (ip[i-1] != -999) { 
         cout<<"Data Ke-"<<i<<"\n"; 
 		cout<<"Masukkan Nilai IP:"; 
         cin>>ip[i]; 
 		 
 		if(ip[i]>=0 && ip[i]<=4){ 
 			if(ip[i]>=2.75){ 
 				lulus++;	 
			} 
 			else if(ip[i]<2.75){ 
 				tdk_lulus++;	 
 			} 
 			 
 			if (ip[i] > max){ max = ip[i]; } 
 			if (ip[i] < min){ min = ip[i]; } 
 			 
 			sum_ip+=ip[i]; 


		pembagi	=	i;
 		} 
 		else if(ip[i] < 0 || ip[i] > 4){ 
 			/* Pembatasan rentangan angka margin error  
 			 * dari 10 s/d -1 dan dari 5 s.d 10		 
 			 */ 
 			if(ip[i] > -11 && ip[i] < 1){ 
 				error_kebawah++;	 
 			} 
 			else if(ip[i] > 4 && ip[i] < 11){ 
 				error_keatas++;	 
 			} 
 		} 
 		 
 		i++; 
     } 
 	 
 	 
 	float rata 		= (sum_ip/pembagi); 
 	int jml_m		= i-2; //2 digunakan agar jumlah mahasiswa tidak termasuk terminator (-999) 
 	int error		= error_kebawah + error_keatas; 
 	 
          
 	cout<<endl; 
 		cout<<"+===================================================+"<<endl<<endl; 
     if(i!=1){ //cek jumlah i 
 		cout<<"+--------------------LAPORAN DATA-------------------+"<<endl<<endl; 
 		cout<<"| Jumlah Mahasiswa                       |   "<<jml_m<<"      |"<<endl;  
 		cout<<"| Jumlah Mahasiswa Yang Lulus            |   "<<lulus<<"      |"<<endl;  
 		cout<<"| Jumlah Mahasiswa Yang Tidak Lulus      |   "<<tdk_lulus<<"      |"<<endl;  
 		cout<<"| Nilai Tertinggi                        |   "<<max<<"      |"<<endl;  
 		cout<<"| Nilai Terendah                         |   "<<min<<"      |"<<endl; 
 		cout<<"| Nilai Rata-Rata                        |   "<<rata<<"      |"<<endl;  
 		cout<<"| Data error (angka tidak sesuai syarat) |   "<<error<<"      |"<<endl; 
                cout<<"+===================================================+"<<endl<<endl;
 		cout<<"Note: Angka diatas 11 dan dibawah -11 tidak akan di proses"<<endl<<endl; 
 	} 
 	else { 
 		cout<<"Tidak Ada Data"; 
 	} 
      
 	return 0; 
} 