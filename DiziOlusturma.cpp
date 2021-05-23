#include <iostream>
using namespace std;

int main() {
	
	int sayi;
	cout << "Lutfen dizinin eleman sayisini giriniz " << endl;
	cin >> sayi;
	
	int array[sayi];
	
	for( int i=0 ; i<sayi ; i++ )
	{
		cout<< i << ". index degerini giriniz = " << endl;
		cin >> array[i];
		
		}
		
	for ( int i=0 ; i<sayi ; i++) {
		cout<< "dizinin   " << i+1 << ". elemani = " << array[i] << endl;
	}
return 0 ;

	 
}

