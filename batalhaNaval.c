#include <stdio.h>

int main(){

    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10] = {
    //   A  B  C  D  E  F  G  H  I  J
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},//0
        {0, 0, 3, 3, 3, 0, 0, 0, 0, 0},//1
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},//2
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},//3
        {0, 0, 0, 0, 0, 0, 0, 3, 0, 0},//4
        {0, 0, 0, 0, 0, 0, 0, 3, 0, 0},//5
        {0, 0, 0, 0, 0, 0, 0, 3, 0, 0},//6
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},//7
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},//8
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0} //9
    };

    printf("DESAFIO TABULEIRO BATALHA NAVAL\n");
    //para printar somente o as letras
    printf("   ");
for (int i = 0; i < 10; i++)
{
    printf("%c ", linha[i]);
}
printf("\n");

//tabela completa
    for (int j = 0; j < 10; j++)
    { 
        printf(" %2d", j + 1);
     
        for (int i = 0; i < 10; i++)
        {
            printf(" %d", tabuleiro[j][i]);
           
        }
        printf("\n ");
        
    }






    return 0;
}