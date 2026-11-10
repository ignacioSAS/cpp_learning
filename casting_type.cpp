//CONVERCION DE TIPOS

/* La convercion de tipos es el proceso de transformar un valor a otro,en c++ podemos convertir enteros
a coma flotante(decimal).
Existen dos tipos de convercion la implicita(automatica) y la explicita(manual).
Por ejemplo Integer to Double */

//Ejemplo de convercion implicita
int number = 5;
double decimal = number; //Automaticamente se convierte en 5.0

int x = 7;
double result = x / 2.0; //Automaticamente conbierte resultado a flotante

/*Al dividir 2 numeros enteros c++ d escarta el valor decimal por ejemplo al dividir 7/2 da como resultado 3
para obtener un resultado decimal almenos un operando debe contener un numero flotante por ejemplo 7 / 2.0 
esto de manera automatica daria resultado 3.5 */

//CONVERCION EXPLICITA(MANUAL)
double decimal = 9.7; //decimal nombre de variable
int number = (int) decimal; //se convierte a 9 qudando la parte decimal trucada

double price = 19.99;
int roundedPrice = (int) price; //se convierte a 19 truncando la parte decimal

// UN ESTILO MAS MODERNO Y PREFERIDO:
/*En lugar de la convercion de tipo decimal al estilo C(int) es mejor practica usar static_cast<>() que es mas
seguro y explicito.*/
int decimal = 9.7;
int number = static_cast<int>(decimal); //se convierte en 9 la parte decimal se trunca

double price = 19.99;
int roundedPrice = static_cast<int>(price); //se convierte a 19

/* Tanto (int)value como static_cast<int>(value) producen el mismo resultado pero static_cast<>() es el enfoque
mas recomedado para c++ ya que hace que la convercion sea claramente visible verificada por el compilador. */