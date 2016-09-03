


#include "Lista.h"
/*
Constructor crea una lista
@params: NULL
@result: NULL
*/
Lista::Lista()
{
    this->H=NULL;
    this->T=NULL;
}
/*
Constructor crea una lista
@params: Dato
@result: NULL
*/
Lista::Lista(int Dato)
{
    Nodo * aux= new Nodo(Dato);
    this->H=aux;
    this->T=aux;
}

/*
Método que verifica si la lista esta vacìa
@params: NULL
@result: bool (True si la lista está vacía)
*/
bool Lista::ListaVacia()
{
    if (this->H == NULL && this->T == NULL)
        return true;
    return false;    
}

/*
Método para agregar al inicio un elemento
@params: Dato
@result: void
*/
void Lista::AddInicio(int Dato)
{
    Nodo* aux = new Nodo(Dato,this->H);
    if (ListaVacia())
    {
        this->T= aux;
    }
    this->H= aux;
}

/*
Método para mostrar la lista
@params: NULL
@result: Void
*/
void Lista::Show()
{
    Nodo* aux = this->H;
    while(aux!=NULL)
    {
        std::cout<<aux->getDato()<<std::endl;
        aux=aux->getSig();
    }
}

/*
Método que agrega elemento al final de la lista
@params: Dato
@result: Void
*/
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

/*
Método que Elimina primer elemento de la lista
@params: NULL
@result: int Dato
*/
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

/*
Método para eliminar ultimo elemento de la lista
@params: NULL
@result: int Dato
*/
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

/*
Método para eliminar todos los elementos de la lista
@params: NULL
@result: Void
*/
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

/*
Método para buscar elemento en la lista
@params: Dato
@result: Nodo donde se encuentra el Dato
*/
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

/*
Método para Remover un elemento de la lista
@params: Ref
@result: Void
*/
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





