#include <iostream>
using namespace std;

int main() {
    int bilangan1, bilangan2;
    char operasi;

    cout << "Masukkan angka pertama : ";
    cin >> bilangan1;
    cout << "Masukkan angka kedua : ";
    cin >> bilangan2;
    cout << "Masukkan jenis operasi (+, -, *, /) : ";
    cin >> operasi;

    if (operasi == '+') {
        cout << "Hasil = " << bilangan1 + bilangan2;
    } else if (operasi == '-') {
        cout << "Hasil = " << bilangan1 - bilangan2;
    } else if (operasi == '*') {
        cout << "Hasil = " << bilangan1 * bilangan2;
    } else if (operasi == '/') {
        if (bilangan2 != 0) {
            cout << "Hasil = " << bilangan1 / bilangan2;
        } else {
            cout << "Pembagi tidak boleh bernilai 0";
        }
    } else {
        cout << "Operasi tidak valid";
    }

    return 0;
}
