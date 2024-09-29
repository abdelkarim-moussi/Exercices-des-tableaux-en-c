#include <stdio.h>
 /*Tableau en Ordre Croissant
Écrivez un programme C qui demande à l'utilisateur de saisir un 
tableau d'entiers, puis affiche le tableau trié en ordre croissant 
sans utiliser de fonction de tri prédéfinie*/

int main(){

    int Temp;
    int t_tab;
    //demande de saisi la taille
    printf("saisie le nombre des elements du tableau : \n");
    scanf("%d",&t_tab);
    int table[t_tab];
    //la saisi des element du tableau
    for (int i = 0; i < t_tab; i++)
    {
        printf("saisie l'element %d : ",i+1);
        scanf("%d",&table[i]);
    }
    //le tri du tableau en ordre coissaant avec la boucle for
    for (int i = 0; i < t_tab-1; i++)
    {
        for (int j = i+1; j < t_tab; j++)
        {
            if (table[i] > table[j])
            {
                 Temp = table[i];
                 table[i] = table[j];
                 table[j] = Temp;
            }
            
        }
        
    }

    //affichage
    printf("les element du tabeau tri en ordre croissant : \n");
    for (int i = 0; i < t_tab; i++)
    {
        printf("%d|",table[i]);
    }
    printf("\n");

}