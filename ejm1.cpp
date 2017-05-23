#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Definición de clase
struct TAlumno
{
    //Atributos
    string nombre;
    string apellido;
    int edad;
    string ID;
    
    //Funciones
    void hablar()
    {
        cout<< "Mi nombre es " << nombre<< " "<< apellido <<endl;
    }
};

int main()
{
    // Inicializar y declarar
    int x = 0;
    
    int y;        //Declarar
    y = 10;       //Inicializar 
    
    //Inicializar y declarar
    TAlumno juan = { "Juan" , "Dañino" , 19 , "8476846351" };
   
    TAlumno jaimito;      //Declarar
    //Incializar
    jaimito.nombre = "Jaimito";
    jaimito.apellido = "Quevedo";
    jaimito.edad = 70;
    jaimito.ID = "1";
    
    juan.hablar();
    jaimito.hablar();
    
    return 0;
}