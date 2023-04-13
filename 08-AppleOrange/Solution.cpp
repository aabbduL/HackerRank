#include<bits/stdc++.h>

using namespace std;

void ApplesOranges(int s, int t, int a, int b, vector<int>& apples, vector<int>& oranges) {
    int jml_apl = 0, jml_jrk = 0;
    vector<int> apl, jrk;

    transform(apples.begin(), apples.end(), back_inserter(apl), [a](int x) { return x + a; });
    transform(oranges.begin(), oranges.end(), back_inserter(jrk), [b](int x) { return x + b; });

    for (auto d_baru : apl) {
        if (s <= d_baru && d_baru <= t) {
            jml_apl++;
        }
    }
    for (auto d_baru : jrk) {
        if (s <= d_baru && d_baru <= t) {
            jml_jrk++;
        }
    }

    cout << "\nJumlah apel yang jatuh di jangkauan s dan t adalah  : " << jml_apl << endl;
    cout << "Jumlah jeruk yang jatuh di jangkauan s dan t adalah : " << jml_jrk << endl << endl;
}

int main() {
    string input_str;
    int s, t, a, b, m, n;
    vector<int> apples, oranges;

    cout << "Masukkan posisi rumah (s t) : ";
    getline(cin, input_str);
    sscanf(input_str.c_str(), "%d %d", &s, &t);

    cout << "Masukkan posisi pohon apel dan jeruk (a b) : ";
    getline(cin, input_str);
    sscanf(input_str.c_str(), "%d %d", &a, &b);

    cout << "Masukkan jumlah total apel dan jeruk : ";
    getline(cin, input_str);
    sscanf(input_str.c_str(), "%d %d", &m, &n);

    cout << "Masukkan lokasi jatuhnya buah apel : ";
    getline(cin, input_str);
    stringstream apple_stream(input_str);
    for (int i = 0; i < m; i++) {
        int loc;
        apple_stream >> loc;
        apples.push_back(loc);
    }

    cout << "Masukkan lokasi jatuhnya buah jeruk : ";
    getline(cin, input_str);
    stringstream orange_stream(input_str);
    for (int i = 0; i < n; i++) {
        int loc;
        orange_stream >> loc;
        oranges.push_back(loc);
    }

    ApplesOranges(s, t, a, b, apples, oranges);

    return 0;
}
