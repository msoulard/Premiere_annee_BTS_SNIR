/* 
 * File:   TPDecompressionEtCompression.c
 * Author: msoulard
 *
 * Created on 28 janvier 2020, 13:13
 */

#include "biblioCompressionDecompression.h"

int main(int argc, char** argv) {     
    char choix;
    int erreur;
    int i;
    erreur=0;
    
    printf("Compression RLE\n\n");
    //affichage de ce qu'il faut faire s'il y a moins de 4 arguments
    if(argc!=4){
        printf("Usage : rle option fichier_source fichier_destination\n");
        printf("Option : - 'c' pour compression\n");
        printf("         - 'd' pour décompression\n");
    }
    //sinon afficher les arguments
    else{
        printf("argc vaut %d\n",argc);
        for(i=0 ; i<argc ; i++){
            printf("argv[%d] : %s\n",i,argv[i]);
        }
        //choix de compression ou décompression du fichier
        sscanf(argv[1]," %c",&choix);
        switch (choix){
            case 'c' : 
                //erreur = compressBmp(argv[2],argv[3]);                
                if(erreur==0){
                    printf("\nCompression réussie\n");
                }
                else{
                    printf("\nErreur de compression\n");
                }
                break;
            case 'd' :
                erreur = decompressBMP(argv[2],argv[3]);
                if(erreur==0){
                    printf("\nDécompression réussie\n");
                }
                else{
                    printf("\nErreur de décompression\n");
                }
                break;
            default :
                printf("\nPremier argument non valide (c ou d)\n");
                exit(-1);
        }
    }

    return (EXIT_SUCCESS);
}

