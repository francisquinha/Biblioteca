
#ifndef SRC_ADMINISTRADOR_H_
#define SRC_ADMINISTRADOR_H_

#include "Funcionario.h"

class Funcionario;

/**
 * @brief Administrador do sistema informatico
 *
 * Funciona como uma especie de gerente da Biblioteca. Tem acesso a todas as funcoes dos outros utilizadores.
 * E o unico que pode adicionar e remover funcionarios, promover e despromover e adicionar utilizadores
 * ao sistema informatico.
 * Na pratica esta classe apenas e utilizada para criar um administrador com ID = 0 e nome = Administrador.
 **/
class Administrador: public Funcionario {
public:

	/**
	 * @brief Construtor de Administrador
	 *
	 * @param id codigo de identificacao do administrador
	 * @param nom nome do administrador
	 **/
	Administrador(long id, std::string nom);

	/**
	 * @brief Funcao de escrita de Administrador
	 *
	 * Nao faz nada, apenas existe para que a funcao virtual escreve na classe funcionario a chame,
	 * em vez de colocar o administrador no ficheiro dos funcionarios
	 *
	 * @param ficheiro_fc nome do ficheiro dos funcionarios
	 * @param ficheiro_sp nome do ficheiro dos supervisores
	 **/
	void escreve(std::string ficheiro_fc, std::string ficheiro_sp);
};

#endif /* SRC_ADMINISTRADOR_H_ */
