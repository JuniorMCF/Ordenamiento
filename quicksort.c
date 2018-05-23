#include<stdio.h>
#include<stdlib.h>
//estructura de un nodo
typedef struct nodo
{
        int elemento;
        struct nodo* siguiente;
}nodo;

//estructura de una lista
typedef struct lista
{
        nodo* inicio;
        nodo* final;
}lista;

//funcion QuickSort
lista* quickSort(lista *L,int first,int last)
{
//se definen los indices i,j  a partir de el primer y ultimo indice enviado en la recursion
int i = first;
int j = last;
pivote = (L[i]+L[j])/2;// en este caso elegimos como pivote el elemento intermedio de la sublista

//Mientras que el indice "i" no sea mayor que el indice "j"
        while(i<j)
        {
                //buscamos las posiciones de "i" y "j" en las que los elementos por la izquierda (i)
                //y por la derecha (j) sean:  "mayor" y "menor" que el pivote respectivamente
                // una vez encontrado estos elementos se procede al intercambio

                while(L[i]<pivote)//busco la posicion de un elemento que sea "mayor" que el pivote y se encuentre a su izquierda
                        i+=1;
                }
                while(L[j]>pivote)//busco la posicion de un elemento que sea "menor" que el pivote y se encuentre a su derecha
                        j-=1;
                }

                //nos percatamos de que "i" y "j" no se hayan cruzado para hacer el intercambio, esto es:
                if(i<=j)
                {
                        //intercambiamos los valores de la lista
                        x = L[j];
                        L[j] = L[i];
                        L[i] = x;
                        //incrementamos i y j para seguir con la recursion
                        i+=1;
                        j-=1;
                }
         }
//Seguimos con la recurion sobre la lista
         //si first es menor que j mantenemos la recursividad
         if(first < j)
                L = quickSort(L, first, j);
         //si last es mayor que i mantenemos la recursividad
         if(last > i)
                L = quickSort(L, i, last);

return L;
}

int main()
{

}
