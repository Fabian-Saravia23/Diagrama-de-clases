#include <iostream>

using namespace std; // dodnde se encuentras todas las librerias estandar
main(){
	/*
//Variable: es un espacio de memeoria reservado pra almacenar un valor que corresponde a un tipo de dato.
//cout<<"Hola mundo..."<<endl;
// tipo de nombres de la variable.
//C++ case-sensitive: Distribucion entre may�sculas y min�sculas.
// Estilo de nombres para variables: Camel case
// para las clases metodos y funciones LowerCamelCase y para las variables Snake case
//restriccion el nombre de una variable no puede: iniciar con numero, no puede tener caracteres especiales, no espacios en blanco
string nombreCompleto = "Fabian Saravia"; // LowerCamelCase
string NombreCompleto = "Fabian Saravia 2"; // UpperCamelCase
string nombre_completo = "Fabian Saravia 3"; // Snake case 
cout<<nombreCompleto<<endl;
cout<<NombreCompleto<<endl;
cout<<nombre_completo<<endl;
system("pause");

//Variables Numericas
// Numero enteros
// como declarar una variable: tipo-nombres de la variable- valor - ;
short entero_corto= 32767; // 2 bytes (-32,768 a 32,767)
int entero=2147483647 ; //4 bytes -2,147,483,648 a 2,147,483,647
long long entero_largo=12147483648 ; // 8 bytes
unsigned long long int i_entero_largo=18446744073709551615 ; // 10 bytes
cout<<"short: "<<entero_corto<<endl;
cout<<"int: "<<entero<<endl;
cout<<"long: "<<entero_largo<<endl;
cout<<"long int : "<<i_entero_largo<<endl;
int int_sin_signo = -2
cout<<"int  sin signo: "<<int_sin_signo<<endl;
    Long double numero_decimal = 100.235; // 10 Bytes
cout<<"float: "<<numero_decimal<<endl;
char cr= 'T';
char asc= 61;
cout<<"char: "<<cr<<endl;
cout<<"ascii:" <<asc<<endl;
// logicos 1 o 0, True o false
bool logico = true;
*/

    // Numeros reales de punto flotante
    
    
    char saludo[4];
    saludo[0] = 'H';
    saludo[1] = 'O';
    saludo[2] = 'L';
    saludo[3] = 'A';
    cout<<"array: "<<saludo<<endl;
    cout<<"array : "<<saludo[0]<<saludo[1]<<saludo[2]<<saludo[3]<<endl;
    
    int codigo[3];
    codigo[0] = 1280;
    codigo[1] = 3800;
    codigo[2] = 12451280;
    cout<<"codigos:"<<codigo[0]<<","<<codigo[1]<<","<<codigo[2]<<endl;
    
    string paises[3];
    paises[0] = "Guatemala";
    paises[1] = "El Salvador";
    paises[2] = "Honduras";
    cout<<"Paises:"<<paises[0]<<","<<paises[1]<<","<<paises[2]<<endl;
    
    system("pause");
    
}
