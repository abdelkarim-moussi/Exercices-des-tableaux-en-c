#include <stdio.h>

/* Rechercher un Élément
Écrivez un programme C qui recherche un élément spécifique dans un 
tableau d'entiers en utilisant une recherche linéaire. 
Le programme doit demander à l'utilisateur le nombre d'éléments, 
les éléments du tableau, et l'élément à rechercher, puis afficher 
si l'élément est présent ou non*/

int main(){

int taille,element;
//demande de saisi le nombre des elements du tableau
printf("donner le nombre des elements du tableau : \n");
scanf("%d",&taille);

int table[taille];

//la saisi des element du tableau
for (int i = 0; i < taille; i++)
{
    printf("saisi l'element %d \n",i+1);
    scanf("%d",&table[i]);
}
//demande de saisi de l'element a rechercher
printf("entrer le nombre entier a rechercher\n");
scanf("%d",&element);

//verifier si le tableau contient l'element saisi
for (int i = 0; i < taille; i++)
{
   if (element == table[i])
   {
    printf("l'element est present dans le tableau\n");
   }
}

}