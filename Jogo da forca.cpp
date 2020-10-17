/*******************************************************************************
DEUS é Bom!                                                         JESUS te ama

                                JOGO DA FORCA  
                                
Feito por: Edu Fidelis 
********************************************************************************/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char palavra[30], letra[1], secreta[30];
    int tam, i, chances, acertos;
    bool acerto;
    
    tam = 0;
    i = 0;
    chances = 6;
    acertos = 0;
    acerto = false;
    cout << "\t\t\t ------------------- REGRAS --------------------\n\t\t\t| 1ª Sempre ative o Capslock (Fixa) para jogar  |\n\t\t\t| 2ª A quantidade de letras é a quantidade de - |\n\t\t\t| 3ª A cada erro você terá uma chance a menos   |\n\t\t\t| 4ª Você terá 6 chances                        |\n\t\t\t -----------------------------------------------\n ";
    cout << "\n\t\t\t   Fale para o/a amigo(a) tampar os olhos!\n\nAgora digite a palavra secreta a ser advinhada: ";
    cin >> palavra;
    system ("cls");
    
    while(palavra[i] != '\0'){
        i++;
        tam++;
    }
    
    for(i=0; i<30; i++){
        secreta[i]= '-';
    }
    
    while(chances>0 && (acertos<tam)){
        cout << "Palavras restante: " << chances << "\n\n";
        cout << "Palavras secreta: ";
        for(i=0; i<tam; i++){
            cout<< secreta[i];
        }
        cout<< "\n\nDigite uma letra: ";
        cin>>letra[0];
        for(i=0; i<tam; i++){
            if(palavra[i] == letra[0]){
                acerto=true;
                secreta[i]=palavra[i];
                acertos++;
            }
        }
        if(!acerto){
            chances--;
        }
        acerto=false;
        system("cls");
    }
    if(acertos==tam){
        cout << "\n\n\t\tVOCÊ VENCEU!";
        cout << "\n\tA palavra secreta é: " << palavra;
    }
    else{
        cout << "\n\n\t\tVOCÊ PERDEU!";
        cout << "\n\tA palavra secreta era: " << palavra;
    }
    
    system("pause");
    
    return 0;
}
