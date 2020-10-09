#include <stdio.h>
#include <stdlib.h>

int main() {
    /*float a;
    float b;
    float c;
    float delta;
    
    delta=0;
    
    printf("Donnez le coefficient a de votre équation du second degré ");
    scanf("%f",&a);
    printf("Donnez le coefficient b de votre équation du second degré ");
    scanf("%f",&b);
    printf("Donnez le coefficient c de votre équation du second degré ");
    scanf("%f",&c);
    delta=(b*b)-(4*a*c);
    if(delta>=0){
        printf("Le discriminant de votre équation du second degré est positif. Donc votre équation du second degré admet des solutions dans les réels.");        
    }
    else{
        printf("Le discriminat de votre équation du second degré est négatif. Donc votre équation du second degré n'admet pas de solution dans les réels.");
    }*/
    
    int heures;
    int minutes;
    int quartdheures;
    float total;
    
    printf("Donnez le nombre d’heures que vous avez passé dans le parking des Quinconces au Mans ");
    scanf("%d",&heures);
    printf("Donnez le nombre de minutes en plus des heures que vous avez passé dans le parking des Quinconces au Mans ");
    scanf("%d",&minutes);
    quartdheures=((heures*60)+minutes)/4;
    if(quartdheures<=1 && quartdheures<=4){
        printf("Vous n'avez rien à payer.");
    }
    else if(quartdheures>=5 && quartdheures<=10){
        total=quartdheures*0.50;
        printf("Vous devez payer %f",total);
    }
    else if(quartdheures>=11 && quartdheures<=12){
        total=quartdheures*0.40;
        printf("Vous devez payer %f",total);
    }
    else if(quartdheures>=13 && quartdheures<=28){
        total=quartdheures*0.20;
        printf("Vous devez payer %f",total);
    }
    else if(quartdheures>28){
        total=(quartdheures-28)*0.10+28*0.20;
        printf("Vous devez payer %f",total);
    }
    
    return 0;
}

