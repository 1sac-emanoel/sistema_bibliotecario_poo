# 📚 Sistema de Biblioteca em C++

## 📌 1. Visão Geral do Projeto

O Sistema de Biblioteca é uma aplicação em modo console desenvolvida em
C++ que permite:

-   Gerenciar alunos
-   Gerenciar livros
-   Realizar empréstimos
-   Editar e remover registros
-   Listar dados de cadastrados

O projeto utiliza: 
- Programação Orientada a Objetos (POO) 
- Separação em múltiplos arquivos 
- Uso de ponteiros (new / delete) 
- Uso dereferências 
- Encapsulamento 
- Organização modular

------------------------------------------------------------------------

## 🏗 2. Estrutura de Diretórios

/ProjetoBiblioteca 
│ ├── main.cpp 
│ 
├── entidade/ 
│ ├── Entidade.hpp 
│
└── Entidade.cpp 
│ ├── sistema/ 
│ ├── Sistema.hpp 
│ └── Sistema.cpp │
└── README.md

------------------------------------------------------------------------

## 📂 3. Documentação Arquivo por Arquivo

### 🔹 main.cpp

Responsável por iniciar o sistema.

Função: 
- Instancia a classe Sistema 
- Chama o menu principal

------------------------------------------------------------------------

### 🔹 entidade/Entidade.hpp

Contém a declaração das classes:

#### Classe Aluno

Atributos: 
- matricula 
- nome 
- data_nascimento (struct Data)

Métodos: 
- getMatricula() 
- getNome() 
- getData() 
- setNome() 
- setData()

#### Classe Livro

Atributos: 
- id_livro 
- titulo 
- autor 
- ano 
- disponivel

Métodos getters: 
- getIdLivro() 
- getTitulo() 
- getAutor() 
- getAno() 
- getDisponivel() 

Métodos setters: 
- setTitulo() 
- setAutor() 
- setAno() 
- setDisponivel()

------------------------------------------------------------------------

### 🔹 entidade/Entidade.cpp

Implementação dos métodos declarados no arquivo Entidade.hpp.

Responsável por: 
- Implementar getters e setters 
- Validar dados básicos 
- Controlar estado de disponibilidade do livro

------------------------------------------------------------------------

### 🔹 sistema/Sistema.hpp

Declaração da classe Sistema.

Responsável por: 
- Armazenar alunos (array de ponteiros) 
- Armazenar livros (array de ponteiros) 
- Controlar a lógica do sistema

Principais métodos: 
- menu() 
- cad_Aluno() 
- editar_Aluno() 
- remover_Aluno() 
- listar_Aluno() 
- adicionar_Livro() 
- editar_Livro() 
- exibir_dados_livro() 
- emprestar_livro()

------------------------------------------------------------------------

### 🔹 sistema/Sistema.cpp

Implementação da lógica do sistema.

Funcionalidades: 
- Cadastro de alunos 
- Edição e remoção de alunos 
- Cadastro de livros 
- Edição de livros 
- Empréstimo de livros 
- Controle de disponibilidade

Utiliza: 
- Alocação dinâmica de memória (new) 
- Liberação de memória(delete) 
- Arrays fixos 
- Variáveis estáticas para controle de quantidade

------------------------------------------------------------------------

## 🔄 Fluxo do Programa

1.  Usuário executa o sistema.
2.  Menu principal é exibido.
3.  Usuário escolhe uma opção.
4.  Sistema executa a operação.
5.  Retorna ao menu até o usuário sair.

------------------------------------------------------------------------

## ⚙️ Compilação

Linux / Mac:

g++ main.cpp sistema/Sistema.cpp entidade/Entidade.cpp -o biblioteca
./biblioteca

Windows:

g++ main.cpp sistema/Sistema.cpp entidade/Entidade.cpp -o biblioteca.exe

------------------------------------------------------------------------

## ⚠️ Limitações

-   Dados não são persistidos
-   Arrays possuem tamanho fixo
-   Interface apenas em console

------------------------------------------------------------------------

