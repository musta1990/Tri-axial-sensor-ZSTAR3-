/*
*	Compile: g++ -std=c++11 desviacionEstandar.cpp -o desviacionEstandar.o
*	Execute: ./desviacionEstandar.o
*
*	Descripción:
*		1. input: a, b, c, d, e, f, g
*		2. media = (a + b + c + d + e + f + g)/7
*		3. varianza = (a - media)² + (b - media)² + (c - media)² + (d - media)² + (e - media)² + (f - media)² + (g - media)²/7
*		4. desviacionStd = sqrt(varianza)
*		5. output desviacionStd
*
*	Mustafa Ali Saba
*/
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(int argc, char **argv) {
	
	/*0.1980;0.0159;0.0000;1.0000;
0.5980;0.0159;-0.0159;0.9524;
0.9980;0.0159;-0.0159;0.9683;
1.3980;0.0000;-0.0159;0.9683;
1.7980;0.0159;-0.0159;0.9841;*/
	
	// Aceleración en x
	double x1 = 0.0159, x2 = 0.0159, x3 = 0.0159, x4 = 0.0000, x5 = 0.0159;
	//double y1 = 0.0159, y2 = 0.0159, y3 = 0.0159, y4 = 0.0000, y5 = 0.0159;
	//double z1 = 0.0159, z2 = 0.0159, z3 = 0.0159, z4 = 0.0000, z5 = 0.0159;
	
	double med, var, desviacionStd;
	
	/* Formulación de la media */
	med = (x1 + x2 + x3 + x4 + x5)/5;
	
	/* Formulación de la varianza */
	var = (pow(x1-med, 2) + pow(x2-med, 2) + pow(x3-med, 2) + pow(x4-med, 2) + pow(x5-med, 2))/5;

	/* Formulación de la desviación estándar */
	desviacionStd = sqrt(var);
	
	/* Promedio o media */
	cout << "Promedio acc_x: " << med << endl;
	/* La desviación estándar mide que tanto se separan los datos */
	cout << "Desviación Estándar en acc_x: " << desviacionStd << endl;
	/* Maximo y mínimo */
	auto min_max = minmax({x1, x2, x3, x4, x5});
	cout << "Máximo y mínimo: " << min_max.second << ' ' << min_max.first << endl;
}
