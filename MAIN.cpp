#include "ESTUDIANTE.cpp"
#include<iostream>
using namespace std;
main(){
		string nom,ape,cur;
	int cod,n1,n2,n3,n4,var=1;
	float prom;
while(var=1){
	
	cout<<"\n------------------"<<endl;
	cout<<"Ingrese Codigo:";
	cin>>cod;
	cout<<"Ingrese Nombres:";
	cin>>nom;
	cout<<"Ingrese Apellidos:";
	cin>>ape;
	cout<<"Ingrese Curso:";
	cin>>cur;	
	cout<<"Ingrese Nota 1:";
	cin>>n1;	
	cout<<"Ingrese Nota 2:";
	cin>>n2;
	cout<<"Ingrese Nota 3:";
	cin>>n3;
	cout<<"Ingrese Nota 4:";
	cin>>n4;
	Estudiante obj = Estudiante(nom,ape,cur,cod,n1,n2,n3,n4,prom);
	obj.mostrar();
	cout<<"Desea continuar? [s(1)/n(0)]";cin>>var;
		if(var=0){
			exit(0);
		}

		}
	
}
