/*
*	Brazos Caídos.
*
*	Media.
*	μ = (sum of X from 1 to n)/n
*
*	Desviación estándar.
*	σ = sqrt(varianza)
*
*	Magnitud.
*	N = sqrt(acc_x^2 + acc_y^2 + acc_z^2)
*
*	Partiendo de los datos estadísticos como promedio,
*	desviación estándar, o inclusive la magnitud de los 
*	vectores de aceleración. Se deducen un conjunto de 
*	reglas para detectar el movimiento efectuado por la
*	persona que porta el sensor.
*/
#include <iostream>

using namespace std;

// FUNCIONES PROTOTIPO
/*

*/

int main(int argc, char **argv) {
	
	// DEFINICIÓN DE VARIABLES
	
	float avg_acc_x_left[4] = {-0.17142, -0.17142, -0.16665, -0.16665}; // Valores promedios de x
	float avg_acc_y_left[4] = {0.98253, 0.98095, 0.97462, 0.98411}; // Valores promedios de y
	float avg_acc_z_left[4] = {0.17301, 0.16825, 0.1746, 0.17302}; // Valores promedios de z
	
	//float stdev_mag_izq[]
	
	//cout << avg_acc_x_left[0] << " " << avg_acc_x_left[1] << " " << avg_acc_x_left[2] << " " << avg_acc_x_left[3] << endl;
	
	for(int i = 0; i <= 3; i++)
		cout << avg_acc_x_left[i] << " ";
	cout << endl;
	
	for(int j = 0; j <= 3; j++)
		cout << avg_acc_y_left[j] << " ";
	cout << endl;
	
	for(int k = 0; k <= 3; k++)
		cout << avg_acc_z_left[k] << " ";
	cout << endl;
	// LOGICA DEL PROGRAMA
	/*
	
	*/
	
	
	// RESPUESTA ESPERADA
	/*
	
	*/
}
