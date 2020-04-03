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
	cout<<m.a<<" * "<<m.b<<" = "<<m.hasil;
}
