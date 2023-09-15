#include<iostream>
#include <string>
using namespace std;

class Persona{	
private:
        std::string nombre;
		int edad;
		static int id;
public:
Persona(const std::string nombre, int edad){
   	id++;
	this->nombre=nombre;
	this->edad=edad;
} 

void setNombre(std::string nombre){
	this->nombre=nombre;	
}
std::string getNombre(){
	return nombre;
}

void setEdad(int edad){
	this->edad=edad;
}
int getEdad(){
	return edad;
}
void toString(){
cout<<"Id:"<<id<<", Nombre: "<<nombre<<"Edad: "<<edad<<endl;	
}

};
int Persona::id=0;


int main() {
    Persona persona("Juan",30);    
    persona.toString();    
    Persona persona1("Juan",30);    
    persona1.toString();    
    return 0;
}
