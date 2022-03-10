//SISTEMA 2X2
#include<iostream>
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
	float m;
	float n;
	float p;
	float x1;
	float y1;
	cout << "Ingrese los coeficientes (a,b,c,m,n,p) del sistema de ecuacion de 2x2 de la forma: " << endl;
	cout << " ax + by = c" << endl;
	cout << " mx + ny = p" << endl;
	cin >> a >> b >> c >> m >> n >> p;
	x1 = ((c*n-p*b)/(a*n-b*m));
	y1 = ((a*p-m*c)/(a*n-b*m));
	if ((a*n-m*b)!=0) {
		cout << "El sistema tiene solucion unica" << endl;
		cout << "El valor de X es: " << x1 << endl;
		cout << "El valor de Y es: " << y1 << endl;
	} else {
		if ((-a/b)==(-m/n) && (c/b)!=(p/n)) {
			cout << "El sistema no tiene solucion" << endl;
		} else {
			cout << "El sistema tiene infinitas soluciones" << endl;
		}
	}
	return 0;
}
