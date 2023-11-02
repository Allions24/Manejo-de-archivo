#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
void main(void) 
{     
    int i, j, n, posAnterior = 0, numeroActual = 0;     
    srand(time(NULL));     
    printf("Número de elementos a ordenar\n");     
    scanf("%d", &n);     
    int lista[n];     
    printf("Lista sin ordenar\n");     
    for (i = 0; i < n; i++) 
    {         
        lista[i] = rand() % (30 + 1 - 1) + 1;         
        printf(" %d ", lista[i]);     
        
    }     
    printf("\n");     
    int elementoMasPequeno = lista[0];     
    int elementoMasGrande = lista[0];     
    int suma = 0;     
    int moda = 0;     
    int modaFrecuencia = 0;     
    for (i = 0; i < n; i++) 
    {         
        numeroActual = lista[i];         
        posAnterior = i - 1;         
        while (posAnterior >= 0 && lista[posAnterior] > numeroActual) 
        {             
            lista[posAnterior + 1] = lista[posAnterior];             
            posAnterior--;         
            
        }         
        lista[posAnterior + 1] = numeroActual;         
        // Actualizar el elemento más pequeño y más grande         
        if (numeroActual < elementoMasPequeno) 
        {             
            elementoMasPequeno = numeroActual;         
            
        }         
        if (numeroActual > elementoMasGrande) 
        {             
            elementoMasGrande = numeroActual;         
            
        }         
        // Calcular la suma para calcular la media         
        suma += numeroActual;         
        // Calcular la moda         
        int frecuencia = 1;         
        for (j = i + 1; j < n; j++) 
        {             
            if (lista[j] == numeroActual) 
            {                 
                frecuencia++;             
                
            }         
            
        }         
        if (frecuencia > modaFrecuencia) 
        {             
            modaFrecuencia = frecuencia;             
            moda = numeroActual;         
            
        }     
        
    }     
    // Calcular la media     
    float media = (float)suma / n;     
    // Calcular la mediana     
    float mediana;     
    if (n % 2 == 0) 
    {         
        mediana = (float)(lista[n / 2 - 1] + lista[n / 2]) / 2;     
        
    } 
    else 
    {         
        mediana = lista[n / 2];     
        
    }     
    printf("Lista ordenada\n");     
    for (i = 0; i < n; i++) 
    {         
        printf(" %d ", lista[i]);     
        
    }     
    printf("\n");     
    printf("Elemento más pequeño: %d\n", elementoMasPequeno);     
    printf("Elemento más grande: %d\n", elementoMasGrande);     
    printf("Media: %.2f\n", media);     
    printf("Mediana: %.2f\n", mediana);     
    printf("Moda: %d\n", moda);     
    // Crear un histograma     
    printf("Histograma:\n");     
    for (i = elementoMasPequeno; i <= elementoMasGrande; i++) 
    {         
        int frecuencia = 0;         
        for (j = 0; j < n; j++) 
        {             
            if (lista[j] == i) 
            {                 
                frecuencia++;             
                
            }         
        }
    float frecuenciaNormalizada = (float)frecuencia / n;         
    printf("%2d: ", i);         
    for (j = 0; j < frecuenciaNormalizada * 40; j++) 
    {             
        printf("*");         
        
    }         
    printf("\n");    
    
    } 
}
