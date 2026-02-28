#ifndef ENTIDADE_HPP
#define ENTIDADE_HPP
#include <string>

class Aluno{
    private:
        std::string matricula; 
        std::string nome;

    public:
        struct Data
        {
            int dia, mes, ano;
        };
    
    private:
        Data data_nascimento;
        
    public:
        Aluno(std::string m, std::string n, int d, int me, int an, bool a = false)
            : matricula(m), nome(n), data_nascimento{d, me, an}{};

        std::string getMatricula();
        std::string getNome();
        Data getData();

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
        Livro(std::string id_l, std::string t, std::string au, std::string a, bool livre = true)
            : id_livro(id_l), titulo(t), autor(au), ano(a), disponivel(livre){};

        std::string getIdLivro();
        std::string getTitulo();
        std::string getAutor();
        std::string getAno();
        bool getDisponivel();


        void setTitulo(std::string& Titulo);
        void setAutor(std::string& Autor);
        void setAno(std::string& Ano);
        void setDisponivel(bool Disponivel);

};


#endif