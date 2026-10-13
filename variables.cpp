/* Las variables son contenedores que almacenan datos,se utilizan para guardar, manipular y mostrar
informacion dentro de un programa.
Cada variable tiene un nombre unico y un valor que puede ser de diferente tipo. C++ cuenta con varios tipos
de datos integrados que definen el tipo de valor que puede contener una variable.
Trabajar con variables inplica 2 pasos.
1.- Declaracion: Indicarle al ordenador que la variable existe.
    int age
2.- Inicializacion: Asignarle un valor a la variable
    age = 30: 
    
En c++ el valor tipo < int > se utiliza para representar valores tipo entero es decir numeros sin  uso de
punto desimal por ejemplo.*/

int age = 30;
int temperature = -5;
int cont = 100;

/* Cuando declaras variables en c++ necesitas especificar el tipo de variables antes del nombre, una vez
declarodo el topo de esta solo puede contener valores de este tipo, es decir si declaras una variable tipo
< int > esta no podra almacenar texto */

/* Actualemte existen 2 maneras de incializar una variable la inicializacion por llaves y la inicializacion
por constructor */

int num {0};//inicializacion por llaves
int num (0);//inicialozacion por constructor

/* c++ tambien proporciona la palabra clabe < auto >, que permite al compilador deducir automaticamente
el tipo de una variable apartir del valor asignado. */

auto score = 10; //deducido como int
auto price = 9.99; //deducido como flotante(doble)

