#include <iostream>
#include "escuadron.h"
#include "soldado.h"
#include "asesinos.h"
#include "coraza.h"
#include "Arquero.h"
#include <vector>
#include <string>
#include <sstream>
#include <iostream>
using std::string;
using std::stringstream;
using std::cout;
using std::endl;
using std::cin;


int main(int argc, char const *argv[]) {
	vector<Soldado> esc;
	int opcion =1;
	while(opcion<3){
		cout <<"1.Ingrese un escuadrons"<<endl;
		cout <<"2.simulacion"<<endl;
		cout <<"3.salir"<<endl;
		cin>> opcion;
		if(opcion==1){
			cout<<"1.ingrese un Arquero "<<endl;
			cout<<"2.ingrese una coraza"<<endl;
			cout<<"3.ingrese"<<endl;
			int opcion2;
			cin >> opcion2;
			if (opcion2==1){
				cout<<"ingrese nombre"<<endl;
				string nombre;
				cin >>nombre;
				cout<<"ingrese edad"<<endl;
				int edad;
				cin >> edad;
				cout<<"ingrese cantidad de flechas"<<endl;
				int flechas;
				cin >> flechas;
				cout<<"ingrese defensas"<<endl;
				int defensa;
				cin >> defensa;

			}
			if (opcion2==2){
				cout<<"ingrese nombre"<<endl;
				string nombre;
				cin >>nombre;
				cout<<"ingrese edad"<<endl;
				int edad;
				cin >> edad;
				cout<<"ingrese cantidad de lanzas"<<endl;
				int flechas;
				cin >> flechas;
				cout<<"ingrese defensas"<<endl;
				int defensa;
				cin >> defensa;

			}
			if (opcion2==3){

				cout<<"ingrese nombre"<<endl;
				string nombre;
				cin >>nombre;
				cout<<"ingrese edad"<<endl;
				int edad;
				cin >> edad;
				cout<<"ingrese cantidad de muertos"<<endl;
				int flechas;
				cin >> flechas;
				cout<<"ingrese defensas"<<endl;
				int defensa;
				cin >> defensa;

			}

		}

	}


  return 0;
}
