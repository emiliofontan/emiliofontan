/* declaramos 3 arrays :

notas tamara, notas marcos y notas diego

cada array tendra 5 notas 

1. pedimoslas por pantalla y las mostramos 
2. mostrar promedio de cada alumno
3. mostrar promedio de todos os alumnos

el promedio es "suma"

*/

#include <stdio.h> 
int main() 

{ 
    
int i; 
float notastamara [5];
float notasmarcos[5];
float notasdiego[5];
float sumat, sumam, sumad, promediot, promediom, promediod, sumatotal, promediototal;

for (i=0; i<5; i++)
{printf( "\ndime 5 notas de tamara  %i  ",i);
scanf("%f",&notastamara[i]);
sumat=sumat+notastamara[i];       
}

for (i=0; i<5; i++)
{printf( "\ndime 5 notas de marcos %i  ",i);
scanf("%f",&notasmarcos[i]);
sumam=sumam+notasmarcos[i];   
}

for (i=0; i<5; i++)
{printf( "\ndime 5 notas de diego  %i  ",i);
scanf("%f",&notasdiego[i]);
sumad=sumad+notasdiego[i]; 
}

promediot=(sumat/5);
printf("\nPromedio de tamara %2.f ",promediot);
promediom=(sumam/5);
printf("\nPromedio de marcos %2.f ",promediom);
promediod=(sumad/5);
printf("\nPromedio de diego %2.f ",promediod);

for (i=0; i<5; i++)
{
sumatotal=sumatotal+notastamara[i]+notasdiego[i]+notasmarcos[i];
}

promediototal=(sumatotal/15);
printf("\nPromedio de todos %2.f ",promediototal);
    

}

