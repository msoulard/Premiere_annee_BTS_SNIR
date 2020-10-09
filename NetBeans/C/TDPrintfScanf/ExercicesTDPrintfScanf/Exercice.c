#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    /*int v1;
    short int v2;
    long int v3;
    
    unsigned int v4;
    unsigned short int v5;
    unsigned long int v6;  
    
    float r1;
    double r2;
    
    char c1;
    unsigned char c2;
    
    printf("Donnez une valeur entière pour v1 \n");
    scanf("%d",&v1)
    printf("v1 = %d \n",v1);
    printf("Donnez une valeur entière pour v2 \n");
    scanf("%hd",&v2)
    printf("v2 = %hd \n",v2); 
    printf("Donnez une valeur entière pour v3 \n");
    scanf("%ld",&v3)
    printf("v3 = %ld \n",v3);
    
    printf("Donnez une valeur entière pour v4 \n");
    scanf("%d",&v4)
    printf("v4 = %d \n",v4);
    printf("Donnez une valeur entière pour v5 \n");
    scanf("%hd",&v5)
    printf("v5 = %hd \n",v5);
    printf("Donnez une valeur entière pour v6 \n");
    scanf("%ld",&v6)
    printf("v6 = %ld \n",v6);
    
    printf("Donnez un nombre pour r1 \n");
    scanf("%f",&r1);
    printf("r1 = %f \n",r1);
    printf("Donnez un nombre pour r2 \n");
    scanf("%f",&r2);
    printf("r2 = %f \n",r2);
    
    printf("Donnez un caractère pour c1 \n");
    scanf("%c",&c1);
    printf("c1 = %c \n",c1);
    printf("Donnez un caractère pour c2 \n");
    scanf("%c",&c2);
    printf("c2 = %c \n",c2);*/
    
    /*float dividende;
    float diviseur;
    float resultat;
     
    printf("Donnez la valeur du nombre à diviser ");
    scanf("%f",&dividende);
    printf("Donnez la valeur du diviseur ");
    scanf("%f",&diviseur);
     
    if(diviseur==0){
        printf("Votre diviseur est nul");
    }
    else{
        resultat=dividende/diviseur;
        printf("Le résultat de votre division est de %.2f", resultat);
    }*/
    
    /*char ChaineDeCaracteres[255];
    printf("Donnez une phrase ou plusieurs mots sans espace ");
    scanf("%s",ChaineDeCaracteres);
    printf("Votre chaîne de caractères %s",ChaineDeCaracteres);*/
    
    /*char ChaineDeCaracteres[255];
    printf("Donnez une phrase ou plusieurs mots ");
    gets(ChaineDeCaracteres);
    printf("Votre chaîne de caractères %.2s",ChaineDeCaracteres);*/
    
    /*int a;
    int b;
    printf("Donnez un nombre ");
    scanf("%d",&a);
    printf("Donnez un second nombre ");
    scanf("%d",&b);
    if(a<b){
        printf("La plus grande valeur est %d ",b);
    }
    if(a>b){
        printf("La plus grand valeur est %d ",a);
    }*/
    
    /*int a;
    int b;
    int c;
    printf("Donnez un nombre ");
    scanf("%d",&a);
    printf("Donnez un second nombre ");
    scanf("%d",&b);
    printf("Donnez un troisième nombre ");
    scanf("%d",&c);
    if(c>a && c>b){
        printf("La plus grande valeur est %d ",c);
    }
    if(a>b && a>c){
        printf("La plus grand valeur est %d ",a);
    }
    if(b>a && b>c){
        printf("La plus grand valeur est %d ",b);
    }*/
    
    /*int dec;
    printf("Donnez une valeur à mettre en décimal ");
    scanf("%d",&dec);
    printf("Votre valeur en décimal %d",dec);*/
    
    /*int hex;
    printf("Donnez une valeur à mettre en hexadécimal ");
    scanf("%d",&hex);
    printf("Votre valeur en décimal %x",hex);*/
    
    float a;
    float b;
    float resultat;
    char choix;
    printf("Donnez une première valeur ");
    scanf("%f",&a);
    printf("Donnez une seconde valeur ");
    scanf("%f",&b);
    getchar(); /*vider le scanf pour que le suivant soit pris en compte*/
    printf("Choisissez ce que vous voulez faire avec ces deux valeurs en entrant la lettre de l'opération souhaitée. \n a-faire la somme des valeurs \n b-faire la soustraction \n c-faire la différence \n d-faire le produit\n");
    scanf("%c",&choix);
    switch(choix){
        case 'a':
            resultat=a+b;
            printf("%f + %f = %f",a,b,resultat);
            break;
        case 'b':
            resultat=a-b;
            printf("%f - %f = %f",a,b,resultat);
            break;
        case 'c':
            resultat=a/b;
            printf("%f / %f = %f",a,b,resultat);
            break;
        case 'd':
            resultat=a*b;
            printf("%f x %f = %f",a,b,resultat);
            break;
        default :
            printf("Vous avez saisi une mauvaise commande");            
    }
    
    return 0;
}