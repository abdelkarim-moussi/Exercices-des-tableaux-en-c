#include <stdio.h>
/*Copie d'un Tableau
Écrivez un programme C qui copie les éléments d'un tableau d'entiers 
dans un autre tableau. Affichez les éléments du tableau original et 
du tableau copié pour vérifier que la copie est correcte.*/

int main(){

int taille;
//demande de saisi la taille
printf("donner le nombre des elements du tableau : \n");
scanf("%d",&taille);

int originalTab[taille];
int copiedTab[taille];
//la saisi des element du tableau
for (int i = 0; i < taille; i++)
{
    printf("saisi l'element %d \n",i+1);
    scanf("%d",&originalTab[i]);
}
//copier les element du tableau original au tableau cpie
for (int i = 0; i < taille; i++)
{
    copiedTab[i] = originalTab[i];
}
//affichage des elements des deux tableau

printf("les elements du tableau original : \n");
for (int i = 0; i < taille; i++)
{
    printf("%d|",originalTab[i]);

}
printf("\n");
printf("les elements du tableau copie : \n");
for (int i = 0; i < taille; i++)
{
    printf("%d|",originalTab[i]);

}

}