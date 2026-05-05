#include <iostream>
#include <string>
using namespace std;

class Kendaraan {
private:
    int id;
    string nama;

public:
    // 1. Constructor tanpa parameter (default)
    Kendaraan() {
        id = 0;
        nama = "Tidak diketahui";
    }

    // 2. Constructor dengan parameter id saja
    Kendaraan(int iId) {
        id = iId;
        nama = "Tidak diketahui";
    }

    // 3. Constructor dengan parameter nama saja
    Kendaraan(string iNama) {
        id = 0;
        nama = iNama;
    }

    // 4. Constructor dengan parameter lengkap
    Kendaraan(int iId, string iNama) {
        id = iId;
        nama = iNama;
    }

    // Method untuk menampilkan data
    void tampil() {
        cout << "ID Kendaraan   : " << id << endl;
        cout << "Nama Kendaraan : " << nama << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {
    // Membuat object dengan berbagai constructor
    Kendaraan k1;                      // default
    Kendaraan k2(101);                 // hanya id
    Kendaraan k3("Motor");             // hanya nama
    Kendaraan k4(202, "Mobil");        // lengkap

    // Menampilkan data
    cout << "Data Kendaraan:" << endl;
    k1.tampil();
    k2.tampil();
    k3.tampil();
    k4.tampil();

    return 0;
}