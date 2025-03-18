#include <iostream>
using namespace std;
float LuasPersegiPanjang(float x,float y){
    return x*y;
}
float LuasLingkaran(float x){
    return 3,14 * x * x;
}
int main()
{
    int pilihan;
    float panjang,lebar,jejari;
    do{
        cout << endl;
        cout << "====MENU====" << endl;
        cout << "1. Menghitung Luas Persegi Panjang" << endl;
        cout << "2. Menghitung Luas Lingkaran" << endl;
        cout << "3. Exit" << endl;
        cout << "Pilih (1/2/3) : ";
        cin >> pilihan;


        
        switch (pilihan)
        {
        case 1:
            cout << "Menghitung Luas Persegi Panjang" << endl;
            cout << "Masukkan Panjang :";
            cin >> panjang;
            cout << "Masukkan Lebar :";
            cin >> lebar;
            cout << "Luas Persegi Panjang : "  << LuasPersegiPanjang(panjang,lebar) << endl;
            break;
        case 2 :
            cout << "Menghitung Luas Lingkaran" << endl;
            cout << "Masukkan Jari-jari :";
            cin >> jejari;
            cout << "Luas lingkaran : "  << LuasLingkaran(jejari) << endl;
            break;
        case 3 : 
            break;
        default:
            cout << "Pilihan Yang Anda Masukkan Salah" << endl;
            break;
        }


    }while (pilihan !=3);

    
}