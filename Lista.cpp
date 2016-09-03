//
//  Lista.cpp
//  ListaFinalHecha
//
//  Created by Claudio Ibáñez Garduño on 01/09/16.
//  Copyright (c) 2016 Claudio Ibáñez Garduño. All rights reserved.
//


#include "Lista.h"

Lista::Lista()
{
    this->H=NULL;
    this->T=NULL;
}

Lista::Lista(int Dato)
{
    Nodo * aux= new Nodo(Dato);
    this->H=aux;
    this->T=aux;
    /*std::cout<<H->getDato()<<std::endl;
     std::cout<<H->getSig()<<std::endl;
     std::cout<<T->getDato()<<std::endl;
     std::cout<<T->getSig()<<std::endl;*/
}

bool Lista::ListaVacia()
{
    if (this->H == NULL && this->T == NULL)
        return true;
    return false;
}

void Lista::AddInicio(int Dato)
{
    Nodo* aux = new Nodo(Dato,this->H);
    if (ListaVacia())
    {
        this->T= aux;
    }
    this->H= aux;
    /*	std::cout<<H->getDato()<<std::endl;
     std::cout<<H->getSig()<<std::endl;
     std::cout<<T->getDato()<<std::endl;
     std::cout<<T->getSig()<<std::endl;*/
}

void Lista::Show()
{
    Nodo* aux = this->H;
    while(aux!=NULL)
    {
        std::cout<<aux->getDato()<<std::endl;
        aux=aux->getSig();
    }
}

void Lista::AddFinal(int Dato)
{
    Nodo* aux = new Nodo(Dato);
    if (ListaVacia())
    {
        this->H=aux;
        this->T= aux;
    }
    aux=this->T->getSig();
    this->T=aux;
}

int Lista::RemoveInicio()
{
    if(!ListaVacia())
    {
        int Dato=this->H->getDato();
        if(this->H==this->T)
        {
            this->H=NULL;
            this->T=NULL;
            return Dato;
        }
        Nodo* aux=this->H;
        aux=this->H->getSig();
        this->H=aux;
        return Dato;
    }
    std::cout<<"La lista est· vacÌa"<<std::endl;
    return NULL;
    
}

int Lista::RemoveFinal()
{
    if(!ListaVacia())
    {
        int Dato=this->T->getDato();
        if(this->H==this->T)
        {
            this->H=NULL;
            this->T=NULL;
            return Dato;
        }
        Nodo* aux=this->H;
        while(aux!=NULL)
        {
            if(aux->getSig()==this->T)
            {
                this->T=aux;
                aux->setSig(NULL);
                return Dato;
            }
            aux=aux->getSig();	
        }
    }
    std::cout<<"La lista está vacía"<<std::endl;
    return NULL;
}

void Lista::VaciarLista()
{
    Nodo* aux=this->H;
    while(aux->getSig()!=NULL)
    {
        //std::cout<<aux->getDato()<<std::endl;
        aux=aux->getSig();
    }
    this->H=NULL;
    this->T=NULL;
    aux=NULL;
}
Nodo* Lista::BuscarElemento(int Dato)
{
    Nodo* aux=this->H;
    if(ListaVacia())
    {
        std::cout<<"La lista est· vacÌa"<<std::endl;
        return NULL;
    }
    int x=1;
    while(aux!=NULL)
    {
        if (aux->getDato()==Dato)
        {
            std::cout<<"Se encuentra en la posicion: "<<x<<std::endl;
        
            return aux;
        }
        x++;
        aux=aux->getSig();
    }
    std::cout<<"El elemento no xiste"<<std::endl;
    return NULL;
}

/*int Lista::AddRef(int Dato,int Ref)
{
    Nodo* pos=new Nodo(Ref);
    pos=BuscarElemento(Ref);
    pos->setDato(Dato)=Dato;
    return 0;
    
}*/

void Lista::RemoveRef(int Ref)
{
    
    Nodo* aux=this->H;
    if(ListaVacia())
    {
        std::cout<<"La lista está vacía"<<std::endl;
        return;
    }
    while(aux!=NULL)
    {
        if(aux->getDato()==Ref)
        {
            if(aux==this->H)
            {
                this->H=aux->getSig();
                aux->setSig(NULL);
                return;
            }
            else if(aux==this->T)
            {
                Nodo* temp=this->H;
                while(temp!=NULL)
                {
                    
                    if(temp->getSig()==this->T)
                    {
                        this->T=temp;
                        temp->setSig(NULL);
                        return;
                    }
                    aux=aux->getSig();
                }
            }
            else
            {
                Nodo* temp=aux->getSig();
                while(temp->getDato()!=Ref)
                {
                    aux=aux->getSig();
                    temp=aux->getSig();
                }
                aux=temp->getSig();
                temp->setSig(NULL);
            }
        }
        aux=aux->getSig();
    }
    std::cout<<"El elemento buscado no existe"<<std::endl;
    //return NULL;
}





