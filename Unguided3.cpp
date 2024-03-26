#include <iostream>
#include<iomanip>
#include <climits>
using namespace std;
int main() {
    int pilihan_2311102001;
    int bilangan[10];
    int jumlahBilangan = 0;

    while (true) {
        cout << setw(13)<< "MENU\n";
        cout << "1. Input Array \n";
        cout << "2. Tampil Array\n";
        cout << "3. Cari Nilai Minimum\n";
        cout << "4. Cari Nilai Maksimum\n";
        cout << "5. Hitung Rata-Rata\n";
        cout << "0. Keluar\n";
        cout << "Masukan Pilihan : ";
        cin >> pilihan_2311102001;
        cout<<endl;

        switch (pilihan_2311102001) {
            case 0:
                return 0;

            case 1:
                cout << "Masukkan 10 bilangan bulat : \n";
                for (int i = 0; i < 10; i++) {
                    cin >> bilangan[i];
                }
                jumlahBilangan = 10;
                cout<<endl;
                 break;

            case 2:
                cout << "Isi array = \n";
                for (int i = 0; i < jumlahBilangan; i++) {
                    cout << bilangan[i] << " ";
                }
                cout << endl;
                cout<<endl;
                break;

            case 3:
                if (jumlahBilangan > 0) {
                    int minimum = INT_MAX;
                    for (int i = 0; i < jumlahBilangan; i++) {
                        if (bilangan[i] < minimum) {
                            minimum = bilangan[i];
                        }
                    }
                    cout << "Nilai minimum = " << minimum << endl;
                } else {
                   cout << "Array kosong. Silakan inputkan bilangan terlebih dahulu.\n";
                }
                cout<<endl;
                break;

            case 4:
                if (jumlahBilangan > 0) {
                    int maksimum = INT_MIN;
                    for (int i = 0; i < jumlahBilangan; i++) {
                        if (bilangan[i] > maksimum) {
                            maksimum = bilangan[i];
                        }
                    }
                    cout << "Nilai maksimum = " << maksimum << endl;
                } else {
                    cout << "Array kosong. Silakan inputkan bilangan terlebih dahulu.\n";
                }
                cout<<endl;
                break;

            case 5:
                if (jumlahBilangan > 0) {
                    int total = 0;
                    for (int i = 0; i < jumlahBilangan; i++) {
                        total += bilangan[i];
                    }
                    double rataRata = static_cast<double>(total) / jumlahBilangan;
                    cout << "Rata-rata = " << rataRata <<endl;
                } else {
                    cout << "Array kosong. Silakan inputkan bilangan terlebih dahulu.\n";
                }
                cout<<endl;
                break;

            default:
              cout << "Pilihan menu tidak valid. Silakan pilih menu yang benar.\n";
                break;
        }
    }

    return 0;
}
