#include <iostream>

using namespace std;

//JUDUL : PERTEMUAN 3
int main()
{
    //KAMUS
    char c = 'A'; //1 Karakter
    string nama = "Rizky Syah Gumelar"; //>1 Karakter
    string nim = "A11.2021.13304";
    int umur = 18;
    float tinggi = 168.5;

    //ALGORITMA
    cout << "Nama \t: " << nama << endl;
    cout << "NIM \t: " << nim << endl;
    cout << "Umur \t: " << umur << endl;
    cout << "Tinggi \t: " << tinggi << endl;


    //JUDUL: Pertemuan 3 - I/O, Operasi, dll
    //KAMUS
    float p,l,luasPP;

    //ALGORITMA
    cout << "========== Program Hitung Luas Persegi Panjang ==========" << endl;
    cout << "Masukkan panjang = ";
    cin >> p; //INPUT
    cout << "Masukkan lebar = ";
    cin >> l;
    luasPP = p*l;
    cout << "Luas persegi panjang = p x l = " << p << "x" << l << " = " << luasPP << endl << endl;

    //==========
    int operand_1 = 30;
    int operand_2 = 50;
    int hasil;

    hasil = operand_1 - operand_2 + 100;
    cout << "Hasil operand = " << hasil << endl << endl;

    int angka_1 = 20;
    int angka_2 = 5;
    bool hasil_relasi;

    hasil_relasi = (angka_1 == angka_2); //apakah variabel angka1 = angka2 ... apakah 20 =5
    cout << "Hasil relasi = " << hasil_relasi << endl;
    //False = 0
    //True = 1

    bool operand_3 = true; //1
    bool operand_4 = false; //0
    bool hasil_logika;

    hasil_logika = operand_3 && operand_4; //true and false = false
    cout << "Hasil logika = " << hasil_logika << endl;

    int i = 10;
    cout << "i before = " << i << endl;

    i = i*2; //atau ditulis i*=2
    cout << "i after = " << i << endl;
    //i = 10*2
    //i = 20
    return 0;
}
