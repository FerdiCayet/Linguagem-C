#include <stdio.h> //Biblioteca com fun��es de entrada e sa�da de dados
#include <stdlib.h> //Biblioteca com fun��es do sistema operacional
#include <locale.h> //Permite que altera a localidade para a localidade padr�o do sistema operacional
#include<windows.h> //Biblioteca com fun��es na API do Windows, todas as macros comuns usadas pelos programadores do Windows e todos os tipos de dados usados pelas v�rias fun��es e subsistemas.

FILE* file; //ponteiro de arquivo como cria vari�vel ponteiro para o arquivo

void LerArquivo() {
	char texto [6000]; //vari�vel do tipo string
	file = fopen("texto1.txt", "r+"); //Abre um arquivo 1.txt para LEITURA
	while (fgets(texto, 5999, file) != NULL) { //enquanto n�o for fim de arquivo o looping ser� executado e ser� impresso o texto
		printf("%s", texto); //Fun��o que mostra na tela uma mensagem
	} //fim do while
	if (file == NULL) { //Se houve erro na abertura
		printf("Erro ao abrir no arquivo...\n"); //Fun��o que mostra na tela uma mensagem
	} //fim do if
	fclose(file); //fclose fecha o arquivo
} //fim da fun��o LerArquivo

void LerArquivo2() {
	char texto [6000];
	file = fopen("texto2.txt", "r+");
	while (fgets(texto, 5999, file) != NULL) {
		printf("%s", texto);
	}if (file == NULL) {
		printf("Erro ao abrir no arquivo...\n");
	}fclose(file);
}

void LerArquivo3() {
	char texto [6000];
	file = fopen("texto3.txt", "r+");
	while (fgets(texto, 5999, file) != NULL) {
		printf("%s", texto);
	}if (file == NULL) {
		printf("Erro ao abrir no arquivo...\n");
	}fclose(file);
}

void LerArquivo4() {
	char texto [6000];
	file = fopen("texto4.txt", "r+");
	while (fgets(texto, 5999, file) != NULL) {
		printf("%s", texto);
	}if (file == NULL) {
		printf("Erro ao abrir no arquivo...\n");
	}fclose(file);
}

void LerArquivo5() {
	char texto [6000];
	file = fopen("texto5.txt", "r+");
	while (fgets(texto, 5999, file) != NULL) {
		printf("%s", texto);
	}if (file == NULL) {
		printf("Erro ao abrir no arquivo...\n");
	}fclose(file);
}

void LerArquivo6() {
	char texto [6000];
	file = fopen("texto6.txt", "r+");
	while (fgets(texto, 5999, file) != NULL) {
		printf("%s", texto);
	}if (file == NULL) {
		printf("Erro ao abrir no arquivo...\n");
	}fclose(file);
}

void LerArquivo7() {
	char texto [6000];
	file = fopen("texto7.txt", "r+");
	while (fgets(texto, 5999, file) != NULL) {
		printf("%s", texto);
	}if (file == NULL) {
		printf("Erro ao abrir no arquivo...\n");
	}fclose(file);
}

void LerArquivo8() {
	char texto [6000];
	file = fopen("texto8.txt", "r+");
	while (fgets(texto, 5999, file) != NULL) {
		printf("%s", texto);
	}if (file == NULL) {
		printf("Erro ao abrir no arquivo...\n");
	}fclose(file);
}

void LerArquivo9() {
	char texto [6000];
	file = fopen("texto9.txt", "r+");
	while (fgets(texto, 5999, file) != NULL) {
		printf("%s", texto);
	}if (file == NULL) {
		printf("Erro ao abrir no arquivo...\n");
	}fclose(file);
}

void LerArquivo10() {
	char texto [6000];
	file = fopen("texto10.txt", "r+");
	while (fgets(texto, 5999, file) != NULL) {
		printf("%s", texto);
	}if (file == NULL) {
		printf("Erro ao abrir no arquivo...\n");
	}fclose(file);
}

void LerArquivo11() {
	char texto [6000];
	file = fopen("texto11.txt", "r+");
	while (fgets(texto, 5999, file) != NULL) {
		printf("%s", texto);
	}if (file == NULL) {
		printf("Erro ao abrir no arquivo...\n");
		system("pause"); //Envia comando para o sistema operacional solicitando parada de execu��o do programa
	}fclose(file);
}

int main() { //fun��o main inicia a execu��o do programa
	setlocale(LC_ALL, "Portuguese"); //Utilizando caracteres e acentua��o da l�ngua portuguesa
	system("title Filme Homem Aranha em ASCII"); //para colocar um t�tulo na janela principal
	system("mode 100, 300"); //O modo de tela na janela com 100 de largura e 300 altura 
	printf("O pequeno filme come�a em segundos...\n"); //Fun��o que mostra na tela uma mensagem
	Sleep(200); //O tempo que o programa 'dormir�'
	int x = 0; //inicializa��o
	while (x < 10) { //fase de processamento
		LerArquivo(); //fun��o LerArquivo que l� no programa
		Sleep(120); 
		system("cls"); //Limpando a tela
		LerArquivo2();
		Sleep(120);
		system("cls");
		LerArquivo3();
		Sleep(120);
		system("cls");
		LerArquivo4();
		Sleep(120);
		system("cls");
		LerArquivo5();
		Sleep(120);
		system("cls");
		LerArquivo6();
		Sleep(120);
		system("cls");
		LerArquivo7();
		Sleep(120);
		system("cls");
		LerArquivo8();
		Sleep(120);
		system("cls");
		LerArquivo9();
		Sleep(120);
		system("cls");
		LerArquivo10();
		Sleep(120);
		system("cls");
		LerArquivo11();
		Sleep(120);
		system("cls");
		x++; //incrementa
	} //fim do while
	printf("Gostou isso? (s/n) ");
	char letra; //vari�vel em que ser informado pelo usu�rio
	scanf("%c", &letra); //l� uma letra (string)
	if (letra == 'S' || letra == 's') { //Se o usu�rio digite S ou s, o programa executa...
		printf("D� uma olhada nisso!\nCopie aqui no link at� colar no seu navegador\n\nhttp://www.romanm.ch/wp-content/uploads/ascii-movies/ascii-spiderman1.htm");
	} //Se n�o, n�o exibiu o link na tela...
	printf("\n\nObrigado pelo seu tempo!\n\a\tFernando Caetano\n\nSegue @FerdiCayet"); // =]
	return 0; //indica que o programa foi conclu�do com sucesso
} //fim da fun��o main
