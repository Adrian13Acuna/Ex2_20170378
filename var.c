#include <stdio.h>

void potenciacuadrado(int* nro);

int main(void){
    
    /*int notas_curso [5];

    notas_curso[0]=42;
    notas_curso[1]=23;
    notas_curso[2]=34;
    notas_curso[3]=45;
    notas_curso[4]=56;

    int longitud_arreglo = sizeof(notas_curso);
    int longitud_elemento = sizeof(notas_curso[2]);

    int longitud_real = longitud_arreglo/longitud_elemento;

    printf(" el arreglo notas_curso tiene %d elementos",longitud_real);
    int suma_total =0;
    int j=0;
    int promedio_arreglo = 0; 

    while(j<longitud_real){
        suma_total = suma_total + notas_curso[j];
        j+=1;

    }
    printf("\n");
    printf("la suma total de los elemntos del arreglo es %d",suma_total);
    printf("\n");
    printf("El promedio de los elementos del arreglo es %d",suma_total/longitud_real);
    */
   int n = 50;
   int *p = &n;
   printf("El valor de n es %d", n);
   printf("\n");
   printf("El valor de la dirección de n es %p",p);
   printf("\n");
   printf("El valor de n es %d",*p);
   potenciacuadrado(&n);
   printf("\n");
   printf("El valor de n es %d",*p);
   
}

void potenciacuadrado(int* nro){
    *nro = *nro * *nro;
}