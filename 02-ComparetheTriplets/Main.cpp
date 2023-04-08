#include <iostream>
using namespace std;

int main(){
	
	int point_a=0, point_b=0;
	int alice[3];
	int bob[3];
	
	for(int i=0; i<3; i++){
		int k;
		cout << "Masukkan Angka a: ";
		cin >> k;
		alice[i]=k;
	}
	cout << endl;
	for(int i=0; i<3; i++){
		int k;
		cout << "Masukkan Angka b: ";
		cin >> k;
		bob[i]=k;
	}
	for(int j=0; j<3; j++){
		if(alice[j] > bob[j]){
			point_a++;
		}
		else if(alice[j] < bob[j]){
			point_b++;
		}
	}
	
	cout << point_a << " " << point_b << endl;
	cout << "\nAkhir Program" << endl;
	return 0;
}



