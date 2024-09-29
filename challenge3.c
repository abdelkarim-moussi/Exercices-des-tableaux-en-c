#include <stdio.h>

/*Somme des Éléments
Écrivez un programme C qui calcule et affiche la somme des éléments 
d'un tableau d'entiers. Le programme doit demander le nombre d'éléments, 
puis les éléments du tableau, et afficher la somme totale.*/

int main(){
int somme = 0;
int taille_tab;
//demande de saisir le nombre des elements du tableau
printf("Entrer le nombre des element du tableau : ");
scanf("%d",&taille_tab);

int table[taille_tab];
//la boucle for pour calculer la somme
for (int i = 0; i < taille_tab; i++){
    printf("saisi l'element %d \n",i+1);
    scanf("%d",&table[i]);
    somme += table[i];
}
//affichage de la somme
printf("somme = %d\n",somme);

}