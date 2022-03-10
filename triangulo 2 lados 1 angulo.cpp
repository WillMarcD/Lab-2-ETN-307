//TRIANGULO 2 LADOS 1 ANGULO
#include<iostream>
#include<cmath>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	cout << "Sea un triangulo oblicuangulo, con angulos de A, B y C (radianes) y de lados a, b y c opuestos a dichos àngulos" << endl;
	cout << "Ingrese 2 lados (b,c) y 1 angulo (A) del triangulo" << endl;
    float b;
	float c;
	float A;
	cin >> b >> c >> A;
	double a =  sqrtf(b*b+c*c-2*b*c*cos(A));
	double B = asin((b/a)*sin(A));
    float C = asin((c*sin(a))/a);
	if (A > 0  && A < 1) {
		cout << "El angulo B es " << B << endl;
		cout << "El angulo C es " << C << endl;
		cout << "El lado c es " << c << endl;
	} else {
		cout << "El angulo no esta en radianes" << endl;
	}
	return 0;
}