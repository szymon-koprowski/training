#include <iostream>

using namespace std;

int silnia(int a){
	int silnia = 1;
	for(int i = 1; i <=a; i++){
		silnia = silnia*i;
	}
	return silnia;
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
		cout << "1. Silnia" << endl;
        cin >> wyjscie;
		if(wyjscie==1){
			cout << "Podaj liczbe:";
			int x;
			cin >> x;
			cout << "Wynik: " << silnia(x) << endl;
		}
    } while(wyjscie != 0);
    return 0;
}
