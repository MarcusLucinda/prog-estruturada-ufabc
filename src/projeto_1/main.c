
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct cadastro
{
    char id[50];
    char nome_livro[50];
    char ano[50];
    char autor[50];
    char genero[50];
    //char editora[50];
    //char doi[50];
};

const char *getColuna(char *linha, int num)
{
    const char *dado;
    for (dado = strtok(linha, ";");
         dado && *dado;
         dado = strtok(NULL, ";\n"))
    {
        if (!--num)
            return dado;
    }
    return NULL;
}

void carregaTodos()
{
    FILE *reg = fopen("livros.csv", "r");

    printf("--------------------------------------------------------------------------------------\n");
    printf("|   ID   |             Titulo              |   Ano  |      Autor      |    Genero    |\n");
    char linhas[1024];
    while (fgets(linhas, 1024, reg))
    {
        char *linha = strdup(linhas);
        printf("|%-8s|", getColuna(linha, 1));
        linha = strdup(linhas);
        printf("%-33s|", getColuna(linha, 2));
        linha = strdup(linhas);
        printf("%-8s|", getColuna(linha, 3));
        linha = strdup(linhas);
        printf("%-17s|", getColuna(linha, 4));
        linha = strdup(linhas);
        printf("%-14s|\n", getColuna(linha, 5));
        free(linha);
    }
    printf("|--------|---------------------------------|--------|-----------------|--------------|\n");
    fclose(reg);
}

void cadastraNovo()
{
    struct cadastro c;
    FILE *reg = fopen("livros.csv", "a");
    int continua = 0, qtd = 0;
    printf("Quantos itens dejesa adicionar? ");
    scanf("%d", &qtd);
    do
    {
        fflush(stdin);
        char *inscricao[50];
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
        printf("Digite o genero do livro: ");
        scanf("%[^\n]%*c", inscricao);
        memcpy(c.genero, inscricao, 50);

        fprintf(reg, "%s;%s;%s;%s;%s\n", c.id, c.nome_livro, c.ano, c.autor, c.genero);
        continua++;
    } while (continua < qtd);
    fclose(reg);
}

void buscaGenero()
{
    int genero;
    printf("Digido o numero correspondente ao genero desejado:\n"
           "1) Acao\n"
           "2) Aventura\n"
           "3) Didatico\n"
           "4) Romance\n"
           "5) Suspense\n"
           "6) Terror\n");
    scanf("%d", &genero);
    char listaGeneros[7][15] = {"-", "Acao", "Aventura", "Didatico", "Romance", "Suspense", "Terror"};

    FILE *reg = fopen("livros.csv", "r");
    printf("--------------------------------------------------------------------------------------\n");
    printf("|   ID   |             Titulo              |   Ano  |      Autor      |    Genero    |\n");
    char linhas[1024];
    while (fgets(linhas, 1024, reg))
    {
        char *linha = strdup(linhas);
        const char *generoAtual = getColuna(linha, 5);
        if (strcmp(generoAtual, listaGeneros[genero]) == 0)
        {
            printf("|%-8s|", getColuna(linha, 1));
            linha = strdup(linhas);
            printf("%-33s|", getColuna(linha, 2));
            linha = strdup(linhas);
            printf("%-8s|", getColuna(linha, 3));
            linha = strdup(linhas);
            printf("%-17s|", getColuna(linha, 4));
            linha = strdup(linhas);
            printf("%-14s|\n", getColuna(linha, 5));
            free(linha);
        }
    }
    printf("|--------|---------------------------------|--------|-----------------|--------------|\n");
    fclose(reg);
}

void remover()
{
    char numId[10];
    fflush(stdin);
    printf("Insira o ID\n");
    scanf("%[^\n]%*c", numId);
    FILE *reg = fopen("livros.csv", "r");
    FILE *novoReg = fopen("temp.csv", "w+");
    char linhas[1024];
    while (fgets(linhas, 1024, reg))
    {
        char *linha = strdup(linhas);
        if (strcmp(numId, getColuna(linha, 1)))
        {
            linha = strdup(linhas);
            fprintf(novoReg, linha);
            free(linha);
        }
    }
    fclose(reg);
    fclose(novoReg);
    remove("./livros.csv");
    rename("./temp.csv", "livros.csv");
}

int atualiza()
{
    struct cadastro c;
    char numId[10];
    fflush(stdin);
    printf("Insira o ID\n");
    scanf("%[^\n]%*c", numId);
    FILE *reg = fopen("livros.csv", "r");
    FILE *novoReg = fopen("temp.csv", "w+");
    char linhas[1024];
    while (fgets(linhas, 1024, reg))
    {
        char *linha = strdup(linhas);
        if (strcmp(numId, getColuna(linha, 1)))
        {
            linha = strdup(linhas);
            fprintf(novoReg, linha);
            free(linha);
        }
    }
    fflush(stdin);
    char *inscricao[50];
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
    printf("Digite o genero do livro: ");
    scanf("%[^\n]%*c", inscricao);
    memcpy(c.genero, inscricao, 50);

    fprintf(novoReg, "%s;%s;%s;%s;%s\n", c.id, c.nome_livro, c.ano, c.autor, c.genero);

    fclose(reg);
    fclose(novoReg);
    remove("./livros.csv");
    rename("./temp.csv", "livros.csv");
}

int main()
{
    int verifica_opcao;
    do
    {
        printf("Selecione o que deseja fazer, digite o numero da opcao:\n"
               "1) Verificar Catalogo\n"
               "2) Adicionar itens no catalogo\n"
               "3) Filtrar por genero\n"
               "4) Deletar por ID\n"
               "5) Atualizar ID\n"
               "0) Sair\n");
        scanf("%d", &verifica_opcao);

        if (verifica_opcao == 1)
        {
            carregaTodos();
        }
        else if (verifica_opcao == 2)
        {
            cadastraNovo();
        }
        else if (verifica_opcao == 3)
        {
            buscaGenero();
        }
        else if (verifica_opcao == 4)
        {
            remover();
        }
        else if (verifica_opcao == 5)
        {
            atualiza();
        }
    } while (verifica_opcao != 0);
}