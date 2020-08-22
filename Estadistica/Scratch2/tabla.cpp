/*
*	Directory: cd /home/mustafa/C_C++/Estadistica
*	Compile: g++ -std=c++11 tabla.cpp -o tabla.o
*	Execute: ./tabla.o
*
*	Descripción:
*		1. Cargar archivo .csv
*		2. Generar estadística con los datos del
*			archivo .csv
*		3. Enviar estadística a una tabla de datos
*/
#include <iostream> /* library that contain basic input/output functions */
#include <fstream> /* library that contains file input/output functions */
#include <string>
#include <cstring>
#include <vector>
#include <sstream>

using namespace std;

int main(int argc, char ** argv) {
	
	string line; // lines of the file...
	
	ifstream myfile("file.csv"); // Opening the file for reading...
	
	vector<double> val;
	
	double val_aux[4];
	
	for(int i = 0; i < 4; ++i)
		val_aux[i] = 0;
	
	val.clear();
	
	/* Multidimensional array[row][col]... */
	//double x[][], y[][], z[][];
	
	if(myfile.is_open()) {	// If the file is open, then...
		cout << "File Opened successfully!!!. Reading data from file into array..." << endl;
		
		while(getline(myfile, line)) { // while getting lines of my file...
			//c-out << line << endl;
			
    		stringstream linestream(line);
    		string data;
			//getline(linestream, data, '\t');
			
			linestream >> val_aux[0] >> val_aux[1] >> val_aux[2] >> val_aux[3];
			//cout << val_aux[0] << "\n";
			val.push_back(val_aux[1]);
		}
		
		myfile.close();
	}
	
	else
		cout << "Unable to open file" << endl;
	
	for(double i = 0.0000; i < val.size(); ++i)
		cout << val[i] << endl;
}
