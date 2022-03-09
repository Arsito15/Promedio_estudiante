#include "PERS.cpp"
#include<iostream>
using namespace std;
class Estudiante : Persona{
	//atributos
	private : int codigo,num1,num2,num3,num4;
	private : float promedio;
	//constructor
	public : 
	Estudiante(string nom,string ape,string cur,int cod,int n1,int n2,int n3,int n4,float prom) : Persona(nom,ape,cur){
		
			codigo=cod;	
			num1=n1;			
			num2=n2;
			num3=n3;			
			num4=n4;
			promedio=prom;
	}
	
		//metodos get y set
		//set(modificar )
		void setCodigo(int cod){codigo=cod;}
		void setNombres(string nom){nombres=nom;}
		void setApellidos(string ape){apellidos=ape;}
		void setCurso(string cur){curso=cur;}
		void setnum1(int n1){num1=n1;}
		void setnum2(int n2){num2=n2;}
		void setnum3(int n3){num3=n3;}
		void setnum4(int n4){num4=n4;}				

	
	//set(mostrar )
		int getCodigo(){return codigo;}
		string getNombres(){return nombres;}
		string getApellidos(){return apellidos;}
		string getCurso(){return curso;}
		int getNum1(){return num1;}
		int getNum2(){return num2;}
		int getNum3(){return num3;}
		int getNum4(){return num4;}
	
	
	
	
	
		void mostrar(){
			cout<<"_______________"<<endl;
			cout<<"Codigo:"<<codigo<<endl;
			cout<<"Nombres:"<<nombres<<endl;
			cout<<"Apellidos:"<<apellidos<<endl;
			cout<<"Curso:"<<curso<<endl;
			cout<<"Nota1:"<<num1<<endl;
			cout<<"Nota2:"<<num2<<endl;
			cout<<"Nota3:"<<num3<<endl;			
			cout<<"Nota4:"<<num4<<endl;						
			promedio=(num1+num2+num3+num4)/4;
			cout<<"El promedio es: "<<promedio<<endl;
			if(promedio>=60){
				cout<<"El estudiante aprobo"<<endl;
			}else{
				cout<<"El estudiante reprobo"<<endl;
			}
		}	
	
};
