//Girilen say�n�n asal �arpanlar�n� bulan program

#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "Turkish");
	
	int sayi, i, bolen = 2;
	
	cout << "Say� Giriniz:";
	cin >> sayi;
	
	while (sayi >= bolen){
		if (sayi % bolen == 0){
			sayi /= bolen;
			cout << bolen << endl;
		}
		else{
			bolen++;
		}
		
	}
	
	
	
}
