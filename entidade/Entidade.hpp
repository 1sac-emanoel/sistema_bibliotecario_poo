#ifndef ENTIDADE_HPP
#define ENTIDADE_HPP
#include <string>

class Aluno{
    private:
        std::string matricula; 
        std::string nome;
        bool emprestimo; 

    public:
        struct Data
        {
            int dia, mes, ano;
        };
    
    private:
        Data data_nascimento;
        
    public:
        Aluno(std::string m, std::string n, bool a = false, int d, int me, int an)
            : matricula(m), nome(n), emprestimo(a), data_nascimento{d, me, an} {};

        
        std::string getMatricula();
        std::string getNome();
        bool getEmprestimo();
        Data getData();

        void setEmprestimo(bool pegou_emprestado);
        void setNome(std::string name);
        void setData(int d, int me, int an);
        
};

class Livro{

    private:
        std::string  id_livro;
        std::string titulo;
        std::string autor;
        std::string ano;
        bool disponivel = true;

    public:
        void exibir_dados_livro(std::string nome_livro);
        void emprestar_livro(std::string id, std::string nome_aluno);
};


#endif