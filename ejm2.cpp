#include <iostream>
#include <string>
#include <vector>
using namespace std;

class CAlumno
{
    private:
       string nombre;
       string apellido;
       int edad;
       string ID;
    public:
       //Constructor con parámetros
       CAlumno ( string pnombre, string papellido, int pedad, string pID )
       {
           nombre = pnombre;
           apellido = papellido;
           edad = pedad;
           ID = pID;
       }
       
       //Constructor sin parámetros
       CAlumno()
       {
           nombre = "";
           apellido = "";
           edad = 0;
           ID = "";
       }
       
       //Destructor
       ~CAlumno()
       {
           edad = 0;
       }
    
       //Métodos de Acceso
       string getNombre() { return nombre; }
       string getApellido() { return apellido; }
       int getEdad() { return edad; }
       string getID() { return ID; }
       
       //Métodos de modificación
       void setNombre(string value) { nombre = value; }
       void setApeliido(string value) { apellido = value; }
       void setEdad(int value) { edad = value; }
       void setID(string value) { ID = value; }
};

int main()
{
    CAlumno pepito ( "Pepe" , "Quevedo" , 65, "2");
    
    /*
    CAlumno pepito;
    pepito.setNombre ( "Pepe" );
    pepito.setApeliido ( "Quevedo ");
    pepito.setEdad (65);
    pepito.setID ("2");
    */
    
    cout << pepito.getNombre() <<" "<< pepito.getApellido() <<endl;
    
    return 0;
}