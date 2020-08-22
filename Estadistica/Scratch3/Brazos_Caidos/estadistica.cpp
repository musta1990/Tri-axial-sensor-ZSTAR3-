/*
*	Compile: g++ -std=c++11 estadistica.cpp -o estadistica.o
*	Execute: ./estadistica.o
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
/*********************************************** 
* Datos de x, y, z 
***********************************************/
	double
		x1 = 0.2222, 	
		x2 = 0.2222,
		x3 = 0.2222,
		x4 = 0.2063,
		x5 = 0.2381,
		x6 = 0.2222,
		x7 = 0.2063,
		x8 = 0.2063,
		x9 = 0.2222,
		x10 = 0.2381;
	
	double
		y1 = 0.9683,
		y2 = 0.9683,
		y3 = 0.9365,
		y4 = 0.9683,
		y5 = 0.9683,
		y6 = 0.9683,
		y7 = 0.9841,
		y8 = 0.9683,
		y9 = 0.9683,
		y10 = 0.9841;
	
	double
		z1 = 0.0635,
		z2 = 0.0635,
		z3 = 0.0635,
		z4 = 0.0794,
		z5 = 0.0476,
		z6 = 0.0317,
		z7 = 0.0476,
		z8 = 0.0476,
		z9 = 0.0476,
		z10 = 0.0635;
	
	double
		medx,
		varx,
		desviacionStdx,
		
		medy,
		vary,
		desviacionStdy,
		
		medz,
		varz,
		desviacionStdz,
		
		medNorm,
		varNorm,
		desviacionStdNorm;
	
	double
		norm1,
		norm2,
		norm3,
		norm4,
		norm5,
		norm6,
		norm7,
		norm8,
		norm9,
		norm10;
	
	
/*********************************************
* Formulación de la media o promedio
*********************************************/
	medx = (x1 + x2 + x3 + x4 + x5 + x6 + x7 + x8 + x9 + x10)/10;
	
	medy = (y1 + y2 + y3 + y4 + y5 + y6 + y7 + y8 + y9 + y10)/10;
	
	medz = (z1 + z2 + z3 + z4 + z5 + z6 + z7 + z8 + z9 + z10)/10;
	
	
/********************************************
* Formulación de la varianza
********************************************/
	varx = (
		((x1-medx)*(x1-medx)) + 
		((x2-medx)*(x2-medx)) + 
		((x3-medx)*(x3-medx)) + 
		((x4-medx)*(x4-medx)) + 
		((x5-medx)*(x5-medx)) + 
		((x6-medx)*(x6-medx)) + 
		((x7-medx)*(x7-medx)) + 
		((x8-medx)*(x8-medx)) + 
		((x9-medx)*(x9-medx)) + 
		((x10-medx)*(x10-medx))
		)/10;
	
	vary = (
		((y1-medy)*(y1-medy)) + 
		((y2-medy)*(y2-medy)) + 
		((y3-medy)*(y3-medy)) + 
		((y4-medy)*(y4-medy)) + 
		((y5-medy)*(y5-medy)) + 
		((y6-medy)*(y6-medy)) + 
		((y7-medy)*(y7-medy)) + 
		((y8-medy)*(y8-medy)) + 
		((y9-medy)*(y9-medy)) + 
		((y10-medy)*(y10-medy))
		)/10;
	
	varz = (
		((z1-medz)*(z1-medz)) + 
		((z2-medz)*(z2-medz)) + 
		((z3-medz)*(z3-medz)) + 
		((z4-medz)*(z4-medz)) + 
		((z5-medz)*(z5-medz)) + 
		((z6-medz)*(z6-medz)) + 
		((z7-medz)*(z7-medz)) + 
		((z8-medz)*(z8-medz)) + 
		((z9-medz)*(z9-medz)) + 
		((z10-medz)*(z10-medz))
		)/10;
	
	
