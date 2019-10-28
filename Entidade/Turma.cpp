#include "Turma.h"

Turma::Turma(Professor professor, int codigo, int ano){
    this->professor = professor;
    this->codigo = codigo;
    this->ano = ano;
}
void Turma::set_professor(Professor professor){
    this->professor = professor;
}
Professor Turma::get_professor(){return professor;}

list<Estudante> Turma::get_estudantes(){ return estudantes_turma.lista_estudantes();}

void Turma::set_codigo(int codigo){
    this->codigo=codigo;
}
int Turma::get_codigo(){return codigo;}

void Turma::set_ano(int ano){
    this->ano = ano;
}
int Turma::get_ano(){return ano;}

void Turma::insere_estudante(Estudante estudante){
    estudantes_turma.insere(estudante);
}

void Turma::remove_estudante(int matricula) {
    estudantes_turma.remove(matricula);
}

bool Turma::procura_estudante(int matricula, Estudante *estudante) {
    estudantes_turma.pesquisa_altera(matricula, estudante);
}