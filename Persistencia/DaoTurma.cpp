#include "DaoTurma.h"

void DaoTurma::insere_turma(Professor professor, int codigo, int ano){
    Turma t(professor, codigo, ano);
    turmas.push_back(t);
}

bool DaoTurma::pesquisa(int codigo, Turma *turma){
    list<Turma>::iterator e;
    for(e= turmas.begin(); e!=turmas.end(); e++ ){
        if(e->get_codigo() == codigo){
            *turma = *e;
            return true;
        }
    }
    return false;
}

bool DaoTurma::remove(int codigo){
    Turma t;
    pesquisa(codigo, &t);
    turmas.remove(t);
}

void DaoTurma::altera_dados(int codigo, Professor professor, int ano){
    for(auto it = turmas.rbegin(); it!=turmas.rend(); it++){
        if(it->get_codigo()==codigo){
            it->set_professor(professor);
            it->set_ano(ano);
            return;
        }
    }
}

void DaoTurma::altera_prof(int codigo, Professor professor){
    for(auto it = turmas.rbegin(); it!=turmas.rend(); it++) {
        if (it->get_codigo() == codigo) {
            it->set_professor(professor);
        }
    }
}
void DaoTurma::altra_ano(int codigo, int ano){
    for(auto it = turmas.rbegin(); it!=turmas.rend(); it++) {
        if (it->get_codigo() == codigo) {
            it->set_ano(ano);
        }
    }
}
void DaoTurma::insere_estudante(int codigo, Estudante estudante){
    for(auto it = turmas.rbegin(); it!=turmas.rend(); it++) {
        if (it->get_codigo() == codigo) {
            it->insere_estudante(estudante);
        }
    }
}
void DaoTurma::remove_estudante(int codigo, int matricula){
    for(auto it = turmas.rbegin(); it!=turmas.rend(); it++) {
        if (it->get_codigo() == codigo) {
            it->remove_estudante(matricula);
        }
    }
}
void DaoTurma::procura_estudante(int codigo, int matricula, Estudante *estudante){
    for(auto it = turmas.rbegin(); it!=turmas.rend(); it++) {
        if (it->get_codigo() == codigo) {
            it->procura_estudante(matricula, estudante);
        }
    }
}
list<Turma> DaoTurma::lista_turmas() {return turmas;}