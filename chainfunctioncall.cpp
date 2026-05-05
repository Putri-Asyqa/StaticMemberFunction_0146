#include <iostream>
using namespace std;

class buku {
    string judul;

public:
    // Fungsi untuk set judul yang mengembalikan referensi ke objek itu sendiri (*this)
    buku &setJudul(string judul) {
        this->judul = judul;
        return *this; // Inilah kunci dari chain function
    }

    string getJudul() {
        return this->judul;
    }
};

int main() {
    buku bukunya;

    // Contoh pemanggilan biasa (dikomentari di gambar)
    // bukunya.setJudul("Matematika");
    // cout << bukunya.getJudul();

    // Contoh Method Chaining (pemanggilan berantai)
    cout << bukunya.setJudul("Matematika").getJudul() << endl; // chain function calls

    return 0;
}