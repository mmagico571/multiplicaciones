/*
*DAR 2024
*
*
*/
#include<iostream>
#include<stdlib.h>
#include<unistd.h>
using namespace std;
int main()
{
    char continuar;
    //VARIABLES DEL SISTEMA
	int num1=0;
	int num2=0;
	//numero de repeticiones que se ejecuta el ejercicio de sumar.
	int repeticiones=10;
	//toma el tiempo del sistema para inicializar numeros aleatorios.
	srand(time(NULL));
	//inicia el ciclo 
	do{
	cout<<"################## EJERCITADOR DE MULTIPLICACIONES ##################"<<endl;
	sleep(2);
	system("clear");
	//inicia el ciclo de MULTIPLICACIONES
	for(int j=1;j<=repeticiones;j++)
	{
		//variable que guarda la suma.
		int mul=0;
		//crea valores de los sumandos y los guarda en un arreglo.
			//establecemos el rango para los FACTORES DE LA MULTIPLICACION
			num1=1+rand()%(11 - 1);
			num2=1+rand()%(11 - 1);
		//muestra los factores durante 1 segundo.
		cout<<num1<<"*"<<num2<<"\n";
		// multiplica los factores
		mul = num1 * num2;
		//muestra el resultado de la multiplicacion
		sleep(1);
		cout<<"mul= "<<mul<<"\n";
		sleep(2);
		system("clear");
	}
	cout<<"Precione cualquier tecla para realizar otro repaso o digite 0 para salir de la aplicacion: ";
	cin>>continuar;
	}while(continuar!='0');
}