//TRIANGULO MEDIANAS:
#include<iostream>
#include<cmath>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	double a;
	double b;
	double c;
	double m1;
	double m2;
	double m3;
	cout << "Sea un triangulo oblicuangulo, con angulos de A, B y C (radianes) y de lados a, b y c opuestos a dichos àngulos" << endl;
	cout << "Ingrese los tres lados del triangulo" << endl;
	cin >> a >> b >> c;
	double A = acos((b*b+c*c-a*a)/(2*b*c));
	double B = asin((b/a)*sin(A));
	double C = asin((c*sin(A))/a);
	m1 = sqrtf(b*b+(c/2)*(c/2)-(2*b*(c/2)*cos(A)));
	m2 = sqrtf(c*c+(a/2)*(a/2)-2*c*(a/2)*cos(B));
	m3 = sqrtf(a*a+(b/2)*(b/2)-2*a*(b/2)*cos(C));
	if (a+b>c && a+c>b && b+c>a) {
		cout << "Los lados son: " << a << b << c << endl;
		cout << "El angulo A es " << A << endl;
		cout << "El angulo B es " << B << endl;
		cout << "El angulo C es " << C << endl;
		cout << "Las medianas son: " << m1 << "," << m2 << "," << m3 << endl;
	} else {
		cout << "El triangulo no existe" << endl;
	}
	return 0;
}