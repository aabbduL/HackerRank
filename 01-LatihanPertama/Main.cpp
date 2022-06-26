#include <iostream>
using namespace std;

int main(){
	
	int hasil;
	int x[6];
	
	for(int i=0; i < 6; i++){
		int k;
		cout << "Masukkan Angka : ";
		cin >> k;
		x[i] = k;
		hasil = hasil + x[i];
	}
	
	cout << hasil << endl;
	cout << "\nAkhir Program" << endl;
	return 0;
}

