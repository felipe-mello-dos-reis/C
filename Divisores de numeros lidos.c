#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, achou;
    char c;
    printf("DIVISORES DE VARIOS NUMEROS MAIORES QUE 1\n\n");
    do
    {
        printf("Divisores de um numero?(s/n)\n");
        do
        {

            scanf("%c", &c);
            setbuf(stdin,NULL);

            if(c != 's' && c != 'S' && c != 'n' && c != 'N')
            {
                printf("Entrada invalida; digite novamente:\n");
            }
        }
        while(c != 's' && c != 'S' && c != 'n' && c != 'N');

        if(c == 's' || c == 'S')
        {
            printf("Digite um numero maior que 1:\n");
            n = -1;


            /*fazemos essa atribui��o para evitar erros caso o operador realize mais de um ciclo
            Suponha que o operador realizou normalmente as comandos solicitaddos, digitando um inteiro x
            quando iniciar um novo ciclo, a variavel n ainda vale x
            se o operador digitar um char ao inv�s de um inteiro, o programa ainda considerar� que n = x
            executando assim sem nenhum problema
            quando atribuimos o valor -1 (arbitr�rio, o importante � ser inv�lido) garantimos que se o operador n�o seguir o comando
            o programa identificara o erro e n�o permitira que continue sua execu��o com o valor n antigo (x)
            */
            scanf("%d", &n);
            while(n < 2)
            {
                printf("Numero improprio; digite novamente:\n");
                scanf("%d", &n);
            }
            printf("Divisores de %d:\n", n);
            i = 2;
            achou = 0;
            while(i <= n/2)
            {
                if(n % i == 0)
                {
                    printf("%d\n", i);
                    achou = 1;
                }
                i = i + 1;
            }
            if(achou == 0)
                printf("%d eh primo\n", n);

        }

        setbuf(stdin,NULL);
    }
    while(c == 's' || c == 'S');
    system("pause");
    return 0;

}
