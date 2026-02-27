#ifndef SISTEMA_HPP
#define SISTEMA_HPP
#include <string>
#include "Entidade.hpp"

class Sistema{
    private:
        static const int limite_alunos = 100;
        Aluno* alunos[limite_alunos];
        static int total_Alunos;
    public:
        void menu();

        //!testar essas funções já feitas
        void cad_Aluno(); //ok
        void editar_Aluno(std::string nome_do_aluno); //ok
        void remover_Aluno(std::string nome_do_aluno); //ok
        void listar_Aluno(); //ok
        
        void adicionar_Livro();
        void editar_Livro();
        void remover_Livro();

        void iniciar();
        
};


#endif