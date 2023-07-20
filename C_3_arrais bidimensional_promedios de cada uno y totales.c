/******************************************************************************

pide notas y halla media de uno  y de todos

*******************************************************************************/
#include <stdio.h>

int main()

{
float notasP[5][6];
float TotalJ, TotalD, TotalH, TotalR;
float promedioJ, promedioR, promedioD, promedioH;
float promediototal;
int i;

    
for (i=1;i<=5;i++)
    { printf("\ndime a nota de javi n %i\n",i);
    scanf("%f",&notasP[1][i]);
    TotalJ=TotalJ+notasP[1][i];
    }

for (i=1;i<=5;i++)   
    { printf("\ndime a nota de rober n %i\n",i);
    scanf("%f",&notasP[2][i]);
    TotalR=TotalR+notasP[2][i];  
    }

for (i=1;i<=5;i++)    
    { printf("\ndime a nota de diego n %i\n",i);
    scanf("%f",&notasP[3][i]);
    TotalD=TotalD+notasP[3][i];
    }
    
for (i=1;i<=5;i++)
    { printf("\ndime a nota de Hugo n %i\n",i);
    scanf("%f",&notasP[4][i]);
    TotalH=TotalH+notasP[4][i];        
    }    

promedioJ=(TotalJ/5);
printf("\nPromedio de javi %.2f ",promedioJ);
promedioR=(TotalR/5);
printf("\nPromedio de rober %.2f ",promedioR);
promedioD=(TotalD/5);
printf("\nPromedio de diego %.2f ",promedioD);
promedioH=(TotalH/5);
printf("\nPromedio de hugo %.2f ",promedioH);

promediototal=((promedioJ+promedioD+promedioR+promedioH)/4);
printf("\nPromedio de todos %.2f ",promediototal);


}
