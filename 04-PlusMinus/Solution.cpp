#include <iostream>
#include <vector>
using namespace std;

void plusMinus(vector<int> arr) {
    int n = arr.size();
    int positive = 0, negative = 0, zero = 0;

    cout << "\nArray = [ ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
        if (arr[i] > 0) {
            positive += 1;
        } else if (arr[i] < 0) {
            negative += 1;
        } else {
            zero += 1;
        }
    }
    cout << "]" << endl;

    cout << "\nKemungkinan munculnya bilangan positive adalah : " << (float) positive/n << endl;
    cout << "Kemungkinan munculnya bilangan negative adalah : " << (float) negative/n << endl;
    cout << "Kemungkinan munculnya bilangan nol adalah      : " << (float) zero/n << endl << endl;
}

int main() {
    int n;
    cout << "Masukan berapa banyak bilangan bulat yang diinginkan : ";
    cin >> n;

    vector<int> arr(n);
    cout << "\nMasukkan deret bilangan tersebut (" << n << ") : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    plusMinus(arr);

    return 0;
}
