#include <iostream> // library c++ merakyat;

using namespace std; // pake ini kalo gamau coutnya kepanjangan;

int main() { // fungsi utama;
    int angka; // deklarasi variabel;

    cout << "Masukkan Angka: "; // meminta user untuk memasukkan data angka;
    cin >> angka;
    cout << "Faktor Dari " << angka << ": "; // cetak hasilnya; 

    for (int i = 1; i <= angka; i++) { // perulangan for;
        if (angka % i == 0) { // pengondisian if;
            cout << i << " ";
        }
    }
    cout << endl; // hapus buffer;
}