/*
Nombres:
        Luis Rodrigo Montoya Rangel
        Claudio Alberto Ibañez Garduño
Descripcion:
        Programa para agregar elementos, eliminar elementos, buscar elelentos, 
        eliminar Referencias, Eliminar ultimo elemnto, vaciar y mostrar una lista.
*/


#include "Lista.h"



int main()
{
    Lista l = Lista();
    l.AddInicio(4);
    l.AddInicio(5);
    l.AddInicio(6);
    l.AddInicio(7);
    l.Show();
    std::cout<<" "<<std::endl;
    
    l.RemoveFinal();
    l.Show();
    std::cout<<" "<<std::endl;
    
    
    
    l.AddInicio(24);
    l.Show();
    std::cout<<" "<<std::endl;
    
    l.BuscarElemento(673);
    //l.Show();
    std::cout<<" "<<std::endl;
    
    l.AddInicio(98323);
    l.Show();
  
    l.RemoveRef(98323);
    l.Show();
    std::cout<<"Hello World"<<std::endl;
    return 0;
}



