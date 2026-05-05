#include <iostream>
using namespace std;

class mahasiswa {
public:
    static int nim;
    int id;
    string nama;

    void setID();
    void printAll();

    mahasiswa(string pnama) :nama(pnama) {
        setID();
    }
};

int mahasiswa::nim = 10;

void mahasiswa::setID(){
    id = ++nim;
};

void mahasiswa::printAll(){

    cout << " ID : " <<id << endl;
    cout << "nama : " <<nama << endl;
    cout << endl;
};

int main (){

    mahasiswa mhs1("lia honda");
    mahasiswa mhs2("fawas itb");
    mahasiswa mhs3("andi puyuh");
    mahasiswa mhs4("slamet kopling");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();

    return 0;
}