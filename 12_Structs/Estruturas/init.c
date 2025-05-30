    #include <stdio.h>
    #include <string.h>
     
    struct palavra{
        int ordem;
        char letra;
        char texto[255];
    };
     
    int main () {
     
        //Criar uma palavra
        struct palavra primeiraPalavra;
     
        //Modificando os campos
        primeiraPalavra.ordem = 10;
        primeiraPalavra.letra = 'p';
        strcpy(primeiraPalavra.texto,"palavra");
     
        //Mostrando valores do Struct
        printf("Ordem: %d, Primeira Letra: %c, Palavra: %s", primeiraPalavra.ordem,primeiraPalavra.letra, primeiraPalavra.texto);
     
        //Fazendo uma lista de structs
        struct palavra palavras[3];
     
        //Modificando os campos
        palavras[0].ordem = 0;
        palavras[1].ordem = 1;
        palavras[2].ordem = 2;

        palavras[0].letra = 'd';
        palavras[1].letra = 'l';
        palavras[2].letra = 'b';

        strcpy(palavras[0].texto,"Dado");
        strcpy(palavras[1].texto,"Lego");
        strcpy(palavras[2].texto,"Bola");
     
        //Percorrendo o vetor
        int cont;
        for(cont = 0; cont < 3; cont++){
            printf("\nOrdem: %d, Primeira Letra: %c, Palavra: %s", palavras[cont].ordem,palavras[cont].letra, palavras[cont].texto);
        }
     
        return 0;
    }