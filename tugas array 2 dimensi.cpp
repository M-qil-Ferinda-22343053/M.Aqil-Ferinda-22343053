//Program Array input keyboard 2 Dimensi
//M.Aqil Ferinda
//22343053
//Informatika (NK)
#include <iostream>
using namespace std;
int main()
{
    int bilangan[2][3];
    for (int a=0;a<2;a++ ){
        for (int b=0;b<3;b++){
            cout << "index ke-" << a << "," << b << " = ";
            cin >> bilangan[a][b];
        }
    }
    cout << "\nMencetak hasil dari inputan " << endl;
    for (int a=0;a<2;a++ ){
        for (int b=0;b<3;b++){
            cout << "Pada index ke-" << a << "," << b << " adalah " << bilangan[a][b] << endl;
        }
    }
    return 0;
}
