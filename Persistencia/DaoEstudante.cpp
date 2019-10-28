#include <numeric>
#include "DaoEstudante.h"

void DaoEstudante::insere(Estudante e){
    estudantes.push_back(e);
}


bool DaoEstudante::pesquisa(int matricula) {
    list<Estudante>::iterator e;
    for(e= estudantes.begin(); e!=estudantes.end(); e++ ){
        if(e->get_matricula() == matricula){
            return true;
        }
    }
    return false;
}
bool DaoEstudante::pesquisa_altera(int matricula, Estudante *estudante){
    list<Estudante>::iterator e;
    for(e= estudantes.begin(); e!=estudantes.end(); e++ ){
        if(e->get_matricula() == matricula){
            *estudante = *e;
            return true;
        }
    }
    return false;
}

bool DaoEstudante::remove(int matricula) {
    Estudante e;
    if(pesquisa_altera(matricula, &e)) {
        estudantes.remove(e);
        return true;
    }
    return false;
}

bool DaoEstudante::altera_dados(int matricula, string nome_aluno, string nome_pai, string nome_mae,
        string endereco){
    for(auto it = estudantes.rbegin(); it!=estudantes.rend(); it++){
        if(it->get_matricula()==matricula){
            it->set_nome_aluno(nome_aluno);
            it->set_nome_pai(nome_pai);
            it->set_nome_mae(nome_mae);
            it->set_endereco(endereco);
            return true;
        }
    }
    return false;
}
bool DaoEstudante::altera_nome(int matricula, string nome){
    for(auto it = estudantes.rbegin(); it!=estudantes.rend(); it++){
        if(it->get_matricula()==matricula){
            it->set_nome_aluno(nome);
            return true;
        }
    }
    return false;
}
bool DaoEstudante::altera_pai(int matricula, string nome){
    for(auto it = estudantes.rbegin(); it!=estudantes.rend(); it++){
        if(it->get_matricula()==matricula){
            it->set_nome_pai(nome);
            return true;
        }
    }
    return false;
}

bool DaoEstudante::altera_mae(int matricula, string nome){
    for(auto it = estudantes.rbegin(); it!=estudantes.rend(); it++){
        if(it->get_matricula()==matricula){
            it->set_nome_mae(nome);
            return true;
        }
    }
    return false;
}

bool DaoEstudante::altera_endereco(int matricula, string endereco){
    for(auto it = estudantes.rbegin(); it!=estudantes.rend(); it++){
        if(it->get_matricula()==matricula){
            it->set_endereco(endereco);
            return true;
        }
    }
    return false;
}

list<Estudante> DaoEstudante::lista_estudantes(){return estudantes;}

void DaoEstudante::insere_nota(int matricula, float valor){
    for(auto it = estudantes.rbegin(); it!=estudantes.rend(); it++){
        if(it->get_matricula()==matricula){
            it->insere_nota(valor);
            return;
        }
    }
}

int DaoEstudante::soma_notas(int matricula) {
    float soma = 0;
    list<float> notas;
    for(auto it = estudantes.rbegin(); it!=estudantes.rend(); it++){
        if(it->get_matricula()==matricula){
            notas = it->lista_notas();
        }
    }
    soma = std::accumulate(std::begin(notas), std::end(notas), 0.0);
    return soma;
}