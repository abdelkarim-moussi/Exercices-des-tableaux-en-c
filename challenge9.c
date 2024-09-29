#include <stdio.h>
 /*Inversion d'un Tableau
Écrivez un programme C qui inverse les éléments d'un tableau d'entiers.
Par exemple, si le tableau est [1, 2, 3, 4, 5], il doit devenir 
[5, 4, 3, 2, 1]. Affichez le tableau inversé.*/

int main(){
int Temp;
int taille;
//demande de saisi la taille
printf("donner le nombre des elements du tableau : \n");
scanf("%d",&taille);

int originalTab[taille];
int TabInverse[taille];
//la saisi des element du tableau
for (int i = 0; i < taille; i++)
{
    printf("saisi l'element %d \n",i+1);
    scanf("%d",&originalTab[i]);
}
//inversement du tableau
for (int i = taille-1; i >= 0; i--)
{
        TabInverse[taille-i-1] = originalTab[i];
    
}
//affichage du tableau original
printf("les elements du tableau original : \n");
for (int i = 0; i < taille; i++)
{
    printf("%d|",originalTab[i]);
}
printf("\n");
//affichage du tableau inverse
printf("les elements du tableau inverse : \n");
for (int i = 0; i < taille; i++)
{
    printf("%d|",TabInverse[i]);
}




}