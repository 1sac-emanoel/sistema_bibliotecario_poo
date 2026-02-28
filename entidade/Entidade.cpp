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

Aluno::Data Aluno::getData(){
    return data_nascimento;
};


//definindo os setters

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

// getters

std::string Livro::getIdLivro(){
    return id_livro;
}

std::string Livro::getTitulo(){
    return titulo;
}

std::string Livro::getAutor(){
    return autor;
}

std::string Livro::getAno(){
    return ano;
}

bool Livro::getDisponivel(){
    return disponivel;
}


// setters

void Livro::setTitulo(std::string& Titulo){
    titulo = Titulo;
}

void Livro::setAutor(std::string& Autor){
    autor = Autor;
}

void Livro::setAno(std::string& Ano){
    ano = Ano;
}

void Livro::setDisponivel(bool Disponivel){
    disponivel = Disponivel;
}

