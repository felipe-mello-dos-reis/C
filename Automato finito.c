#include <stdio.h>
#include <stdlib.h>

/* Cabecalho, declaracoes e digita��o do numero de cadeias */

int main ()     //  Inicio da funcao main
{
    char c, carac, lixo;
    int estado, i, n;
    printf ("N U M E R O   I M P A R   D E   U M'S");
    printf ("\n\nNumero de cadeias a serem testadas: ");
    scanf ("%d%c", &n, &lixo);
    for (i = 1; i <= n; i++)
    {

        /* Digitacao da cadeia a ser testada */

        printf ("\n\nDigite a %da cadeia encerrada por <enter>: ", i);
        /* Percurso no automato usando os caracteres da cadeia */

        for (estado = 1, scanf ("%c", &carac); carac != '\n';
                scanf ("%c", &carac))
            switch (estado)
            {
            case 1:         // Teste do caractere no estado 1
                switch (carac)
                {
                case '0':
                    estado = 1;
                    break;
                case '1':
                    estado = 2;
                    break;
                default:
                    estado = 3;
                }
                break;
            case 2:         // Teste do caractere no estado 2
                switch (carac)
                {
                case '0':
                    estado = 2;
                    break;
                case '1':
                    estado = 1 ;
                    break;
                default:
                    estado = 3;
                }
                break;
            case 3:         // Acao para o estado 3 (dispensavel)
                estado = 3;
                break;
            }
        /* Escrita do resultado do teste */

        if (estado == 1)
            printf ("\n\tCadeia aprovada!");
        else
            printf ("\n\tCadeia reprovada!");
    }

    /* Fechamento da tela */

    printf ("\n\n");
    system ("pause");
    return 0;

}       //Fim da funcao main e do programa
