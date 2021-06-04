#include <string>
using std::string;


class Hospedaje{
	public:
		Hospedaje(int, string);			
		void getHospedaje();						
	protected:
		int codigoCliente;
		string nombreCliente;
	
			
};
//Clase Hoteles
class Hoteles : public Hospedaje{
	public:
		Hoteles(int, string, string, int);	
		
		void descripcion();
	protected:
		string NombreHotel;
		int tiempoEstadia;
		
		
};

class Habitacion : public Hoteles{
	public:
		Habitacion(int, string, string, int,string, int);
		void getHabitacion();
		void CalcularCosto();
	protected:
		string tipoHabitacion;
		int precio;
		
};

//Clase Apartamentos
class Apartamentos:Hospedaje{
	protected:
		int tiempoRenta;
		string nombreApart;
		int precioRenta;
	public:
		Apartamentos(int,string,int,string,int);
		void calcularCosto();
		void getApartamento();
							
};

class AirBnB:Hospedaje{
	protected:
		int tiempoHospedaje;
		int cantidaPersonas;
		int precio;
	public:
		AirBnB(int,string,int,int,int);
		void calcularCosto();
		void getAirBnB();
};

