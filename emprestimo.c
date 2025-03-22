/* Alfenas, 22 de Março de 2025
Júlia Alves da Rocha 2025.1.08.015  AEDs I – Prática (DCE794)
 Sistema de Aprovação de Empréstimo*/

 #include <stdio.h>

  
    int main(){
        // Declaração de variáveis
        int idade, historico, parcelas_atraso_hoje, parcelas_atraso_2, nome_negativado;
        float renda_mensal;
    
        // Entrada de dados
        printf("Digite a idade do solicitante do empréstimo: ");
        scanf("%d", &idade);
        printf("Digite a renda mensal do solicitante do empréstimo: ");
        scanf("%f", &renda_mensal);
        printf("Digite o histórico de crédito do solicitante do empréstimo: ");
        scanf("%d", &historico);
        printf("Digite o número de parcelas em atraso atualmente do solicitante do empréstimo: ");
        scanf("%d", &parcelas_atraso_hoje);
        printf("Digite o número de parcelas em atraso nos últimos 2 anos do solicitante do empréstimo: ");
        scanf("%d", &parcelas_atraso_2);
    
        // Processamento
        if (idade <= 18 || idade >= 70 || nome_negativado == 0 || renda_mensal < 2000) {
            printf("Classificação: Empréstimo negado");
        }else{
            if (renda_mensal >= 2000 && renda_mensal <= 4999.99 && parcelas_atraso_hoje <= 2 && parcelas_atraso_2 <= 2) 
                printf("Classificação: Empréstimo de Baixo Valor (até R$ 5.000,00)");
            }else{
            if (renda_mensal >= 5000 && renda_mensal <= 9999.99 && parcelas_atraso_hoje == 0 && parcelas_atraso_2 <= 4) 
                printf("Classificação: Empréstimo de Médio Valor (até R$ 20.000,00)");
            }else{
            if (renda_mensal >= 10000 && parcelas_atraso_hoje == 0 && parcelas_atraso_2 == 0)
                printf("Classificação: Empréstimo de Alto Valor (acima de R$ 20.000,00)");
            }
        }

    
        return0;
    }

    