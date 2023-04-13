#include<bits/stdc++.h>

using namespace std;

void Func(vector<vector<int>> arr) {
    int d1 = 0, d2 = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        d1 += arr[i][i];
        d2 += arr[i][n-i-1];
    }

    cout << "\nMatrix arr = [\n";
    for (int i = 0; i < n; i++) {
        cout << "  [";
        for (int j = 0; j < n; j++) {
            cout << arr[i][j];
            if (j != n-1) cout << ", ";
        }
        cout << "]" << endl;
    }
    cout << "]" << endl;

    cout << "Output => " << abs(d1-d2) << endl << endl;
}

int main() {
    int n = 3;

    vector<vector<int>> arr(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        cout << "Masukkan angka untuk baris " << "("<<i+1<<")"<< " : ";
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    Func(arr);

    return 0;
}
