#include <stdio.h>
/*Trouver le Minimum
Écrivez un programme C qui trouve et affiche le plus petit 
élément dans un tableau d'entiers. Le programme doit demander 
le nombre d'éléments et les éléments du tableau*/

int main(){

    int Min;
    int taille_tab;
    //demande de saisir le nombre des elements du tableau
    printf("Entrer le nombre des element du tableau : ");
    scanf("%d",&taille_tab);
    int table[taille_tab];
     
    //la boucle for pour determiner le minimum
    for (int i = 0; i < taille_tab; i++)
    {   Min = table[0];
        printf("saisi l'element %d\n",i+1);
        scanf("%d",&table[i]);
        if (table[i] < Min)
        {
            Min = table[i];
        }
        
    }
    //affichage de minimum
    printf("le minimum des nombres saisi est Min = %d\n",Min);
    
}