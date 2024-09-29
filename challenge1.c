#include <stdio.h>
/*Initialisation et Affichage
Écrivez un programme C qui initialise un tableau d'entiers avec des 
valeurs données et affiche ces valeurs. Par exemple, vous pouvez 
initialiser un tableau avec les valeurs [1, 2, 3, 4, 5] et afficher 
chaque valeur sur une nouvelle ligne.*/

int main(){

    int table[5] = {1,2,3,4,5};

    printf("les elements du tableau : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",table[i]);
    }
    
}