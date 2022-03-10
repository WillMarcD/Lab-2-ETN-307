//TRIANGULO 3 LADOS
#include<iostream>
#include<cmath>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float a;
	float b;
	float c;
	cout << "Sea un triangulo oblicuangulo, con angulos de A, B y C (radianes) y de lados a, b y c opuestos a dichos angulos" << endl;
	cout << "Ingrese los tres lados del triangulo" << endl;
	cin >> a >> b >> c;
	double A = acos((b*b+c*c-a*a)/(2*b*c));
	double B = asin((b/a)*sin(a));
	double C = asin((c*sin(a))/a);
	if (a+b>c && a+c>b && b+c>a) {
		cout << "Los lados son: " << a  <<" "<< b  <<" "<< c << endl;
		cout << "El angulo A es " << A << endl;
		cout << "El angulo B es " << B << endl;
		cout << "El angulo C es " << C << endl;
	} else {
		cout << "El triangulo no existe" << endl;
	}
	return 0;
}