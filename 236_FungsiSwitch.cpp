#include <iostream>
using namespace std;

int bilangan1, bilangan2;

void inputdata()
{
    cout << "Masukkan bilangan pertama : ";
    cin >> bilangan1;
    cout << "Masukkan bilangan kedua : ";
    cin >> bilangan2;
}

int penjumlahan(int a, int b)
{
    return a + b;
    
}

int pengurangan(int a, int b)
{
    return a - b;
    
}

int perkalian(int a, int b)
{
    return a * b;
    
}

float pembagian(float a, float b)
{
    return a / b;
    
}

int main()
{
    int pilihan;

    do{
        cout << "Kalkulator sederhana" << endl;
        cout << "====================" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. Keluar" << endl;
        cout << "====================" << endl;
        cout << "Masukkan menu pilihan : " ;
        cin >> pilihan;

        switch (pilihan)
        {
            case 1:
                inputdata();
                cout << "Hasil penjumlahan = " << penjumlahan(bilangan1, bilangan2) << endl;
                break;
            case 2:
                cout << "Hasil pengurangan = " << pengurangan(bilangan1, bilangan2) << endl;
                break;
            case 3:
                cout << "Hasil perkalian = " << perkalian(bilangan1, bilangan2) << endl;
                break;
            case 4:
                cout << "Hasil pembagian = " << pembagian(bilangan1, bilangan2) << endl;
                break;
            case 5:
                break;
            
            default:
                cout << "Pilihan tidak ada" << endl;
                break;
        } 
    } while (pilihan !=5);
}
