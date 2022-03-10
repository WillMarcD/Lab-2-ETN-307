#include <iostream>
#include <cmath>
#include <stdlib.h> //funciona new y delete

using namespace std;

int main(){
	int numVar;
	double *var;
	
	cout<<"digite el total de variables: ";
	cin>>numVar;
	var = new double[numVar];			//crear el arreglo
	
	for(int i=0;i<numVar;i++){
		cout<<"elija un valor a la variable "<<i<<": ";
		cin>>var[i];		//o tambien *(var+i);
		
	}
	
	double matrix[numVar][numVar];
	
	/*cout<<"\n\nMostrando matriz con las variables elegidas:\n";
	for(int i=0;i<numVar;i++){
		cout<<var[i]<<endl;
	}*/

	for (int i = 0; i < numVar; i++) {
   		for (int j = 0; j < numVar; j++) {
				matrix[i][j]=pow(var[i],j);
		}
	}
	
	/*(var[numvar-1]-var[numvar-2])(var[numvar-1]-var[numvar-3]).....(var[numvar-1]-var[numvar-numvar])
	(var[numvar-2]-var[numvar-3])(var[numvar-2]-var[numvar-4]).....(var[numvar-2]-var[numvar-numvar])
	..
	..(multiplicar)
	..
	(var[numvar-numvar+1]-var[numvar-numvar])
	*/
		
	int det = 1;
	for(int i=1; i < numVar; i++){
		for(int j=i+1; j <= numVar; j++){
			det=det*(var[numVar-i]-var[numVar-j]);
			
		}
	}
		
	cout << "\nMostrando la Matriz Vandermonde:\n";
	cout << "Orden: " << numVar << endl;
   	for (int i = 0; i < numVar; i++) {
      for (int j = 0; j < numVar; j++) {
         cout << matrix[i][j]<<"	";
      }
      cout << "\n";
   	}
   	
   	
	if (numVar==1){
		cout<<"\n\nEl determinante es: "<<var[0];
		
	}else{
		cout<<"\n\nEl determinante es: "<<det;
	}
	
	delete[] var;		//liberar el espacio en bytes utilizads anteriormente
	
	return 0;
}


