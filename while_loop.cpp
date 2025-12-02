#include <iostream>
using namespace std;

int main(){
	
	//while loop
	int angka;
	cin>>angka;
	while(angka % 2 == 0){
		cout<<"Masukan sampai angka ganjil"<<endl;
		cin>>angka;
	}
	cout<<"Program selesai"<<endl;
	
	return 0;
}
