#include <iostream>
using namespace std;

class No
{
private:
	No *esq, *dir;
	int chave;

public:
	No(int chave)
	{
		this->chave = chave;
		esq = NULL;
		dir = NULL;
	}

	int getChave()
	{
		return chave;
	}
	

	No* getEsq()
	{
		return esq;
	}

	No* getDir()
	{
		return dir;
	}

	void setEsq(No *no)
	{
		esq = no;
	}

	void setDir(No *no)
	{
		dir = no;
	}
};

class Arvore
{
private:
	No *raiz;

public:
	Arvore()
	{
		raiz = NULL;
	}

	void inserir(int chave)
	{
		if(raiz == NULL) // verifica se a Arvore esta vazia
			raiz = new No(chave); // cria um novo no
		else
			inserirAux(raiz, chave);
	}

	void inserirAux(No *no, int chave)
	{
		// se for menor, entao insere a esquerda
		if(chave < no->getChave())
		{
			// verifica se a esquerda eh nulo
			if(no->getEsq() == NULL)
			{
				No *novo_no = new No(chave);
				no->setEsq(novo_no); // seta o novo_no a esquerda
			}
			else
			{
				// sen?o, continua percorrendo recursivamente
				inserirAux(no->getEsq(), chave);
			}
		}
		// se for maior, entao insere a direita
		else if(chave > no->getChave())
		{
			// verifica se a direita eh nulo
			if(no->getDir() == NULL)
			{
				No *novo_no = new No(chave);
				no->setDir(novo_no); // seta o novo_no a direita
			}
			else
			{
				// senao, continua percorrendo recursivamente
				inserirAux(no->getDir(), chave);
			}
		}
		// se for igual, nao vai inserir
		// n?o pode existir 2 chaves iguais
	}

	No* getRaiz()
	{
		return raiz;
	}

	void emOrdem(No* no)
	{
		if(no != NULL)
		{
			emOrdem(no->getEsq());
			cout << no->getChave() << " ";
			emOrdem(no->getDir());
		}
	}
};

int main(int argc, char *argv[])
{
	Arvore arv;

	// insere as chaves
	arv.inserir(8);
	arv.inserir(3);
	arv.inserir(10);
	arv.inserir(14);
	arv.inserir(13);
	arv.inserir(1);
	arv.inserir(6);
	arv.inserir(4);
	arv.inserir(7);

	// percorre em ordem iniciando da raiz
	cout << "Percorrendo em ordem...\n";
	arv.emOrdem(arv.getRaiz());

	void sair(){
	exit(0);
	}

	int Print_Em_Ordem(){ 
		//esquerda - raiz - direita
			if(no != NULL)
		{
			Print_Em_Ordem(no->getEsq());
			cout << no->getChave() << " ";
			Print_Em_Ordem(no->getDir());
		}
	}


		int Print_Pre_Ordem(){
		//raiz - esquerda - direita
			if(no != NULL)
		{
			cout << no->getChave() << " ";
			Print_Pre_Ordem(no->getEsq());
			Print_Pre_Ordem(no->getDir());
		}
	}
	
		int Print_Pos_Ordem(){
		//esquerda - direita - raiz		
			if(no != NULL)
		{
			Print_Pos_Ordem(no->getEsq());
			Print_Pos_Ordem(no->getDir());
			cout << no->getChave() << " ";
		}
	}
	int count = 0;
	int contEl(){ 
			if(no != NULL)
		{
			contEl(no->getEsq());
			cont = count + 1;
			contEl(no->getDir());
			return count;
		}
		
	int meno_el(){
		if(getEsq() != NULL)
		{
		meno_el(no->getEsq());
		}
		else()
		{
			return no;
		}
		
	}
	int maio_el(){
		if(maio_elr() != NULL)
		{
		meno_el(no->maio_el());
		}
		else()
		{
			return no;
		}
		
	}
	
	int local_Val(int n){	
		if(no != n)
		{
			Print_Em_Ordem(no->local_Val());
		}
		if(no != n){
			Print_Em_Ordem(no->local_Val());
		}
	}
		count = 0;
		int local_Val_ex(int n){	
		if(no > n)
		{
			local_Val_ex(no->getEsq());
			count =+ 1;
		}
		if(no < n){
			local_Val_ex(no->getDir());
			count =+ 1;			
		}
		
		if(no == n(){
			return no, count;
		}
	}
	
	int del_no(int n){
		local_Val_ex(n) -> NULL;
	}
	
	return 0;
}
