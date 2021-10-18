#include <iostream>

using namespace std;
/*JUDUL : Program Persegi Panjang
*/
int main()
{
    //KAMUS
    float p,l,hasilKeliling,hasilLuas;


    //ALGORITMA
    cin >> p;
    cin >> l;
    hasilKeliling = 2*(p+l);
    hasilLuas = p*l;

    cout << "Hasil Keliling \t= " << hasilKeliling << endl;
    cout << "Hasil Luas \t= " << hasilLuas << endl;
    return 0;
}
