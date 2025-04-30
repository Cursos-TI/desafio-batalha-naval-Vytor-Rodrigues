#include <stdio.h>

#define tamanho_tabuleiro 10
#define tamanho_navio 3


int main(){

    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    int tabuleiro[tamanho_tabuleiro][tamanho_tabuleiro];
// para preencher com 0 o tabuleiro
for (int i = 0; i < tamanho_tabuleiro; i++)
{
    for (int j = 0; j < tamanho_tabuleiro; j++)
    {
        tabuleiro[i][j] = 0;
    }
    
}

//triangulo
int linha_horizontaltri1 = 0, coluna_horizontaltri1 = 2;// primeira linha triangulo
int linha_horizontaltri2 = 1, coluna_horizontaltri2 = 1;// segunda
int linha_horizontaltri3 = 2, coluna_horizontaltri3 = 0;// terceira

for (int a = 0; a < 1; a++)
{
    tabuleiro[linha_horizontaltri1][coluna_horizontaltri1 + a] = 3;
    for (int b = 0; b < 3; b++)
    {
        tabuleiro[linha_horizontaltri2][coluna_horizontaltri2 + b] = 3;
        for (int c = 0; c < 5; c++)
        {
            tabuleiro[linha_horizontaltri3][coluna_horizontaltri3 + c] = 3;
        }
        
    }
    
}

//fim triangulo
// inicio cruz
int linha_horizontal_cruz = 7;
int coluna_vertical_cruz = 1;













printf("DESAFIO TABULEIRO BATALHA NAVAL\n");
//para printar somente o as letras
printf("   ");
for (int i = 0; i < tamanho_tabuleiro; i++)
{
printf("%c ", linha[i]);
}
printf("\n");

//tabela completa
for (int j = 0; j < tamanho_tabuleiro; j++)
{ 
    printf(" %2d", j + 1);
 
    for (int i = 0; i < tamanho_tabuleiro; i++)
    {
        printf(" %d", tabuleiro[j][i]);
       
    }
    printf("\n ");
    
}



return 0;
}