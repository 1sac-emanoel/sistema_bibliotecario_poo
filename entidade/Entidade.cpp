#include <iostream>
#include <string>
#include "Entidade.hpp"


//================
//Classe aluno
//===============

//definindo os getters
std::string Aluno::getMatricula(){
    return matricula;
};

std::string Aluno::getNome(){
    return nome;
};

bool Aluno::getEmprestimo(){
    return emprestimo;
};

Aluno::Data Aluno::getData(){
    return data_nascimento;
};


//definindo os setters
void Aluno::setEmprestimo(bool pegou_emprestado){
    if(pegou_emprestado == true){
        emprestimo == pegou_emprestado;
    };
};

void Aluno::setNome(std::string name){
    nome = name;
};

void Aluno::setData(int d, int me, int an){
    if(d > 0 && d <= 31 && me > 0 && me <= 12){
        data_nascimento.dia = d;
        data_nascimento.mes = me;
        data_nascimento.ano = an;
    }else{
        std::cout << "Data inválida." << std::endl;
    }
};

//================
//Classe livro
//===============
void Livro::exibir_dados_livro(std::string nome_livro){
    if(nome_livro == titulo){
        titulo = nome_livro;
    }else{
        std::cout << "Livro não encontrado." << std::endl;
    };
};

void Livro::emprestar_livro(std::string id, std::string nome_aluno){
    if( id == id_livro && disponivel == true){
        disponivel = false;
        std::string nome_emprestado_para = nome_aluno;
        std::cout << "Livro emprestado para " << nome_aluno << "\n";
    } else {
        std::cout << "Livro indisponivel.\n";
    };
    
};

