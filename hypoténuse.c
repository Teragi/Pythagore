#include <stdio.h>
#include <math.h>

int main(void)

{
    float AB, BC, calcul;
    printf("Quelle est la longueur de AB ? \n"); //Première valeur
    scanf("%f", &AB); //scanf stock des données + pointeur &
    
    printf("Quelle est la longueur de BC ? \n"); 
    scanf("%f", &BC); 
    
    calcul = sqrt(pow(AB, 2) + pow(BC, 2)); //Théorème de Pythagore
    printf("La longueur de l'hypoténuse est de %.2f cm.\n", calcul); 
}
