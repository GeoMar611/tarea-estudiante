#include "Persona.cpp"
#include<iostream>

using namespace std;
class Estudiante:Persona{
	private : string carne,carrera,seccion; 
	public: 

		Estudiante(string nom,string ape,int tel,string cn,string car,string sec):Persona(nom,ape,tel){
			carne=cn;
			carrera=car;
			seccion=sec;

		}
	//modificar (set)
	void setCarne(string cn){carne=cn;}	
	void setCarrera(string car){carrera=car;}
	void setSeccion(string sec){seccion=sec;}
	void setNombres(string nom){nombres=nom;}
	void setApellidos(string ape){apellidos=ape;}	 
	void setTelefono(int tel){telefono=tel;}	 
	 //mostrar (get) 
	 	string getCarne(){return carne;}
	 	string getCarrera(){return carrera;}
	 	string getSeccion(){return seccion;}
	 	string getNombres(){return nombres;}
	 	string getApellidos(){return apellidos;}
	 	int getTelefono(){return telefono;}	
	// Metodos
		void mostrar(){

cout<<carne<<","<<carrera<<","<<seccion<<","<<nombres<<", "<<apellidos<<", "<<telefono<<endl;
}
};
