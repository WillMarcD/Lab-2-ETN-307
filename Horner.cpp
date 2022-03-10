#include <iostream>
#include <cmath>
#include <stdlib.h> //funciona new y delete

using namespace std;

int main(){
int n,k;
double *a,*b;
cout<<"introduzca el grado del dividendo: ";
cin>>n;
cout<<"introduzca el grado del divisor: ";
cin>>k;
while(n<k){
	cout<<"ERROR! "<<n<<" tiene que ser mayor a "<<k<<""<<endl;
	cout<<"introduzca el grado del dividendo: ";
	cin>>n;
	cout<<"introduzca el grado del divisor: ";
	cin>>k;
}
	
a = new double[n+1];
b = new double[k+1];

for(int i=0;i<=n;i++){
		cout<<"elija un valor al coeficiente "<<i<<" del dividendo: ";
		cin>>a[i];		//o tambien *(divd+i);
	}

for(int i=0;i<=k;i++){
		cout<<"elija un valor al coeficiente "<<i<<" del divisor: ";
		cin>>b[i];		//o tambien *(divd+i);
	}


double *c;
c = new double[n+1];


for(int i=0;i<=n-k;i++){
	double result = 0;
	for(int j=1; j <= i; j++){
		if((i-j) < 0){
		c[i-j]=0;
		} else if(j > k){
			b[j]=0;
		}
		result = result+(c[i-j])*(-b[j]);	//para el cociente
	}
	c[i]=((result+a[i])/(b[0]));
}


for(int i=n-k+1;i<=n;i++){
	double result=0;
	for(int j=1; j<=i; j++){
		if(j > k){
		b[j]=0;
		}
		result=result+(c[i-j])*(-b[j]);			//para el resto
	}
	c[i]=(result+a[i]);
	
}


cout<<"\nlos coeficientes del cociente son: "<<endl;
for(int m=0;m<=n-k;m++){
	cout<<c[m]<<" x^"<<n-k-m<<"	";
	
}


cout<<"\n\nlos coeficientes del resto son: "<<endl;
for(int m=n-k+1; m<=n ; m++){
	cout<<c[m]<<" x^"<<n-m<<"	";
}

delete [] a,b,c;			//liberar el espacio en bytes utilizads anteriormente
return 0;
}