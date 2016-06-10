#include "escuadron.h"
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
using std::string;
using std::stringstream;
using std::vector;

Escuadron::Escuadron(string Nombre, vector<Soldado*> peloton){

}
Escuadron::~Escuadron(){
}
string Escuadron::toString()const{
	stringstream ss;
	ss << "Escuadron @ " << this;
	return ss.str();
}
