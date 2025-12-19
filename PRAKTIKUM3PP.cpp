#include <iostream>
using namespace std;

int main() {

    cout << "Hasil For loop:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Nilai ke-" << i << " ";
    }
    cout << endl << endl;

    cout << "Hasil While loop:" << endl;
    int a = 0;
    while (a < 5) {
        cout << "Angka a = " << a << " ";
        a++;
    }
    cout << endl << endl;

    cout << "Hasil Do-while loop:" << endl;
    int b = 0;
    do {
        cout << "Angka b = " << b << " ";
        b++;
    } while (b < 5);
    cout << endl << endl;

    cout << "Loop dengan continue (skip angka 5):" << endl;
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            continue;
        }
        cout << "i: " << i << " ";
    }
    cout << endl << endl;

    cout << "Loop dengan break (berhenti di angka 5):" << endl;
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break;
        }
        cout << "i: " << i << " ";
    }
    cout << endl << endl;

    cout << "--- Program Selesai ---" << endl;
    return 0;
}
