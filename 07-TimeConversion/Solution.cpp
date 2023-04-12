#include <iostream>
#include <string>

using namespace std;

string timeConversion(string s) {
    int jam = stoi(s.substr(0, 2));
    if (s.substr(s.length()-2, 2) == "PM" && jam != 12 && jam >= 1) {
        jam += 12;
    } else if (s.substr(s.length()-2, 2) == "AM" && jam == 12) {
        jam = 0;
    }
    return to_string(jam) + s.substr(2, s.length()-4);
}

int main() {
    string s;
    getline(cin, s);
    string res = timeConversion(s);
    cout << res << endl;
    return 0;
}

/*stoi adalah sebuah fungsi di dalam library string pada C++ 
yang digunakan untuk mengonversi sebuah string menjadi sebuah bilangan bulat (integer). 
Fungsi ini mirip dengan fungsi int pada Python.*/

/*s.substr adalah sebuah fungsi di dalam library string pada C++
yang digunakan untuk memotong sebuah string (substring) dari string yang diberikan. 
Fungsi ini mirip dengan slicing pada Python. */
