#include <iostream>
using namespace std;
//2311102001_NofitaFitriyani
int main() {
    const int data = 10;
    int array[data];

    cout << "Masukkan " << data << " angka:\n";
    for (int i = 0; i < data; i++) {
        cout << "Angka ke-" << (i + 1) << ": ";
        cin >> array[i];
    }

    cout << "\nData Array: ";
    for (int i = 0; i < data; i++) {
        cout << array[i] << " ";
    }

    cout << "\nNomor Genap: ";
    for (int i = 0; i < data; i++) {
        if (array[i] % 2 == 0) {
            cout << array[i] << ", ";
        }
    }

    cout << "\nNomor Ganjil: ";
    for (int i = 0; i < data; i++) {
        if (array[i] % 2 != 0) {
            cout << array[i] << ", ";
        }
    }
    cout << endl;

    return 0;
}

