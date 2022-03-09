#include<iostream>
using namespace std;
class Persona{
	//atributos
	protected : string nombres,apellidos,curso;

	
	//metodos
	protected : 
	//constructor
				Persona(string nom,string ape,string cur){
					nombres=nom;
					apellidos=ape;
					curso=cur;
	
				}
	
	//metodos
	void mostrar();
	void agregar();
	void modificar();
	void eliminar();
};

