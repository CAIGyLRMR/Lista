//
//  Lista.h
//  ListaFinalHecha
//
//  Created by Claudio Ibáñez Garduño on 01/09/16.
//  Copyright (c) 2016 Claudio Ibáñez Garduño. All rights reserved.
//

//#ifndef __ListaFinalHecha__Lista__
//#define __ListaFinalHecha__Lista__


#include "Nodo.h"

class Lista
{
public:
    Nodo* H;
    Nodo* T;
    Lista();
    Lista(int Dato);
    bool ListaVacia();
    void AddInicio(int Dato);
    void AddFinal(int Dato);
    int AddRef(int Dato, int Ref);
    int RemoveInicio();
    int RemoveFinal();
    void RemoveRef(int Ref);
    void VaciarLista();
    Nodo* BuscarElemento(int Dato);
    void Show();
};
