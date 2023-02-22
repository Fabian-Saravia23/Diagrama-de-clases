#include <iostream>
using namespace std;
class Persona{
	// atributos
	protected : string nombres, apellidos, direccion, fecha_nacimiento;
	            int telefono;
	            
	// contructo
	protected : 
	        Persona(){
			} 
			Persona(string nom, string ape, string dir, string fecha_n , int tel){
				nombres = nom;
				apellidos = ape;
				direccion = dir;
				fecha_nacimiento = fecha_n;
				telefono = tel;
			}  
// metodo
void mostrar();
};

