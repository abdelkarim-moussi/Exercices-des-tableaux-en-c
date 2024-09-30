#include <stdio.h>

/* Fusion de Deux Tableaux
Écrivez un programme C qui fusionne deux tableaux d'entiers en un 
seul tableau. Le programme doit demander à l'utilisateur le nombre 
d'éléments pour chaque tableau, puis les éléments des deux tableaux, 
et afficher le tableau fusionné*/

int main(){
int taille1,taille2;
//saisi les elements du premier tableau
printf("entrer le nombre des elements du tableau 1 : ");
scanf("%d",&taille1);
int table1[taille1];
for (int i = 0; i < taille1; i++)
{
    printf("saisi l'element : %d du tableau 1\n",i+1);
    scanf("%d",&table1[i]);
}
//saisi les elements du deuxieme tableau
printf("entrer le nombre des elements du tableau 2 : ");
scanf("%d",&taille2);
int table2[taille2];
for (int i = 0; i < taille2; i++)
{
    printf("saisi l'element : %d du tableau 1\n",i+1);
    scanf("%d",&table2[i]);
}

int t_totale = taille1 + taille2;
int tableFusionner[t_totale];

for (int i = 0; i < taille1; i++)
{
    for (int j = taille1; j < t_totale; j++){

    tableFusionner[i] = table1[i];
    tableFusionner[j] = table2[j-taille1];

    }
}

printf("\n");
for (int i = 0; i < t_totale; i++)
{
    printf("%d|",tableFusionner[i]);
}
printf("\n");

}