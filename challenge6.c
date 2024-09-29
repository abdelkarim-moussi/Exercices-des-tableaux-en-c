#include <stdio.h>
/*Multiplication des Éléments
Écrivez un programme C qui multiplie chaque élément d'un tableau 
d'entiers par un facteur donné et affiche le tableau résultant. 
Le programme doit demander le nombre d'éléments, les éléments du 
tableau, et le facteur de multiplication*/

int main(){

    int taille_tab;
    //demande de saisi la taille
    printf("saisi le nombre des elements : ");
    scanf("%d",&taille_tab);
    int tabEntier[taille_tab];
    int tabFac[taille_tab];
    int tabMulti[taille_tab];
    //saisi des elements du tableau
    for (int i = 0; i < taille_tab; i++)
    {
        printf("Entrer l'element %d :\n",i+1);
        scanf("%d",&tabEntier[i]);
        printf("Entrer le facteur de l'element : %d\n",i+1);
        scanf("%d",&tabFac[i]);
        
        tabMulti[i] = tabEntier[i] * tabFac[i];

    }
    //affichage du tableau de miltiplication
    for (int i = 0; i < taille_tab; i++)
    {
        printf("%d|",tabMulti[i]);
    }
    printf("\n");
    
    
}