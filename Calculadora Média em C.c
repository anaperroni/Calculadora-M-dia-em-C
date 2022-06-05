#include <stdio.h>
#include <stdlib.h>

int main (){
	char nome [20], disciplina[20];
	float notA1, notA2, resultadoFinal;
	
	printf("Digite o nome do aluno: ");
	gets(nome);
	
	printf("Digite o nome da disciplina: ");
	gets(disciplina);
	
	printf ("Digite sua nota A2: ");
	scanf ("%f", &notA2);
	
	printf ("Digite sua nota A1: ");
	scanf ("%f", &notA1);
		
	while (notA2 < 0 || notA2 > 5 || notA1 < 0 || notA1 > 5) {
  
	  printf("\nNome do aluno: %s", nome);
	  printf("\n\nNome da Disciplina: %s", disciplina);
	  printf("\n\nO valor das notas nao atendem aos requisitos, digite novamente:");
	  printf("\n\nDigite a nota da A2: ");
	  scanf("%f", &notA2);
	  printf("\nDigite a nota da A1: ");
	  scanf("%f", &notA1);
	}
	
	resultadoFinal = (notA2 + notA1);
	
	printf("\nNome do aluno: %s", nome);
	
	printf("\nNome da disciplina: %s+", disciplina);
	
	if(resultadoFinal >= 6){
		printf("\nParabens! Voce foi aprovado(a). \n");
	} else {
		printf("\nVoce precisa fazer a Avaliacao Final \n\n");
	}
		
	system ("pause");
	return 0;
}

//Ana Julia Perroni Flauzino RGM 2987482-3
//Beatriz Magalhães Gonçalves RGM 30148391
//Marcia Elisa Farias de Andrade RGM 29306159
