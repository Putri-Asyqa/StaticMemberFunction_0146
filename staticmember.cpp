#include <iostream>
using namespace std;

class Mahasiswa {   //membuat class mahasiswa
public :
static int nim;
        //deklarasi variabel member
        int id;
        string nama;

        //deklarasi prosedur setID() dan printAll()
        void setID();
        void printAll();

        //pembuatan constructor mahasiswa dengan parameter pnama
        //member initialize list
        Mahasiswa(string pnama) :nama(pnama){
            setID();
        }
};

int Mahasiswa::nim = 0;

//pendefinisian prosedur - prosedur diluar class
void Mahasiswa::setID() {
    id = ++nim;
}

void Mahasiswa::printAll(){
    cout << "ID : " << id << endl;
    cout <<"Nama : " << nama << endl;
    cout << endl;
};

int main(){
    //membuat object dan membeeri nilai
    Mahasiswa mhs1("Lia Kurnia");
    Mahasiswa mhs2("Asroni");
    Mahasiswa mhs3("Andi Kurniawan");
    Mahasiswa mhs4("Joko Purbo");

    //memanggil prosedur printAll()
    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();

    return 0;
}
