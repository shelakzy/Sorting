#include <iostream>


using namespace std;

int main(){
int angka[5];
int temp;

    for (int n=1; n<=4; n++){
        cout << "Bilangan ke "<< n <<" = ";
        cin >>angka[n];
    }
    
    
    
    
    cout << "Hasil pengurutan dari terkecil hingga terbesar = " <<endl;
    for (int a=1; a<=4; a++){
        for (int b=1; b<=4; b++){
        if (angka[a]<angka[b]){
            temp=angka[a];
            angka[a]=angka[b];
            angka[b]=temp;
            }
        }
    }
    
    
        for (int a=1; a<=4; a++){
            cout <<angka[a]<< " ";
    }
    
    
return 0;
}	
