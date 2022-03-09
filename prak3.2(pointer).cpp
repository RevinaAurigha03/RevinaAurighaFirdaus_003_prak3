//* Revina Aurigha Firdaus (21091397003)

#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char kata[100];
	cout<<"*************************************"<<endl;
	cout << "  Merubah huruf kecil ke huruf kapital  "<<endl;
	cout<<"*************************************"<<endl;
	cout<<"Tuliskan kata dengan huruf kecil : "; cin.getline(kata,100);
	cout<<"Hasil Perubahan : "<<strupr(kata)<<endl;
}
