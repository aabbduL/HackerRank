#include<bits/stdc++.h>
using namespace std;

void miniMaxSum(vector<int> arr) {
    int minimum = arr[0], maximum = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
        if (arr[i] > maximum) {
            maximum = arr[i];
        }
    }

    int res1 = accumulate(arr.begin(), arr.end(), 0) - maximum;
    int res2 = accumulate(arr.begin(), arr.end(), 0) - minimum;

    cout << "\nNilai minimum dari jumlah deret tersebut adalah : " << res1 << endl;
    cout << "Nilai maximum dari jumlah deret tersebut adalah : " << res2 << "\n" << endl;
}

int main() {

    int n;
    cout << "Masukan berapa banyak bilangan bulat yang diinginkan : ";
    cin >> n;

    vector<int> arr(n);
    cout << "\nMasukkan deret angka tersebut (" << n << ") : ";    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    miniMaxSum(arr);

    return 0;
}
