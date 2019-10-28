#include "Estudante.h"


Estudante::Estudante(string nome_aluno, string nome_pai, string nome_mae, string data_nasc, string endereco,
                     int matricula) {
    this->nome_aluno = nome_aluno;
    this->nome_pai = nome_pai;
    this->nome_mae = nome_mae;
    this->data_nasc = data_nasc;
    this->endereco = endereco;
    this->matricula = matricula;
}

void Estudante::set_nome_aluno(string nome){
    this->nome_aluno = nome;
}

string Estudante::get_nome_aluno(){return nome_aluno;}

void Estudante::set_nome_pai(string nome){
    this->nome_pai = nome;
}

string Estudante::get_nome_pai(){return nome_pai;}

void Estudante::set_nome_mae(string nome){
    this->nome_mae = nome;
}
string Estudante::get_nome_mae(){return nome_mae;}

void Estudante::set_nasc(string data){
    this->data_nasc = data;
}

string Estudante::get_nasc(){return data_nasc;}

void Estudante::set_endereco(string endereco){
    this->endereco = endereco;
}

string Estudante::get_endereco(){return endereco;}

void Estudante::set_matricula(int matricula){
    this->matricula = matricula;
}

int Estudante::get_matricula(){return matricula;}

void Estudante::insere_nota(float nota) {
    notas.push_back(nota);
}

list<float> Estudante::lista_notas() {return notas;}

