#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função para converter uma string binária para decimal
int binToDec(const char *bin) {
    return (int) strtol(bin, NULL, 2);
}

// Função para converter um número decimal para binário
void decToBin(int num, char *bin) {
    itoa(num, bin, 2);
}

// Função para converter uma string hexadecimal para decimal
int hexToDec(const char *hex) {
    return (int) strtol(hex, NULL, 16);
}

// Função para converter um número decimal para hexadecimal
void decToHex(int num, char *hex) {
    sprintf(hex, "%X", num);
}

// Operações matemáticas básicas
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
        printf("Erro: Divisão por zero!\n");
        return 0;
    }
    return (float) a / b;
}

int main() {
    char bin1[32], bin2[32], binRes[32];
    char hex1[32], hex2[32], hexRes[32];
    int dec1, dec2, res;
    int opcao, operacao;
    
    // Seleção do formato de operação
    printf("Escolha o formato da operação:\n");
    printf("1 - Decimal\n2 - Binário\n3 - Hexadecimal\n");
    scanf("%d", &opcao);
    
    // Seleção da operação matemática
    printf("Escolha a operação:\n");
    printf("1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n");
    scanf("%d", &operacao);
    
    if (opcao == 1) {
        printf("Digite o primeiro número decimal: ");
        scanf("%d", &dec1);
        printf("Digite o segundo número decimal: ");
        scanf("%d", &dec2);
        
        switch (operacao) {
            case 1: res = soma(dec1, dec2); break;
            case 2: res = subtracao(dec1, dec2); break;
            case 3: res = multiplicacao(dec1, dec2); break;
            case 4: res = divisao(dec1, dec2); break;
            default: printf("Operação inválida!\n"); return 0;
        }
        printf("Resultado em decimal: %d\n", res);
    } else if (opcao == 2) {
        printf("Digite o primeiro número binário: ");
        scanf("%s", bin1);
        printf("Digite o segundo número binário: ");
        scanf("%s", bin2);
        
        dec1 = binToDec(bin1);
        dec2 = binToDec(bin2);
        
        switch (operacao) {
            case 1: res = soma(dec1, dec2); break;
            case 2: res = subtracao(dec1, dec2); break;
            case 3: res = multiplicacao(dec1, dec2); break;
            case 4: res = divisao(dec1, dec2); break;
            default: printf("Operação inválida!\n"); return 0;
        }
        
        decToBin(res, binRes);
        printf("Resultado em binário: %s\n", binRes);
    } else if (opcao == 3) {
        printf("Digite o primeiro número hexadecimal: ");
        scanf("%s", hex1);
        printf("Digite o segundo número hexadecimal: ");
        scanf("%s", hex2);
        
        dec1 = hexToDec(hex1);
        dec2 = hexToDec(hex2);
        
        switch (operacao) {
            case 1: res = soma(dec1, dec2); break;
            case 2: res = subtracao(dec1, dec2); break;
            case 3: res = multiplicacao(dec1, dec2); break;
            case 4: res = divisao(dec1, dec2); break;
            default: printf("Operação inválida!\n"); return 0;
        }
        
        decToHex(res, hexRes);
        printf("Resultado em hexadecimal: %s\n", hexRes);
    } else {
        printf("Opção inválida!\n");
    }
    
    return 0;
}
