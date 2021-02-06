#include <stdio.h> //Biblioteca com funções de entrada e saída de dados
#include <stdlib.h> //Biblioteca com funções do sistema operacional
#include <locale.h> //Permite que altera a localidade para a localidade padrão do sistema operacional
#include<windows.h> //Biblioteca com funções na API do Windows, todas as macros comuns usadas pelos programadores do Windows e todos os tipos de dados usados pelas várias funções e subsistemas.

FILE* file; //ponteiro de arquivo como cria variável ponteiro para o arquivo

void LerArquivo() {
	char texto [6000]; //variável do tipo string
	file = fopen("texto1.txt", "r+"); //Abre um arquivo 1.txt para LEITURA
	while (fgets(texto, 5999, file) != NULL) { //enquanto não for fim de arquivo o looping será executado e será impresso o texto
		printf("%s", texto); //Função que mostra na tela uma mensagem
	} //fim do while
	if (file == NULL) { //Se houve erro na abertura
		printf("Erro ao abrir no arquivo...\n"); //Função que mostra na tela uma mensagem
	} //fim do if
	fclose(file); //fclose fecha o arquivo
} //fim da função LerArquivo

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
		system("pause"); //Envia comando para o sistema operacional solicitando parada de execução do programa
	}fclose(file);
}

int main() { //função main inicia a execução do programa
	setlocale(LC_ALL, "Portuguese"); //Utilizando caracteres e acentuação da língua portuguesa
	system("title Filme Homem Aranha em ASCII"); //para colocar um título na janela principal
	system("mode 100, 300"); //O modo de tela na janela com 100 de largura e 300 altura 
	printf("O pequeno filme começa em segundos...\n"); //Função que mostra na tela uma mensagem
	Sleep(200); //O tempo que o programa 'dormirá'
	int x = 0; //inicialização
	while (x < 10) { //fase de processamento
		LerArquivo(); //função LerArquivo que lê no programa
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
	char letra; //variável em que ser informado pelo usuário
	scanf("%c", &letra); //lê uma letra (string)
	if (letra == 'S' || letra == 's') { //Se o usuário digite S ou s, o programa executa...
		printf("Dê uma olhada nisso!\nCopie aqui no link até colar no seu navegador\n\nhttp://www.romanm.ch/wp-content/uploads/ascii-movies/ascii-spiderman1.htm");
	} //Se não, não exibiu o link na tela...
	printf("\n\nObrigado pelo seu tempo!\n\a\tFernando Caetano\n\nSegue @FerdiCayet"); // =]
	return 0; //indica que o programa foi concluído com sucesso
} //fim da função main
