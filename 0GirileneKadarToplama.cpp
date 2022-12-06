// Klavyeden 0 girilene kadar girilen sayýlarý toplayan program

#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "Turkish");
	int i = 1, sayi, toplam = 0;
	
	cout << "Bir Sayý Giriniz:";
	cin >> sayi;
	
	while (sayi != 0){
		toplam += sayi;
		
		cout << "Bir Sayý Giriniz:";
		cin >> sayi;
		
	}
	
	cout << "Girilen Sayýlarýn Toplamý:" << toplam;
	
	
	
}
