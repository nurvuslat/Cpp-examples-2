// Sayý tahmin programý

#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;

main(){
	setlocale(LC_ALL, "Turkish");
	
	int rastgeleSayi, tahmin, tahminSayisi = 0;
	
	srand(time(NULL));
	rastgeleSayi = rand() % 100 + 1;
	cout << rastgeleSayi << endl;
	
	while(1){
		tahminSayisi++;
		
		cout << "Tahmin Giriniz:";
		cin >> tahmin;
		
		if (tahmin > rastgeleSayi){
			cout << "Sayýnýzý Küçültün" << endl;
		}
		else if (tahmin < rastgeleSayi){
			cout << "Sayýnýzý Yükseltin" << endl;
		}
		else{
			cout << "Tebrikler Bildiniz!" << endl;
			break;
		}
				
	}

}
