// Klavyeden 0 girilene kadar girilen say�lar� toplayan program

#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "Turkish");
	int i = 1, sayi, toplam = 0;
	
	cout << "Bir Say� Giriniz:";
	cin >> sayi;
	
	while (sayi != 0){
		toplam += sayi;
		
		cout << "Bir Say� Giriniz:";
		cin >> sayi;
		
	}
	
	cout << "Girilen Say�lar�n Toplam�:" << toplam;
	
	
	
}