/******************************************************
* Normal
******************************************************/	
	norm1 = sqrt((x1*x1) + (y1*y1) + (z1*z1));
	norm2 = sqrt((x2*x2) + (y2*y2) + (z2*z2));
	norm3 = sqrt((x3*x3) + (y3*y3) + (z3*z3));
	norm4 = sqrt((x4*x4) + (y4*y4) + (z4*z4));
	norm5 = sqrt((x5*x5) + (y5*y5) + (z5*z5));
	norm6 = sqrt((x6*x6) + (y6*y6) + (z6*z6));
	norm7 = sqrt((x7*x7) + (y7*y7) + (z7*z7));
	norm8 = sqrt((x8*x8) + (y8*y8) + (z8*z8));
	norm9 = sqrt((x9*x9) + (y9*y9) + (z9*z9));
	norm10 = sqrt((x10*x10) + (y10*y10) + (z10*z10));
	
	medNorm = (norm1 + norm2 + norm3 + norm4 + norm5 + norm6 + norm7 + norm8 + norm9 + norm10)/10;
	
	varNorm = (
		((norm1-medNorm)*(norm1-medNorm)) + 
		((norm2-medNorm)*(norm2-medNorm)) + 
		((norm3-medNorm)*(norm3-medNorm)) + 
		((norm4-medNorm)*(norm4-medNorm)) + 
		((norm5-medNorm)*(norm5-medNorm)) + 
		((norm6-medNorm)*(norm6-medNorm)) + 
		((norm7-medNorm)*(norm7-medNorm)) + 
		((norm8-medNorm)*(norm8-medNorm)) + 
		((norm9-medNorm)*(norm9-medNorm)) + 
		((norm10-medNorm)*(norm10-medNorm))
		)/10;
	
	
/***************************************************
* Formulación de la desviación estándar
***************************************************/
	desviacionStdx = sqrt(varx);
	desviacionStdy = sqrt(vary);
	desviacionStdz = sqrt(varz);
	desviacionStdNorm = sqrt(varNorm);

/**************************************************
* Cálculo de maximos y mínimos
**************************************************/
	auto min_max_X = minmax({x1, x2, x3, x4, x5, x6, x7, x8, x9, x10});
	auto min_max_Y = minmax({y1, y2, y3, y4, y5, y6, y7, y8, y9, y10});
	auto min_max_Z = minmax({z1, z2, z3, z4, z5, z6, z7, z8, z9, z10});
	auto min_max_Norm = minmax({norm1, norm2, norm3, norm4, norm5, norm6, norm7, norm8, norm9, norm10});
	
	
/****************************************************
* Promedio o media
****************************************************/
	cout << "------------ μ -----------" << endl;
	cout << "X: " << medx << endl;
	cout << "Y: " << medy << endl;
	cout << "Z: " << medz << endl;
	cout << "\n";
	
/************************************************************************
* La desviación estándar mide que tanto se separan los datos
************************************************************************/
	cout << "----------- σ -----------" << endl;
	cout << "X: " << desviacionStdx << endl;
	cout << "Y: " << desviacionStdy << endl;
	cout << "Z: " << desviacionStdz << endl;
	cout << "\n";
	
/**************************************************
* Maximo y mínimo
***************************************************/
	cout << "----------- Máximos y mínimos -----------" << endl;
	cout << "Máximo X: " << min_max_X.second << endl;
	cout << "Mínimo X: " << min_max_X.first << endl;
	cout << "\n";
	cout << "Máximo Y: " << min_max_Y.second << endl;
	cout << "Mínimo Y: " << min_max_Y.first << endl;
	cout << "\n";
	cout << "Máximo Z: " << min_max_Z.second << endl;
	cout << "Mínimo Z: " << min_max_Z.first << endl;
	cout << "\n";
	
	
/**************************************************
* Magnitud
**************************************************/
	cout << "----------- Magnitudes -----------" << endl;
	cout << norm1 << endl;
	cout << norm2 << endl;
	cout << norm3 << endl;
	cout << norm4 << endl;
	cout << norm5 << endl;
	cout << norm6 << endl;
	cout << norm7 << endl;
	cout << norm8 << endl;
	cout << norm9 << endl;
	cout << norm10 << endl;
	
	cout << "\n";
	
	cout << "---- μ Magnitud ----" << endl;
	cout << medNorm << endl;
	
	cout << "---- σ Magnitud ----" << endl;
	cout << desviacionStdNorm << endl;
	
	cout << "\n";
	
	cout << "Máximo Norm: " << min_max_Norm.second << endl;
	cout << "Mínimo Norm: " << min_max_Norm.first << endl;
}
