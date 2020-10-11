#include<iostream>
using namespace std;
class Persona{
	protected : string nombres,apellidos;
				int telefono;	
	protected :
		Persona(string nom,string ape,int tel){
			nombres=nom;
			apellidos=ape;
			telefono=tel;	
		}
		
		void agregar();
		void mostrar();
};
