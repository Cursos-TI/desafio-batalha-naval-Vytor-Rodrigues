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
printf("5. Formas Geometrica\n");
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
  
    case 4: {
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
    break; }



    case 5: {
//variaveis triangulo
int linha_horizontaltri1 = 0, coluna_horizontaltri1 = 2;// primeira linha triangulo
int linha_horizontaltri2 = 1, coluna_horizontaltri2 = 1;// segunda
int linha_horizontaltri3 = 2, coluna_horizontaltri3 = 0;// terceira


//variaveis cruz
int linha_horizontal_cruz = 7;
int coluna_vertical_cruz = 2;


//variaveis octaedro
int centro_Linha_vertical = 3, centro_coluna_horizontal = 7;
int cobrir_octaedro1 = 2, cobrir_octaedro2 = 4;

    //triangulo

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

for (int i = -2; i <= 2; i++)
{
    if (tabuleiro[linha_horizontal_cruz][coluna_vertical_cruz] < tabuleiro)
    {
         tabuleiro[linha_horizontal_cruz + i][coluna_vertical_cruz] = 1;
    }
    for (int j = -2; j <= 2; j++)
    {
        if (tabuleiro[linha_horizontal_cruz][coluna_vertical_cruz] < tabuleiro)
        {
            tabuleiro[linha_horizontal_cruz - 1][coluna_vertical_cruz + j] = 1;
        }
        
    }
    
    
}
//fim cruz

//inicio octaedro 3 7


for (int i = -2; i <= 2; i++)
{
    if (tabuleiro[centro_Linha_vertical][centro_coluna_horizontal] < tabuleiro)
    {
        tabuleiro[centro_Linha_vertical + i][centro_coluna_horizontal] = 5;
    }
    for (int j = -2; j <= 2; j++)
    {
        if (tabuleiro[centro_Linha_vertical][centro_coluna_horizontal] < tabuleiro)
        {
         tabuleiro[centro_Linha_vertical][centro_coluna_horizontal + i] = 5;
        }
        for (int a = -1; a <= 1; a++)
        {
            tabuleiro[cobrir_octaedro1][centro_coluna_horizontal + a] = 5;
            for (int b = -1; b <= 1; b++)
            {
                tabuleiro[cobrir_octaedro2][centro_coluna_horizontal + a] = 5;
            }
            
        }
        

        
       
    }
    
    
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

    
    break;
}
default:
printf("Opcao invalida");
    break;
}
//para declarar variaveis dentro de um switch, é preciso colocar {}, apos o case.


    return 0;
}