#include<bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(vector<int> ar) {
    int total = 0;
    int highest = *max_element(ar.begin(), ar.end());

    for (int i = 0; i < ar.size(); i++) {
        if (ar[i] == highest) {
            total++;
        }
    }

    return total;
}

int main() {
    int count;
    cout << "\nMasukkan jumlah lilin yang tersedia: ";
    cin >> count;

    vector<int> ar(count);
    cout << "Masukkan tinggi dari setiap lilin yang tersedia: ";
    for (int i = 0; i < count; i++) {
        cin >> ar[i];
    }

    int result = birthdayCakeCandles(ar);
    cout << "\nTotal lilin yang tertiup ada: " << result << " buah lilin\n" << endl;

    return 0;
}
