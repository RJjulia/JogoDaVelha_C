#include <stdio.h> 
#include <stdlib.h> 

void tabuleiro (char Casas[3][3]) {  // (fun��o) Desenho do tabuleiro que vai ser mostrado na tela 
	system("cls"); // comando limpar a tela
	printf("\t %c | %c | %c \n", Casas[0][0], Casas[0][1], Casas[0][2]); // \t => tabula��o
	printf("\t ---------- \n");
	printf("\t %c | %c | %c \n", Casas[1][0], Casas[1][1], Casas[1][2]);
	printf("\t ---------- \n ");
	printf("\t %c | %c | %c \n", Casas[2][0], Casas[2][1], Casas[2][2]);

}
int main (){ // fun��o principal 
    char Casas2[3][3] = { {'1', '2','3'},
    					  {'4', '5', '6'},
						  {'7', '8', '9'}, };

	
	char Resposta;
	int ContJogadas, Linh, Col, Vez, i, j, PontosX, PontosO;
	
	do{
		ContJogadas = 1;
		Vez = 0;
		PontosX = 0;
		PontosO = 0;
		for(i=0;i<=2;i++){ // deixar o tabuleiro vazio
			for(j=0;j<=2;j++){
				Casas2[i][j] = ' ';
			}	}
							
		do{
			tabuleiro(Casas2); // mostrar tabuleiro
			if(Vez%2 == 0){ // mostrar qual � o jogador
				printf("Jogador X\n");
			}else{
				printf("Jogador O\n");
			}
			printf("Digite a linha: "); // intera��o com o usuario 
			scanf("%i", &Linh); // leitura da linha
			printf("Digite a coluna: "); // intera��o com o usuario
			scanf("%i", &Col); // leitura da coluna
			if(Linh < 1 || Linh > 3 || Col < 1 || Col > 3) { // verificar se a jogada � valida
				Linh = 0;
				Col = 0;
			}else if(Casas2 [Linh-1][Col-1] != ' ') { // verificar se o espa�o est� vazio
				Linh = 0;
				Col = 0;
			}else{
				if(Vez%2 == 0) {  // definir qual jogador 
					Casas2[Linh-1][Col-1] = 'X';
				}else{
					Casas2[Linh-1][Col-1]  = 'O';
				}
				Vez++;
				ContJogadas++;  // somatoria de 1 em 1
			}
			if(Casas2[0][0] == 'X' && Casas2[0][1] == 'X' && Casas2[0][2] == 'X') {ContJogadas = 11;} // condi��o de vitoria para X
			if(Casas2[1][0] == 'X' && Casas2[1][1] == 'X' && Casas2[1][2] == 'X') {ContJogadas = 11;}
			if(Casas2[2][0] == 'X' && Casas2[2][1] == 'X' && Casas2[2][2] == 'X') {ContJogadas = 11;}
			if(Casas2[0][0] == 'X' && Casas2[1][0] == 'X' && Casas2[2][0] == 'X') {ContJogadas = 11;}
			if(Casas2[0][1] == 'X' && Casas2[1][1] == 'X' && Casas2[2][1] == 'X') {ContJogadas = 11;}
			if(Casas2[0][2] == 'X' && Casas2[1][2] == 'X' && Casas2[2][2] == 'X') {ContJogadas = 11;}
			if(Casas2[0][0] == 'X' && Casas2[1][1] == 'X' && Casas2[2][2] == 'X') {ContJogadas = 11;}
			if(Casas2[0][2] == 'X' && Casas2[1][1] == 'X' && Casas2[2][0] == 'X') {ContJogadas = 11;}
			
			if(Casas2[0][0] == 'O' && Casas2[0][1] == 'O' && Casas2[0][2] == 'O') {ContJogadas = 12;}
			if(Casas2[1][0] == 'O' && Casas2[1][1] == 'O' && Casas2[1][2] == 'O') {ContJogadas = 12;} // condi��o de vitoria paea O
			if(Casas2[2][0] == 'O' && Casas2[2][1] == 'O' && Casas2[2][2] == 'O') {ContJogadas = 12;}
			if(Casas2[0][0] == 'O' && Casas2[1][0] == 'O' && Casas2[2][0] == 'O') {ContJogadas = 12;}
			if(Casas2[0][1] == 'O' && Casas2[1][1] == 'O' && Casas2[2][1] == 'O') {ContJogadas = 12;}
			if(Casas2[0][2] == 'O' && Casas2[1][2] == 'O' && Casas2[2][2] == 'O') {ContJogadas = 12;}
			if(Casas2[0][0] == 'O' && Casas2[1][1] == 'O' && Casas2[2][2] == 'O') {ContJogadas = 12;}
			if(Casas2[0][2] == 'O' && Casas2[1][1] == 'O' && Casas2[2][0] == 'O') {ContJogadas = 12;}
		}while(ContJogadas <=9);
		tabuleiro(Casas2);
		if(ContJogadas == 10) { // mostrar resultado do jogo
			printf("Jogo empatado\n");
		}
		if(ContJogadas == 11) {
				printf("Jogador X venceu\n");
				PontosX = PontosX++;
		}
		if(ContJogadas == 12) {
				printf("Jogador O venceu\n");
				PontosO = PontosO++;
		}
	
		printf("Deseja jogar novamente? [s-n] \n");
		scanf("%s", &Resposta); // %s => serve para strings
	}while(Resposta == 's');
return 0;
}







