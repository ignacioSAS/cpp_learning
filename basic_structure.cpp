//-----Basic structure

/* En c++ la mayor parte del codigo ejecutable se escribe dentro de funciones, la funcion < main >
es el punto de entrada del programa c++, al ejecutar un programa el codigo dentro de main es lo
primero en ejecutarse partedel codigo como las declaraciones globales y las directivas del procesador
pueden aparecer fuera de las funciones */

// Ejemplo basico de estructura

#include <iostream> //Directiva del procesador para entrada y salida
int main(){ //Funcion principal
    std::cout <<"Este es un programa creado con C++"; //Declaracio de salida
    return 0; //Declarativa de devolucion (no necesaria pero representa una buena practica)
}

/*Directiva de procesador < #include <iostream> >: Esta linea se ejecuta antes de la e indica al compilador
que incluya la cabecera < iostream > lo que pemite que el programa acceda a las herramientas de entrada y
salida de datos.*/

/* La funcion < int main() {.....}: Esta funcion es un bloque de codigo que permite realizar una tarea la
palabra < int > antes de < main > indica que la funciobn devuelve un valor entero. Las llaves < { } > definen
el ambito de la funcion todo lo que se esbriba dentro pertenece a la funcion principal implicando que es un solo
bloque.*/

/* Prefijo espacio de nombres < std:: >: indica al compilador que busque < cout > dentro de el espacio de
nombres de la biblioteca estandar. Un espacio de nombre es una manera de agrupar nombres relacionados y
evitar conflictos. Al completar el codigo < std::cout > permite la salida de texto por consola*/
 /* Inntruccion de retorno < return 0 >: Este indica que el programa a finalizado correctamente, Ahunque
 no es algo que c++ exige de manera estricta el uso de esta es considerado una buena practica.*/

 