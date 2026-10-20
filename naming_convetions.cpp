// Naming conventions (Convencion de nomenclatura)

/* En la prograacion es importamnte seguir las convenciones de nomenclatura para que el codigo sea
legible y sostenible.Para esto existen algunas reglas y conveciones que debemos seguir para nombrar
los elementos en c++ y en nuetros proyectos.

1.- Los nombres pueden contener letras, numeros y guiones bajos.
2.- Los nombres deben comenzar con una letra o un guion bajo.
3.- Los nombres distinguen entre mayuscilas y minusculas < myVariable > y < myvariable > son
    diferentes.
4.- Los nombres no pueden ser palabras clave tales como < int >,< float >,< if > etc.

Ademas de estas reglas existen algunas convenciones de nomenclatura comunes que los desarrolladores
utlizan para que su codigo sea mas coherente y legible:

1.- camelCase: Las palabras se unen comenzando cada palabra despues de la primera con mayuscula
por ejemplo < totalAmount >,< camelCase > se utliza comunmente en nombres de variables y funciones.
2.- PascalCase: Similar a camelCase pero en este caso ambas palabras comienzan con letra mayuscula
por ejemplo < TotalAmount >, < MyClass > se utiliza comunmente para nombrar clases.
3.- snake_case: Las palabras se escriben en minusculas y se separan con guion bajo se utiliza
comunmente para nombres de archivos.
4.- Sea descriptivo y evite nombres demaciado cortos.
5.- Evite usar nombres de variables de una sola letra*/

// Ejemplos de buanas practicas:

int age = 30;
double totalPrice = 150.99; //camelCase.
int numberOfStudents = 25; //camelCase.
const int MAX_STUDENTS = 100 ; //SCREAMING_SNAKE_CASE.

//Ejemplos de malas practicas:

int a = 30; //Demaciado corto poco claro.
double TOTAL_PRICE = 150.99; //Las mayusculas no son para variables regulares.
int n = 25; // Demaciado corto poco claro.