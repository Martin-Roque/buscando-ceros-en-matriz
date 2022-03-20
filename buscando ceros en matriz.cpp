#include <cstdlib>
#include <iostream>
#include <ctime> //esta biblioteca es para habilitar la generación de numeros aleatorios
using namespace std;
//i=0 y j=0 es lo que vas a usar para lo de las filas y columnas
int main(){
	int matriz[15][15];
	int filas[15];
	int columnas[15];
	int n; //numeros en horizontal
	int m; //numeros en vertical
	int dato;//para llenar la matriz con los numeros generados
	int cerosT=0;
	int cerosF=0;
	int cerosC=0;
	cout<<"Inserte el numero de renglones que quiere que tenga la matriz"<<endl;
	cin>>n;
	while(n > 15){
		cout<<"Ese numero es demasiado grande, inserte uno mas pequeño"<<endl;
		cin>>n;
	}
	cout<<"Ahora inserte el numero de columnas que quiere que tenga la matriz"<<endl;
	cin>>m;
	while(m > 15){
		cout<<"Ese numero es demasiado grande, inserte uno mas pequeño"<<endl;
		cin>>m;
	}
	srand(time(NULL)); //genera los numeros aleatorios	
	
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			dato = 0+rand()%(9); //numeros aleatorios (0-9)
			matriz[i][j]=dato;
		}
	}
	cout<<"Esta es la matriz generada:"<<endl;
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			if(matriz[i][j]==0){     //Buscar ceros en toda la matriz
				cerosT = cerosT+1;
			}
		}
    }
    cout<<"La cantidad de ceros es de: "<<cerosT<<endl;  
    
    int i = 0;
    while(i < n){
    	filas[i]=0;
    	for(int j = 0; j<m;j++){
    		if(matriz[i][j]==0){     //buscar ceros en cada fila o renglon
    			cerosF=cerosF+1;
			}
		  	filas[i]=cerosF;	
		}
		i++;
		cerosF=0;
	}
	cout<<"La cantidad de ceros por renglon es de: ";
	for(int i = 0; i<n;i++){
		cout<<filas[i]<<" ";
	}
	int j = 0;
	while(j < m){
		columnas[j]=0;
		for(int i = 0;i<n;i++){
			if(matriz[i][j]==0){
				cerosC=cerosC+1;	  //buscar ceros en cada columna
			}
		    columnas[j]=cerosC;	
		}
		j++;
		cerosC=0;
	}
	cout<<"La cantidad de ceros por columna es de: ";
	for(int j=0; j<m;j++){
		cout<<columnas[j]<<" ";
	}
	return 0;
}
