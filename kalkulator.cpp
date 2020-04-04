#include <iostream>
using namespace std;

class kalkulator{
	public :
		int pertambahan();
		int pembagian();
		int pengurahan();
		int perkalian();
		float a,b,hasil;
};

int perkalian(){
	kalkulator m;
	cout<<"masukan nilai a : ";
	cin>>m.a;
	cout<<"masukan nilai b : ";
	cin>>m.b;
	m.hasil=m.a*m.b;
	cout<<m.a<<" x "<<m.b<<" = "<<m.hasil;
}

int pertambahan(){
	kalkulator m;
	cout<<"masukkan nilai a :";
	cin>>m.a;
	cout<<"masukkan nilai b :";
	cin>>m.b;
	m.hasil=m.a+m.b;
	cout<<m.a<<" + "<<m.b<<" = "<<m.hasil;
}

int pengurangan(){
  kalkulator m;
	cout<<"masukkan nilai a :";
	cin>>m.a;
	cout<<"masukkan nilai b :";
	cin>>m.b;
	m.hasil=m.a-m.b;
	cout<<m.a<<" - "<<m.b<<" = "<<m.hasil;
}

int pembagian(){
  kalkulator m;
	cout<<"masukkan nilai a :";
	cin>>m.a;
	cout<<"masukkan nilai b :";
	cin>>m.b;
	m.hasil=m.a/m.b;
	cout<<m.a<<" / "<<m.b<<" = "<<m.hasil;
}

int main(){
	menu :
	int u;
	cout<<"--Kalkulator Sederhana--\n";
	cout<<"1.Perkalian\n";
	cout<<"2.Pembagian\n";
	cout<<"3.Pertambahan\n";
	cout<<"4.Pengurangan\n";
	cout<<"\nsilahkan pilih operator yang ingin anda jalankan (1-4) :";
	cin>>u;
	
	if(u==1){
		system("CLS");
		cout<<"Operasi perkalian\n";
		perkalian();
		cout<<endl;
	}
	else if(u==2){
		system("CLS");
		cout<<"Operasi Pembagian\n";
		pembagian();
		cout<<endl;
	}
	else if(u==3){
		system("CLS");
		cout<<"Operasi Pertambahan\n";
		pertambahan();
		cout<<endl;
	}
	else if(u==4){
		system("CLS");
		cout<<"Operasi Pengurangan\n";
		pengurangan();
		cout<<endl;
	}
	else{
		system("CLS");
		cout<<"maaf permintaan anda, tidak tersedia\n";
	}
	
	
	char jawab;
	cout<<"\nIngin kembali ke menu ? (y/n) =";
	cin>>jawab;
	if(jawab=='y'){
		system("CLS");
		goto menu;
	}else{
		goto exit;
	}
	exit:
		return 0;

}
