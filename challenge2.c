#include <stdio.h>

/*Saisie et Affichage des Éléments
Écrivez un programme C qui demande à l'utilisateur le nombre 
d'éléments d'un tableau, puis demande à l'utilisateur de saisir 
ces éléments. Affichez ensuite les éléments du tableau.*/

int main(){

int taille_tab;
//demande de saisir le nombre des elements du tableau
printf("Entrer le nombre des element du tableau : ");
scanf("%d",&taille_tab);

int table[taille_tab];
//saisi des elements du tableau
for (int i = 0; i < taille_tab; i++){
    printf("saisi l'element %d \n",i+1);
    scanf("%d",&table[i]);
}
//affichage des elements du tableau
for (int i = 0; i < taille_tab; i++){
    printf("%d|",table[i]);
}
printf("\n");


}