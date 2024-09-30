#include <stdio.h>
/*Afficher les Éléments Paire
Écrivez un programme C qui affiche uniquement les éléments pairs 
d'un tableau d'entiers. Le programme doit demander le nombre d'éléments 
et les éléments du tableau.*/

int main(){

int taille;

printf("entrer le nombre des elements du tableau : ");
scanf("%d",&taille);
int table[taille];
for (int i = 0; i < taille; i++)
{
    printf("saisi l'element : %d\n",i+1);
    scanf("%d",&table[i]);
}
for (int i = 0; i < taille; i++)
{
    if (table[i] % 2 == 0)
    {
        printf("%d|",table[i]);
    }
    
}
printf("\n");


}