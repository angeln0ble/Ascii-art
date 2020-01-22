# include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
	string cliente; 
	float payment, rate, payment2, rate1, rate2, rate3, rate5, rate4, N, L;
	cout <<" Dame tu nombre " << endl; 
	getline(cin, cliente);
	cout << cliente << ", por favor introduzca el interes mensual fijo: " << endl;
	cin >> rate;  
	cout << cliente << ", por favor introduzca el plazo: " << endl; 
    cin >> N;
	cout << cliente << ", por favor introduzca el monto del prestamo: " << endl;
	cin >> L;

	rate1 = (1 + rate);
	rate2 = pow(rate1, N);
	rate5 = (rate * rate2);


	rate4 = (rate2 - 1);
	payment = (rate5 / rate4);
	payment2 = (payment * L);
	
	cout << "Cliente: " << cliente << endl;
	cout << "Monto del prestamo: " << L << endl; 
	cout << "Interes mensual: " << rate << endl;
	cout << "Numero de pagos: " << N << endl;
	cout << "Pago mensual: " << payment2 << endl;
	return 0;
}