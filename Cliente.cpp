#include "Persona.cpp"
#include <iostream>
using namespace std;

class Cliente : Persona{
	// atributos
	private : string nit;
	
	// contructor
	public :
		Cliente (){
		}
		
		Cliente(string nom, string ape, string dir, string fecha_n, int tel, string n) : Persona(nom,ape,dir,fecha_n,tel){
			nit = n;
		}
		// metodos
		// set (modificar)
		void setNit(string n){nit= n;}
		void setNombres(string nom){nombres= nom;}
		void setApellidos(string ape){apellidos= ape;}
		void setDireccion(string dir){direccion= dir;}
		void setFecha_nacimiento(string fecha_n){fecha_nacimiento=fecha_n;}
		void setTelefono(int tel){telefono= tel;}
		// get (mostrar)
		string getNit(){return nit;}
		string getNombres(){return nombres;}
		string getApellidos(){return apellidos;}
		string getDireccion(){return direccion;}
		string getFecha_nacimiento(){return fecha_nacimiento;}
		int getTelefono(){return telefono;}
		void mostrar(){
			cout<<"______________________"<<endl;
			cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<fecha_nacimiento<<","<<telefono<<","<<endl;
		}
};
