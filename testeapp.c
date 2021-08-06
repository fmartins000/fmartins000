#include <stdio.h> 
#include <string.h>
 
int main() {
 
    //variáveis
    char nome[30] = "";
    char sexo;
    int anoNasc;
    int idade;
    int ano = 2021;
 
    // Enquanto o valor fornecido não for fornecido exibir mensagem de erro e solicitar novamente a leitura
    printf("Informe o nome: ");
    scanf("%[^\n]", nome);
    while(strlen(nome) == 0) {
         printf("\nERRO! ");
         printf("\nInforme o nome novamente: ");
         scanf("%[^\n]", nome);
         getchar();
    }
    // Enquanto o valor fornecido não for correto (M,m,F,f) exibir mensagem de erro e solicitar novamente a leitura;
    printf("Informe o sexo: ");
    scanf("%c", &sexo);
    while ((sexo != 'f') && (sexo !='F') && (sexo != 'm') && (sexo != 'M')) {
         printf("\nErro! ");
         printf("\nInforme o sexo novamente: ");
         scanf("%c", &sexo);
    }
    // Enquanto o valor fornecido não for fornecido exibir mensagem de erro e solicitar novamente a leitura;
    // Quando o valor fornecido estiver correto, escrever NOME, ANO DE NASCIMENTO, IDADE e SEXO
    printf("\nInforme o ano de nascimento: ");
    scanf("%d", &anoNasc);
    idade =(ano - anoNasc);
    printf("Ano nascimento: %d, Nome: %s, Sexo: %c e Idade: %d " , anoNasc, nome, sexo, idade);
 
 
    return 0;
}
