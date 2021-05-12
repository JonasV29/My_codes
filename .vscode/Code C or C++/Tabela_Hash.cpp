#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<locale.h>
//estou implementando o tamanho da tabela
#define M 18

typedef struct NumItem{
	int codigo;
	char nome[15];
}Produto;
// criação das estruturas em um vetor de 18 posições
Produto hashArray [M];
//a função iniciar ,avisa que começou a tabela com valor -1
void iniciar() {
	int i;
	for(i=0; i < M; i++) {
		hashArray[i].codigo = -1;
		
	}	
}
    //função de espalhamento
    int gerarCodigoHash(int chave) {
    	return chave % M;
	}
//função para ler e retornar um produto
Produto lerProduto(){
	Produto p;
	printf("Digite um código: ");
	scanf("%d",&p.codigo);
	scanf("%*c");
	printf("Digite o nome do produto: ");
	fgets(p.nome, 15, stdin);
	return p;
}

//inserir uma pessoa da tabela
void inserir() {
	Produto pro = lerProduto();
	int indice = gerarCodigoHash(pro.codigo);
	while(hashArray[indice].codigo!=-1)
	   indice = gerarCodigoHash(indice + 1);
	   hashArray[indice] = pro;
}
//para buscar um elemento ,precisamos de uma função de busca
  Produto* buscar(int chave) {
  	int indice = gerarCodigoHash(chave);
  	while(hashArray[indice].codigo != -1) {
  		if(hashArray[indice].codigo == chave)
  		return &hashArray[indice];
  		   else
  		       indice = gerarCodigoHash(indice +1);
	  }
  	    return NULL;
  }
  //criando uma função para imprimir a tabela hash
  void imprimir() {
  	int i;
  	printf("\n***********Minha Tabela***************\n");
  	for(i=0; i< M; i++) {
  		if(hashArray[i].codigo != -1)
  		printf("%2d = %3d \t %s",i , hashArray[i].codigo, hashArray[i].nome);
  		  else
  		     printf("%d = \n", i);
	  }
	  printf("\n************************************\n");
  }
  // criando a função remover na tabela
  Produto* remover(int chave){
     int indice = gerarCodigoHash(chave);
	 while(hashArray[indice].codigo != -1) {
	 	if(hashArray[indice].codigo == chave)
	 	     hashArray[indice].codigo = -1;
	 	    
	      else 
	         indice = gerarCodigoHash(chave + 1);
	 }	
	 return &hashArray[indice];
  }
  
  
  int main() {
  	int op,chave;
  	Produto *b;
  	Produto *z;
  	setlocale(LC_ALL,"Portuguese");
  	
  	
  	iniciar();
  	
  	do{
  		printf("1- Inserir\n2- Buscar \n3-Imprimmir\n4-remover\n0-Sair\n");
  		scanf("%d",&op);
  		
  		switch(op) {
  			case 0: 
			  printf("Saindo.....\n");
			  break;
			case 1:
				inserir();
			   break;
			case 2:
				printf("Digite o código que quer buscar:");
				scanf("%d", &chave);
				b = buscar(chave);
				if(b)
				    printf("\n\tCódigo: %d \tNome: %s\n",b->codigo,b->nome);
				   else 
				       printf("\nCodigo nao encontrado!\n");
		       break;
		    case 3:
		    	imprimir();
		    	break;
		    case 4: 
		       printf("Digite o código de produto você queira remover: ");
		       scanf("%d", &chave);
		       z = remover(chave);
		       if(z)
		           printf("\n\tCódigo: %d \tNome: %s\n", z->codigo, z->nome);
		        else
		           printf("\nProduto não encontrado!\n");
		        break;
		    default:
		    	printf("opção invalida!\n");
		  }
  		
  		
	  } while(op!= 0);
	  
	  return 0;
  }