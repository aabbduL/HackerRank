#include <iostream>
using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    if (v1 <= v2) {
        return "NO";
    }

    while (x1 < x2) {
        x1 += v1;
        x2 += v2;
    }

    return (x1 == x2) ? "YES" : "NO";
}

int main() {
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    string res = kangaroo(x1, v1, x2, v2);
    cout << res << endl;
    return 0;
}
