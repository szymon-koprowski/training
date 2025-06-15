#include <iostream>
#include <math.h>

using namespace std;

bool czyPierwsza(int a){
	if(a < 2) return false;
	for(int i = 2; i < sqrt(a); i++){
		if(a%i==0){
			return false;
		}
	}
	return true;
}

int main() {
    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
		cout << "2. Czy pierwsza" << endl;
        cin >> wyjscie;
		if(wyjscie == 2){
			int x;
			cout << "Podaj liczbe do sprawdzenia:";
			cin >> x;
			if(czyPierwsza(x)){
				cout << "Liczba jest pierwsza." << endl;
				cout << "Uznajmy, że dodaje to jeszcze raz"<<endl;
			} else cout << "Liczba nie jest pierwsza." << endl;
		}
    } while(wyjscie != 0);
    return 0;
}
