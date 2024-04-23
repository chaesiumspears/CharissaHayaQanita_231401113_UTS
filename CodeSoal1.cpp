#include <iostream>
using namespace std;
main() {
    system ("cls");
    int count=0, nilai, i=1; double total=0,ratarata;

    cout<<"masukkan nilai anda (masukkan -1 untuk menampilkan rata-rata): "<<endl;
    do {
        cout<<"nilai ke-"<<i<<": "; 
        cin>>nilai;
        if (nilai>0) {
            i++;
            total+=nilai;
            count++;}

        else if (nilai==-1) {
            ratarata=(total)/count; 
            cout<<"rata-rata: "<< ratarata<<endl; break;}

        else cout<<"input harus bilangan bulat positif, coba lagi!"<<endl;
        }
    while (true);
}
