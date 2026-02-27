/*
====================================
   SISTEMA DE GERENCIAMENTO
====================================

1 - Cadastrar
2 - Editar
3 - Remover
4 - Listar
0 - Sair

Escolha uma opção:
*/

#include <iostream>
#include <string>
#include "Sistema.hpp" 


//inicializando o total de alunos e o limite 
int Sistema::total_Alunos = 0;

/*
====================================
   SISTEMA DE ALUNOS COM PONTEIROS
====================================
*/
void Sistema::cad_Aluno(){

   //verificando o espaco no array
   if(total_Alunos < 101){

      //lendo os dados do usuario 
      std::string Nome;
      std::string Matricula;
      int dia, mes, ano;

      std::cout << "" << std::endl;
      std::cout << "Matricula: " << std::endl;
      std::cin >> Matricula;
      std::cout << "" << std::endl;

      std::cout << "Nome: " << std::endl;
      std::cin >> Nome;
      std::cout << "" << std::endl;

      std::cout << "Data de nascimento" << std::endl;
      std::cout << "Dia: " << std::endl;
      std::cin >> dia;
      std::cout << "" << std::endl; 

      std::cout << "Mes: " << std::endl;
      std::cin >> mes;
      std::cout << "" << std::endl;

      std::cout << "Ano: " << std::endl;
      std::cin >> ano;
      std::cout << "" << std::endl;

      //criando o objeto Aluno
      Aluno* novo_Aluno = new Aluno(Matricula, Nome, dia, mes, ano);

      //armazenando no array
      alunos[total_Alunos] = novo_Aluno;

      total_Alunos++;

      std::cout << "Aluno cadastrado com sucesso!" << std::endl;
      std::cout << "" << std::endl;

   }else{
      std::cout << "Limite maximo de alunos atingido." << std::endl;
      std::cout << "" << std::endl;
   };
};

void Sistema::editar_Aluno(std::string nome_do_aluno){
   for(int i = 0; i < total_Alunos; i++){
      bool encontrado = false;//para saber se o aluno foi encontrado

      //verificando se o aluno esta na lista de alunos
      if(alunos[i]->getNome() == nome_do_aluno){
         encontrado = true;

         //variaveis para fazer alteracoes cadastrais
         int opcao;
         std::string novo_Nome;
         int novo_Dia, novo_Mes, novo_Ano;

         std::cout << "[1]-Nome\n [2]-Data de nascimento\n" << std::endl;
         std::cout << "Qual opcao deseja: " << std::endl;
         std::cin >> opcao;
         std::cout << "" << std::endl;

         if(opcao == 1){
            std::cout << "Nome: " << std::endl;
            std::cin >> novo_Nome;

            alunos[i]->setNome(novo_Nome);

            std::cout << "Nome mudado com sucesso!" << std::endl;
            std::cout << "" << std::endl;
            break;

         }else if(opcao == 2){
            std::cout << "Dia: " << std::endl;
            std::cin >> novo_Dia;

            std::cout << "Mes: " << std::endl;
            std::cin >> novo_Mes;

            std::cout << "Ano: " << std::endl;
            std::cin >> novo_Ano;
            std::cout << "" << std::endl;

            alunos[i]->setData(novo_Dia, novo_Mes, novo_Ano);

            std::cout << "Data alterada com sucesso!" << std::endl;
            std::cout << "" << std::endl;
            break;

         }else{
            std::cout << "Digite uma opcao valida." << std::endl;
            std::cout << "" << std::endl;
            break;
         };
      };

   if(encontrado = false){
      std::cout << "Aluno nao encontrado." << std::endl;
      std::cout << "" << std::endl;
   };

   };
};

void Sistema::remover_Aluno(std::string nome_do_aluno){
   for(int i = 0; i < total_Alunos; i++){
      //verificando se o aluno esta na lista de alunos
      if(alunos[i]->getNome() == nome_do_aluno){
         delete alunos[i];

         // desloca os próximos elementos
         for(int j = i; j < total_Alunos - 1; j++){
               alunos[j] = alunos[j + 1];
         };

         std::cout << "Aluno removido com sucesso." << std::endl;
         std::cout << "" << std::endl;

         total_Alunos--;
         break;
      }else{
         std::cout << "Aluno nao encontrado." << std::endl;
         std::cout << "" << std::endl;
         break;
      };
   };
};

void Sistema::listar_Aluno(){
   std::cout << "=========Lista de Alunos==========" << std::endl;
   for(int i = 0; i < total_Alunos; i++){
      std::cout << " - " << alunos[i]->getNome() << std::endl;
   };
};

/*
====================================
  SISTEMA DE LIVROS COM REFERENCIA
====================================
*/







/*
====================================
         SISTEMA COMPLETO
====================================
*/
void Sistema::menu(){
   int opcao;
   std::cout << "[1]-Aluno\n [2]-Livro\n" << std::endl;
   std::cout << "Voce deseja gerenciar aluno ou livro: " << std::endl;
   std::cin >> opcao;

   if(opcao = 1){
      //menu de aluno 

   }else if(opcao = 2){

   }else{
      std::cout << "Opcao invalida." << std::endl;
   };
};