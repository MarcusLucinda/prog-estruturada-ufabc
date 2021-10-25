#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct cadastro{
  char id[50];
  char nome_livro[50];
  char ano[50];
  char autor[50];
  //char genero[50];
  //char editora[50];
  //char doi[50];
};

const char* getColuna(char* linha, int num){
    const char* dado;
    for(dado = strtok(linha, ";");
            dado && *dado;
            dado = strtok(NULL, ";\n"))
    {
        if(!--num)
            return dado;
    }
    return NULL;
}

int main()
{
    int verifica_opcao;
    do{
        printf("Selecione o que deseja fazer, digite o numero da opcao:\n"
        "1) Verificar Catalogo\n"
        "2) Adicionar itens no catalogo\n"
        "0) Sair\n");
        scanf("%d", &verifica_opcao);
        
        if (verifica_opcao == 1)
        {
            FILE* reg = fopen("livros.csv", "r");

            printf("-----------------------------------------------------------------------\n");
            printf("|   ID   |             Titulo              |   Ano  |      Autor      |\n");
            char linhas[1024];
            while(fgets(linhas, 1024, reg))
            {
                char* linha = strdup(linhas);
                printf("|%-8s|", getColuna(linha, 1));
                linha = strdup(linhas);
                printf("%-33s|", getColuna(linha, 2));
                linha = strdup(linhas);
                printf("%-8s|", getColuna(linha, 3));
                linha = strdup(linhas);
                printf("%-17s|\n", getColuna(linha, 4));
                free(linha);
            }
            printf("|--------|---------------------------------|--------|-----------------|\n");
        }
        else if(verifica_opcao == 2)
        {
            struct cadastro c;
            FILE* reg = fopen("livros.csv", "a");
            int continua = 0, qtd = 0;
            printf("Quantos itens dejesa adicionar? ");
            scanf("%d", &qtd);
            do
            {
                fflush(stdin);
                char* inscricao[50];
                printf("Digite o ID: ");
                scanf("%[^\n]%*c", inscricao);
                memcpy(c.id, inscricao, 50);
                printf("Digite o Nome do livro: ");
                scanf("%[^\n]%*c", inscricao);
                memcpy(c.nome_livro, inscricao, 50);
                printf("Digite o Ano de lancamento do livro: ");
                scanf("%[^\n]%*c", inscricao);
                memcpy(c.ano, inscricao, 50);
                printf("Digite o Nome do Autor do livro: ");
                scanf("%[^\n]%*c", inscricao);
                memcpy(c.autor, inscricao, 50);

                fprintf(reg,"%s;%s;%s;%s\n", c.id, c.nome_livro, c.ano, c.autor);
                continua++;
            }while(continua < qtd);
            fclose(reg);
        }
    }while(verifica_opcao != 0);
}