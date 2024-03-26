#include <iostream>
using namespace std;
//2311102001_NofitaFitriyani
int main() {
    int inX, inY, inZ;

    // Meminta pengguna memasukkan ukuran array
    cout << "Masukkan ukuran array 3 dimensi:\n";
    cout << "Jumlah elemen x: ";
    cin >> inX;
    cout << "Jumlah elemen y: ";
    cin >> inY;
    cout << "Jumlah elemen z: ";
    cin >> inZ;
    cout << endl;

    // Deklarasi array sesuai dengan ukuran yang dimasukkan pengguna
    int arr[inX][inY][inZ];

    // Input elemen
    for (int x = 0; x < inX; x++) {
        for (int y = 0; y < inY; y++) {
            for (int z = 0; z < inZ; z++) {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }

    // Tampilan array
    cout << "\nTampilan Array:\n";
    for (int x = 0; x < inX; x++) {
        for (int y = 0; y <inY; y++) {
            for (int z = 0; z < inZ; z++) {
                cout << arr[x][y][z] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
