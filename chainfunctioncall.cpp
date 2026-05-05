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
