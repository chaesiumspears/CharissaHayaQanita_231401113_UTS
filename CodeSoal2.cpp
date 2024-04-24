#include <iostream>
using namespace std;
main(){
    system ("cls");
    int input,i,j;
    cout << "masukkan sebuah bilangan bulat antara 2 dan 10: ";
    cin >>input;

    if (input< 2 || input> 10) {
        cout << "inputan tidak memenuhi batas" <<endl;
    } 
    else {
        for (i = 1; i <= input;i++) {
            for (j =1; j <=i;j++) {
                cout << "X ";
            }
            cout<<endl;
        }
        //for segitiga terbalik
        for(i=1;i<=input;i++){
            for(j=1;j<=input;j++){
                cout<<"  ";
            }
            for(j=1;j<i;j++)
            { 
            cout<<"  ";
            }
            for(int k=input;k>=i;k--)
            {
              cout<<"X ";
            }
            cout<<endl;
        }
    }
}

