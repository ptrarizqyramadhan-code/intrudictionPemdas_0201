#include <iostream>
using namespace std;

//Numeric nPanjang, nLebar, nKeliling
int panjang, lebar, keliling;

void input() {
    //Display "Masukan Panjang : "
    cout << "Masukan Panjang : ";
    //Accept nPanjang 
    cin >> panjang;
    //Display "Masukan Lebar : "
    cout << "Masukan Lebar : ";
    //Accept nLebar
    cin >> lebar;
}

void process() {
    // Compute nKeliling = 2(p+1)
    keliling = 2 * (panjang + lebar);
}

void output() {
    //Display "Keliling Persegi Panjang : " + nKeliling
    cout << "Keliling Persegi Panjang : " << keliling;
}

int main() {// mulai
    input();
    process();
    output();

}//selesai
