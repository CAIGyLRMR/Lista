//
//  Nodo.cpp
//  ListaFinalHecha
//
//  Created by Claudio Ibáñez Garduño on 01/09/16.
//  Copyright (c) 2016 Claudio Ibáñez Garduño. All rights reserved.
//



#include "Nodo.h"

Nodo::Nodo(int Dato , Nodo* Sig)
{
    this->Dato = Dato;
    this->Sig = Sig;
}

Nodo::Nodo(int Dato)
{
    this->Dato = Dato;
    this->Sig = NULL;
}

void Nodo::setDato(int Dato)
{
    this->Dato = Dato;
}

void Nodo::setSig(Nodo* Sig)
{
    this->Sig = Sig;
}

int Nodo::getDato()
{
    return this->Dato;
}

Nodo* Nodo::getSig()
{
    return this->Sig;
}