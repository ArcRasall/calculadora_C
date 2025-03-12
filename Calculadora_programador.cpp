#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Fun��o para converter uma string bin�ria para decimal
int binToDec(const char *bin) {
    return (int) strtol(bin, NULL, 2);
}

// Fun��o para converter um n�mero decimal para bin�rio
void decToBin(int num, char *bin) {
    itoa(num, bin, 2);
}

// Fun��o para converter uma string hexadecimal para decimal
int hexToDec(const char *hex) {
    return (int) strtol(hex, NULL, 16);
}

// Fun��o para converter um n�mero decimal para hexadecimal
void decToHex(int num, char *hex) {
    sprintf(hex, "%X", num);
}

// Opera��es matem�ticas b�sicas
int soma(int a, int b) {
    return a + b;
}

int subtracao(int a, int b) {
    return a - b;
}

int multiplicacao(int a, int b) {
    return a * b;
}

float divisao(int a, int b) {
    if (b == 0) {
        printf("Erro: Divis�o por zero!\n");
        return 0;
    }
    return (float) a / b;
}

int main() {
    char bin1[32], bin2[32], binRes[32];
    char hex1[32], hex2[32], hexRes[32];
    int dec1, dec2, res;
    int opcao, operacao;
    
    // Sele��o do formato de opera��o
    printf("Escolha o formato da opera��o:\n");
    printf("1 - Decimal\n2 - Bin�rio\n3 - Hexadecimal\n");
    scanf("%d", &opcao);
    
    // Sele��o da opera��o matem�tica
    printf("Escolha a opera��o:\n");
    printf("1 - Soma\n2 - Subtra��o\n3 - Multiplica��o\n4 - Divis�o\n");
    scanf("%d", &operacao);
    
    if (opcao == 1) {
        printf("Digite o primeiro n�mero decimal: ");
        scanf("%d", &dec1);
        printf("Digite o segundo n�mero decimal: ");
        scanf("%d", &dec2);
        
        switch (operacao) {
            case 1: res = soma(dec1, dec2); break;
            case 2: res = subtracao(dec1, dec2); break;
            case 3: res = multiplicacao(dec1, dec2); break;
            case 4: res = divisao(dec1, dec2); break;
            default: printf("Opera��o inv�lida!\n"); return 0;
        }
        printf("Resultado em decimal: %d\n", res);
    } else if (opcao == 2) {
        printf("Digite o primeiro n�mero bin�rio: ");
        scanf("%s", bin1);
        printf("Digite o segundo n�mero bin�rio: ");
        scanf("%s", bin2);
        
        dec1 = binToDec(bin1);
        dec2 = binToDec(bin2);
        
        switch (operacao) {
            case 1: res = soma(dec1, dec2); break;
            case 2: res = subtracao(dec1, dec2); break;
            case 3: res = multiplicacao(dec1, dec2); break;
            case 4: res = divisao(dec1, dec2); break;
            default: printf("Opera��o inv�lida!\n"); return 0;
        }
        
        decToBin(res, binRes);
        printf("Resultado em bin�rio: %s\n", binRes);
    } else if (opcao == 3) {
        printf("Digite o primeiro n�mero hexadecimal: ");
        scanf("%s", hex1);
        printf("Digite o segundo n�mero hexadecimal: ");
        scanf("%s", hex2);
        
        dec1 = hexToDec(hex1);
        dec2 = hexToDec(hex2);
        
        switch (operacao) {
            case 1: res = soma(dec1, dec2); break;
            case 2: res = subtracao(dec1, dec2); break;
            case 3: res = multiplicacao(dec1, dec2); break;
            case 4: res = divisao(dec1, dec2); break;
            default: printf("Opera��o inv�lida!\n"); return 0;
        }
        
        decToHex(res, hexRes);
        printf("Resultado em hexadecimal: %s\n", hexRes);
    } else {
        printf("Op��o inv�lida!\n");
    }
    
    return 0;
}
