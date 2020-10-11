#include"Estudiante.cpp"
#include<iostream>
using namespace std;
main(){
	string carne,carrera,seccion,nombres,apellidos,res;
	int telefono;
	cout<<"Ingrese Carne No.: ";
	cin>>carne;
	cout<<"Ingrese Nombre: ";
	cin>>nombres;
	cout<<"Ingrese Apellido:";
	cin>>apellidos;
	cout<<"Ingrese Carrera: ";
	cin>>carrera;
	cout<<"Ingrese Seccion: ";
	cin>>seccion;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	system ("cls");
	cout<<"____________________________________________"<<endl;
	cout<<endl;
	Estudiante obj = Estudiante(nombres,apellidos,telefono,carne,carrera,seccion);
	cout<<"Carne No.:";cout<<obj.getCarne()<<endl;
	cout<<"Nombre:";cout<<obj.getNombres()<<endl;
	cout<<"Apellido:";cout<<obj.getApellidos()<<endl;
	cout<<"Carrera:";cout<<obj.getCarrera()<<endl;
	cout<<"Seccion:";cout<<obj.getSeccion()<<endl;
	cout<<"Telefono:";cout<<obj.getTelefono()<<endl;
	cout<<"____________________________________________"<<endl;
	
	cout<<"Desea modificar el registro? s/n "<<endl;
	cin>>res;
	if (res=="s"){
		system ("cls");
		
	cout<<"_________________Modificar__________________"<<endl;
	cout<<"Ingrese Carne No.: ";
	cin>>carne;
	cout<<"Ingrese Nombre: ";
	cin>>nombres;
	cout<<"Ingrese Apellido:";
	cin>>apellidos;
	cout<<"Ingrese Carrera: ";
	cin>>carrera;
	cout<<"Ingrese Seccion: ";
	cin>>seccion;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	system ("cls");
	
	cout<<"____________________________________________"<<endl;
	obj.setCarne(carne);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setCarrera(carrera);
	obj.setSeccion(seccion);
	obj.setTelefono(telefono); 
	//obj.mostrar();
	cout<<"Carne No.:";cout<<obj.getCarne()<<endl;
	cout<<"Nombre:";cout<<obj.getNombres()<<endl;
	cout<<"Apellido:";cout<<obj.getApellidos()<<endl;
	cout<<"Carrera:";cout<<obj.getCarrera()<<endl;
	cout<<"Seccion:";cout<<obj.getSeccion()<<endl;
	cout<<"Telefono:";cout<<obj.getTelefono()<<endl;
	cout<<"____________________________________________"<<endl;
	}
	

	
	
}
