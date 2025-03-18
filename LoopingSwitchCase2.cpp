#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    int x;
    int perulanganWhile = 0;
    int perulanganDo = 0;

    srand(time(0));
    rand()%10;
    cout<< "Perulangan While"<<endl;
    cout << "Nilai X awal = " << x << endl;
    //Perulangan While
    while (x < 7)
    {
        cout<< "Nilai X = " << x << "Lari Keliling" << endl;
        x = rand() %10;
        perulanganWhile++;
    }
    cout << "Nilai X terakhir = " <<endl;
    cout << "Jumlah Perulangan =" << perulanganWhile <<endl;

    do
    {
    
    } while ();
    
}