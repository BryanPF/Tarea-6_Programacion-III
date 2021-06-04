#include<iostream>
#include "Hospedaje.h"
using namespace std;

void menu(){
	cout<<"Opciones de hospedaje:"<<endl;
	cout<<"1. Hotel"<<endl;
	cout<<"2. Apartamento"<<endl;
	cout<<"3.AirBnB"<<endl;
}
Hospedaje::Hospedaje(int _codigoCliente, string _nombreCliente){
	codigoCliente = _codigoCliente;
	nombreCliente = _nombreCliente;
}

void Hospedaje::getHospedaje(){
	cout<<"Codigo Cliente: "<<codigoCliente<<endl;
	cout<<"Nombre Cliente: "<<nombreCliente<<endl;
} 
//Clase Hoteles
Hoteles::Hoteles(int _codigoCliente,string _nombreCliente, string _NombreHotel, int _tiempoEstadia):Hospedaje(_codigoCliente, _nombreCliente){
		NombreHotel = _NombreHotel; 
		tiempoEstadia = _tiempoEstadia;	
}
void Hoteles::descripcion(){
	getHospedaje();
	cout<<"Nombre Hotel: "<<NombreHotel<<endl;
	cout<<"Tiempo estadia: "<<tiempoEstadia<<" noches."<<endl;
}

Habitacion::Habitacion(int _codigoCliente,string _nombreCliente, string _NombreHotel, int _tiempoEstadia,string _tipoHabit, int _precio):Hoteles(_codigoCliente,_nombreCliente,_NombreHotel, _tiempoEstadia){
		tipoHabitacion = _tipoHabit;
		precio = _precio; 
}

void Habitacion::getHabitacion(){
	descripcion();
	cout<<"Tipo de Habitacion: "<<tipoHabitacion<<endl;
	cout<<"Precio por noche: "<<precio<<" lps."<<endl;
	
}

void Habitacion::CalcularCosto(){
	int total = precio * tiempoEstadia;
	cout<<"Total a pagar: "<<total<<" lps."<<endl;;

} 

//Clase Apartamentos
Apartamentos::Apartamentos(int _codigoCliente, string _nombreCliente, int _tiempoRenta, string _nombreApart,int _precioRenta):Hospedaje(_codigoCliente, _nombreCliente){
	 tiempoRenta = _tiempoRenta;
	 nombreApart = _nombreApart;
	 precioRenta = _precioRenta;
}

void Apartamentos::getApartamento(){
	getHospedaje();
	cout<<"Nombre de Apartamento: "<<nombreApart<<endl;
	cout<<"Tiempo de Renta en meses: "<<tiempoRenta<<endl;
	cout<<"Precio de Renta x mes: "<<precioRenta<<" Lps."<<endl;
}
void Apartamentos::calcularCosto(){
	int totalCosto  = precioRenta * tiempoRenta;
	cout<<"Total a Pagar: "<<totalCosto<<" Lps."<<endl;
}
	
//Clase AirBnB

AirBnB::AirBnB(int _codigoCliente, string _nombreCliente,int _tiempoHospedaje, int _cantidaPersonas, int _precio):Hospedaje(_codigoCliente, _nombreCliente){
	tiempoHospedaje = _tiempoHospedaje;
	cantidaPersonas = _cantidaPersonas;
	precio = _precio;
}

void AirBnB::getAirBnB(){
		getHospedaje();
		cout<<"Tempo de Hospedaje x noches: "<<tiempoHospedaje<<endl;
		cout<<"Cantidad de personas: "<<cantidaPersonas<<endl;
		cout<<"Precio por noche: "<<precio<<endl;
}

void AirBnB::calcularCosto(){
	int totalCostAirBnB = tiempoHospedaje * precio;
	cout<<"Total a Pagar: "<<totalCostAirBnB<<endl;
}
	
int main(){
	
		
		cout<<"       --------Reserva de Hotel-----------"<<endl;
		cout<<endl;
		Habitacion habit1(23,"Bryan Paz","La quinta",2,"Premium",3500);
		habit1.getHabitacion();
		cout<<"================================"<<endl;
		habit1.CalcularCosto();	
		
		cout<<endl;
		cout<<"       --------Reserva de Apartamento-----------"<<endl;
		cout<<endl;
		Apartamentos apartamento1(7889,"Kevin Ivan",3,"Confort in",3500);
		apartamento1.getApartamento();
		cout<<"================================"<<endl;
		apartamento1.calcularCosto();
		
		cout<<endl;
		cout<<"       --------Reserva de AirBnB-----------"<<endl;
		cout<<endl;
		AirBnB air1(9665,"Jose Calderon",3,4,1350);
		air1.getAirBnB();
		cout<<"================================"<<endl;
		air1.calcularCosto();
	
	cout<<"\nGracias por reservar!!"<<endl;
}
