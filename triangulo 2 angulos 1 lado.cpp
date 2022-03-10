//TRIANGULO 2 ANGULOS 1 LADO
#include<iostream>
#include<cmath>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float A;
	float B;
	float a;
	cout << "Sea un triangulo oblicuangulo, con angulos de A, B y C (radianes) y de lados a, b y c opuestos a dichos àngulos" << endl;
	cout << "Ingrese 2 angulos (A,B) y 1 lado (a) del triangulo" << endl;
	cin >> a >> A >> B;
	double b = (sin(B)*a)/sin(A);
	double C = 3.1416-A-B;
	double c = (a*sin(C))/sin(A);
	if (A<1 && A>0) {
		cout << "El lado b es " << b << endl;
		cout << "El angulo C es " << C << endl;
		cout << "El lado c es " << c << endl;
	} else {
		cout << "El triangulo no existe" << endl;
	}
	return 0;
}