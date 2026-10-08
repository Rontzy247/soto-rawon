// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    string menu[2]={"soto","rawon"};
    int harga[2]={15000,20000};
    int t;
    int porsi[2];
    int total[2];
    int all;
   
    for (t=0; t<2; t++) {
       cout<< "......SOTO......"<<endl;
       cout<< "Menu ";
       cout<< menu[0]<<endl;
       cout<<"Harga ";
       cout<< harga[0]<<endl;
       cout<<"Masukkan Porsi ";
       cin>> porsi[t];
       cout<< "total ";
       cout<< harga[t]*porsi[t]<<endl;
       cout<< "............RAWON............"<<endl;
       cout<< "Menu ";
       cout<< menu[1]<<endl;
       cout<<"Harga ";
       cout<< harga[1]<<endl;
       cout<<"Masukkan Porsi ";
       cin>> porsi[t];
       cout<< "Total ";
       cout<< harga[1]*porsi[t]<<endl;
    }

    return 0;
    
    
}
