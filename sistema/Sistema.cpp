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
   if(total_Alunos < 100){
      
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

int Sistema::total_Livros = 0;

void Sistema::adicionar_Livro(){

   //verificando espaco no array
   if(total_Livros < 100){
      
      //definindo dados do livro 
      std::string idLivro;
      std::string Titulo;
      std::string Autor;
      std::string Ano;

      std::cout << "Id do livro: " << std::endl;
      std::cin >> idLivro;
      std::cout << "" << std::endl;

      std::cout << "Titulo do livro: " << std::endl;
      std::cin >> Titulo;
      std::cout << "" << std::endl;

      std::cout << "Autor do livro: " << std::endl;
      std::cin >> Autor;
      std::cout << "" << std::endl;

      std::cout << "Ano de publicacao do livro: " << std::endl;
      std::cin >> Ano ;
      std::cout << "" << std::endl; 

      Livro* novoLivro = new Livro(idLivro, Titulo, Autor, Ano);

      livros[total_Livros] = novoLivro;

      total_Livros++;

      std::cout << "Livro registrado com sucesso!" << std::endl;
      std::cout << "" << std::endl;

   }else{
      std::cout << "Limite maximo de livros atingido." << std::endl;
      std::cout << "" << std::endl;
   };
};

void Sistema::editar_Livro( std::string& nome_Livro){

   bool encontrado = false;

   for( int i = 0; i < total_Livros; i++){

      if(nome_Livro == livros[i]->getTitulo()){
         encontrado = true;
         int opcao;

         std::cout << "[1]-Titulo\n [2]-Autor\n [3]-Ano\n" << std::endl;
         std::cout << "Qual opcao voce deseja: " << std::endl;
         std::cin >> opcao;
         std::cout << "" << std::endl;

         switch(opcao){
            case 1:{
               std::string novoTitulo;
               std::cout << "Titulo: " << std::endl;
               std::cin >> novoTitulo;
               std::cout << "" << std::endl;

               livros[i]->setTitulo(novoTitulo);

               std::cout << "Mudanca de titulo feita com sucesso!" << std::endl;
               std::cout << "" << std::endl;
               break;
            }
            case 2:{
               std::string novoAutor;
               std::cout << "Autor " << std::endl;
               std::cin >> novoAutor;
               std::cout << "" << std::endl;

               livros[i]->setAutor(novoAutor);

               std::cout << "Mudanca de autor feita com sucesso!" << std::endl;
               std::cout << "" << std::endl;
               break;
            }
            case 3:{
               std::string novoAno;
               std::cout << "Ano: " << std::endl;
               std::cin >> novoAno;
               std::cout << "" << std::endl;

               livros[i]->setAno(novoAno);

               std::cout << "Mudanca de ano feita com sucesso!" << std::endl;
               std::cout << "" << std::endl;
               break;
            }
            default:
               std::cout << "Opcao incorreta." << std::endl;
               std::cout << "" << std::endl;
               break;
         };
      };
   };
   if(encontrado == false){
      std::cout << "Livro não encontrado." << std::endl;
      std::cout << "" << std::endl;
   };
};

//implementacao de entidade Livro

void Sistema::exibir_dados_livro(std::string& nome_livro){
   bool encontrou = false;

   for(int i = 0; i < total_Livros; i++){
        
      if(nome_livro == livros[i]->getTitulo()){
            encontrou = true;
            std::cout << "Livro encontrado!" << std::endl;
            std::cout << "" << std::endl;
         };
      };

   if(encontrou == false){
      std::cout << "Livro não encontrado." << std::endl;
   };

};

void Sistema::emprestar_livro(std::string& id, std::string& nome_aluno){
   
   bool encontrou = false;//encontrou o id do livro 

   for(int i = 0; i < total_Livros; i++){
      if(id == livros[i]->getIdLivro()){
         encontrou = true;   
         if(livros[i]->getDisponivel() == true){
            livros[i]->setDisponivel(false);
            std::cout << "Livro emprestado para " << nome_aluno << "\n";
         }else{
            std::cout << "Livro indisponivel.\n";
         };
      };
   };
   if(encontrou == false){
      std::cout << "Livro nao encontrado.\n";
   };
};

/*
====================================
         SISTEMA COMPLETO
====================================
*/
void Sistema::menu(){

   int opcao = -1;

   while(opcao != 0){

      std::cout << "==============================" << std::endl;
      std::cout << "     SISTEMA DA BIBLIOTECA    " << std::endl;
      std::cout << "==============================" << std::endl;
      std::cout << "[1] - Gerenciar Alunos" << std::endl;
      std::cout << "[2] - Gerenciar Livros" << std::endl;
      std::cout << "[3] - Emprestar Livro" << std::endl;
      std::cout << "[0] - Sair" << std::endl;
      std::cout << "" << std::endl;

      std::cout << "Escolha uma opcao: ";
      std::cin >> opcao;
      std::cout << "" << std::endl;

      switch(opcao){

         case 1:{ // MENU ALUNOS

               int opAluno;

               std::cout << "====== MENU ALUNO ======" << std::endl;
               std::cout << "[1] - Cadastrar Aluno" << std::endl;
               std::cout << "[2] - Editar Aluno" << std::endl;
               std::cout << "[3] - Remover Aluno" << std::endl;
               std::cout << "[4] - Listar Alunos" << std::endl;
               std::cout << "" << std::endl;

               std::cout << "Escolha uma opcao: ";
               std::cin >> opAluno;
               std::cout << "" << std::endl;

               if(opAluno == 1){
                  cad_Aluno();

               }else if(opAluno == 2){
                  std::string nome;
                  std::cout << "Digite o nome do aluno: ";
                  std::cin >> nome;
                  std::cout << "" << std::endl;

                  editar_Aluno(nome);

               }else if(opAluno == 3){
                  std::string nome;
                  std::cout << "Digite o nome do aluno: ";
                  std::cin >> nome;
                  std::cout << "" << std::endl;

                  remover_Aluno(nome);

               }else if(opAluno == 4){
                  listar_Aluno();

               }else{
                  std::cout << "Opcao invalida." << std::endl;
                  std::cout << "" << std::endl;
               };

               break;
         };

         case 2:{ // MENU LIVROS

               int opLivro;

               std::cout << "====== MENU LIVRO ======" << std::endl;
               std::cout << "[1] - Adicionar Livro" << std::endl;
               std::cout << "[2] - Editar Livro" << std::endl;
               std::cout << "[3] - Exibir Livro" << std::endl;
               std::cout << "" << std::endl;

               std::cout << "Escolha uma opcao: ";
               std::cin >> opLivro;
               std::cout << "" << std::endl;

               if(opLivro == 1){
                  adicionar_Livro();

               }else if(opLivro == 2){
                  std::string titulo;
                  std::cout << "Digite o titulo do livro: ";
                  std::cin >> titulo;
                  std::cout << "" << std::endl;

                  editar_Livro(titulo);

               }else if(opLivro == 3){
                  std::string titulo;
                  std::cout << "Digite o titulo do livro: ";
                  std::cin >> titulo;
                  std::cout << "" << std::endl;

                  exibir_dados_livro(titulo);

               }else{
                  std::cout << "Opcao invalida." << std::endl;
                  std::cout << "" << std::endl;
               };

               break;
         };

         case 3:{ // EMPRESTAR LIVRO

               std::string idLivro;
               std::string nomeAluno;

               std::cout << "Digite o ID do livro: ";
               std::cin >> idLivro;
               std::cout << "" << std::endl;

               std::cout << "Digite o nome do aluno: ";
               std::cin >> nomeAluno;
               std::cout << "" << std::endl;

               emprestar_livro(idLivro, nomeAluno);

               break;
         };

         case 0:
               std::cout << "Encerrando sistema..." << std::endl;
               break;

         default:
               std::cout << "Opcao invalida." << std::endl;
               std::cout << "" << std::endl;
               break;
      };
   };
};