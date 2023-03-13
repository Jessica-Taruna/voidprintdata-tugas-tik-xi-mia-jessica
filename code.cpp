#include <iostream>
using namespace std;

class siswa{
    public:
        string NAMA;
        int NISN;
        float NILAI;
    void printmurid(){
        cout<<"Masukkan Nama MURID : "; cin>>NAMA;
        cout<<"Masukkan NISN MURID : "; cin>>NISN;
        cout<<"Masukkan Nilai MURID : "; cin>>NILAI;
    }
    void printdatamurid(){
        cout<<"Nama MURID : " <<NAMA<<endl;
        cout<<"NISN MURID : " <<NISN<<endl;
        cout<<"Nilai MURID : " <<NILAI<<endl;
    }
};

class guru{
    public:
        string NAMA;
        int NUPTK;
        string MAPEL;
    void printguru(){
        cout<<"Masukkan Nama GURU : ";cin>>NAMA;
        cout<<"Masukkan NUPTK GURU : ";cin>>NUPTK;
        cout<<"Masukkan Mata Pelajaran : ";cin>>MAPEL;
    }
    void printdataguru(){
        cout<<"Nama GURU : "<<NAMA<<endl;
        cout<<"NUPTK GURU : "<<NUPTK<<endl;
        cout<<"Guru Mata Pelajaran : "<<MAPEL<<endl;
    }
};

int main (){
    int angka;
    cout<<"Masukkan Angka (1 = murid, 2 = guru): "; cin>>angka;
    if (angka == 1){
        siswa cekmurid;
        cekmurid.printmurid();
        cekmurid.printdatamurid();
    }
    else if (angka == 2){
        guru cekguru;
        cekguru.printguru();
        cekguru.printdataguru();
    }
    else{
        cout<<"Masukkan Angka Dengan Benar";
    }
};