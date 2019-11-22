#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
using namespace std;

struct datos {
	int dato;
	datos *s;
}*p,*aux,*u;

void insertar (int dat);
void lista ();
int cont=0;
int var;
int main(){
	srand(time(0));

	char rep;
	int y;

	do{
		cout<<"dame el dato : ";
		cin>>y;
		//y=(rand()%100);
		insertar(y);
		cout<<"Quieres agregar otro dato a la la cola (s/n) : ";
		cont=cont+1;
		cin>>rep;
	}while(rep=='s'||rep=='S');
 	lista();
 	getch();
 	return 0;
}

void insertar (int dat){
	aux=new(datos);
	aux->dato=dat;
	if(u)
	{
		u->s=aux;
		aux->s=NULL;
		u=aux;
	}
	else
	{
		p=u=aux;
	}
	cout<<"\nEl numero "<<dat<<" se gurado correctamente\n"<<endl;
}

void lista(){
	cout<<"Los elementos de la cola son : \n";
	int i;
	if(cont==0){
		cout<<"\n No hay datos en la cola";
		return;
	}
	aux=p;
	for(int a=0; a<cont; a++){
		i++;
		cout<<"\n"<<aux->dato;
		aux=aux->s;

	}
}
