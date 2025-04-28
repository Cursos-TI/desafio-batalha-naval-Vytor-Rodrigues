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
int menu;
printf("BEM VINDO AO BATALHA NAVAL, COMO VOCE GOSTARIA DE VER O TABULHEIRO\n");
printf("1. Diagonal 1\n");
printf("2. Diagonal 2\n");
printf("3. Duas diagonais\n");
printf("4. Dois navios\n");
scanf("%d", &menu);

switch (menu)
{
case 1:

for (int i = 0; i < tamanho_tabuleiro; i++)
{
 tabuleiro[i][i] = 3;
    
    
}
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


    /* code */
    break;

    case 2:
    for (int i = 0; i < tamanho_tabuleiro; i++)
{
 tabuleiro[i][tamanho_tabuleiro - 1 - i] = 3;
    
    
}

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





    /* code */
    break;

    case 3:
    for (int i = 0; i < tamanho_tabuleiro; i++)
{
 tabuleiro[i][i] = 3;
}
for (int i = 0; i < tamanho_tabuleiro; i++)
{
 tabuleiro[i][tamanho_tabuleiro - 1 - i] = 3;
}


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


    /* code */
    break;

    case 4:
    int linha_horizontal = 2, coluna_horizontal = 3;
int linha_vertical = 5, coluna_vertical = 6;

//(para por o navio deitado)
for (int i = 0; i < tamanho_navio; i++)
{
    tabuleiro[linha_horizontal][coluna_horizontal + i] = 3;
}//o + i e para dar mais uma volta, o que estiver com + i dara mais uma volta, por isso o vertical fica em pe colocando na linha


//(para por o navio em pe)
for (int i = 0; i < tamanho_navio; i++)
{
    tabuleiro[linha_vertical + i][coluna_vertical] = 3;
}



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

    /* code */
    break;

default:
printf("Opcao invalida");
    break;
}



    return 0;
}