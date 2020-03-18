#ifndef Usuario_H
#define Usuario_H
#include <string>
#define MAX_VIAJES 100

#include "../dtTypes/DtFecha.h"
#include "Viaje.h"

using namespace std;

class Usuario{
  private:
    string cedula;
    string nombre;
    DtFecha fechaIngreso;
    Viaje* viajes[MAX_VIAJES];
    int topeV;

  public:
    Usuario();
    Usuario(string,string,DtFecha);
    ~Usuario();//destrctor
    void setUsuNombre(string);
    void setUsuCedula(string);
    void setUsuFechaIngreso(DtFecha);
    string getUsuNombre();
    string getUsuCedula();
    string getUsuFechaIngreso();
    void agregarViaje(Viaje*);





};




#endif
