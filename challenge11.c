#include <stdio.h>

/*Remplacer un Élément
Écrivez un programme C qui remplace toutes les occurrences d'une valeur
spécifique dans un tableau d'entiers par une nouvelle valeur. 
Le programme doit demander à l'utilisateur le nombre d'éléments, 
les éléments du tableau, la valeur à remplacer, et la nouvelle valeur.*/

int main(){

int taille,ancien,nouveau,i;
//demande de saisi le nombre des elements du tableau
printf("donner le nombre des elements du tableau : \n");
scanf("%d",&taille);

int table[taille];

//la saisi des element du tableau
for (i = 0; i < taille; i++)
{
    printf("saisi l'element %d \n",i+1);
    scanf("%d",&table[i]);
}
//demande l'element a remplacer
printf("saisi l'element a remplacer :\n");
scanf("%d",&ancien);
//saisi le nouveau element
printf("saisi le nouveau element :\n");
scanf("%d",&nouveau);
//rechercher l'element a remplacer
for (i = 0; i < taille; i++)
{
    if (table[i] == ancien)
    {
        table[i] = nouveau;
    }
    
}
//affichage du tableau
for (i = 0; i < taille; i++)
{
    printf("%d|",table[i]);
}
printf("\n");

}