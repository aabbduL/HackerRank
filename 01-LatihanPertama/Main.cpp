#include <iostream>
using namespace std;

int main(){
	
	// #ifndef Abdul
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif

	int hasil;
	int x;
	cout << "Size: ";
	cin >> x;

	int* k = new int[x];

	cout << "Masukkan Angka: ";
	for(int i=0; i < x; i++){
		cin >> k[i];
		hasil = hasil + k[i];
	}
	
	cout << hasil << endl;
	cout << "\nAkhir Program" << endl;
	return 0;
}

