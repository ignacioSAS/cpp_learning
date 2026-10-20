/* En c++una vez que se declara una variable con un tipo determinado solo puede contener
valores de ese mismo tipo por ejemplo una varuable < int > solo puede contener valores enteros
y una variable < string > solo puede contener texto por ejemplo: */


#include <string>
int age = 25; //solo puede contener valores numeros enteros
std::string str = "abc"; //solo puede contener texto

int age_error = "abc"; //Error de compilacion una variable int no puede guardar texto
std :: string  str_error = 25 //Error de compilacion una variable str no puede guardar numeros

