//char (caracter)

/* En c++  < char > se refiere a un simple caracter por ejemplo: 1,e,%. Para inicializar una
variable tipo char se define entre comillas simples ejemplo:*/

char c1 = 'h'; //En este ejemplo la variable c1 tipo char tiene el valor 'h' 

//string(texto)

/* En c++ una cadena de texto puede contener multiples caracteres para usar una cadena de tecto en c++ debes
incluir < string > al principio de du codigo. */

#include <string>

/* Si bien tu codigo podria funcionar sin el uso de #include <string> ya que encabezados como <iostream>
podrian incluirlo se considera una buena practica incluir esta funcion.
Tambien debes gestionar el espacio de nombres de una de estas dos maneras. */

// 1.- Agrega esta linea antes de < includes >.
using namespace std;

// 2.- Usando la cadena std:: .
std :: string s1 = "Esta es una cadena de texto";

//Ejemplo completo

#include <string>
using namespace std;

int main() {
    string s1 = "Hello world"; //metodo 1 style
    std :: string s2 = "Hello world again"; //metodo 2
    //s1 y s2 se refiere al nombre de la variable puedes cambu=iarlo por ejemplo a forma1,forma2
    return 0;
}