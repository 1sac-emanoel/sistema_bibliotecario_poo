#ifndef SISTEMA_HPP
#define SISTEMA_HPP
#include <string>
#include "Entidade.hpp"

class Sistema{
    private:
        //para armazenar os alunos
        static const int limite_alunos = 100;
        Aluno* alunos[limite_alunos];
        static int total_Alunos;

        //para armazenar os livros
        static const int limite_livros = 100;
        Livro* livros[limite_livros];
        static int total_Livros;

    public:
        void menu();

        void cad_Aluno(); //ok
        void editar_Aluno(std::string nome_do_aluno); //ok
        void remover_Aluno(std::string nome_do_aluno); //ok
        void listar_Aluno(); //ok
        
        void adicionar_Livro();//ok 
        void editar_Livro( std::string& nome_Livro);//ok

        void exibir_dados_livro(std::string& nome_livro);
        void emprestar_livro(std::string& id, std::string& nome_aluno);
        
};


#endif