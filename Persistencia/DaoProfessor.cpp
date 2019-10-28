#include "DaoProfessor.h"

void DaoProfessor::insere(Professor professor){
    professores.push_back(professor);
}

bool DaoProfessor::pesquisa_simples(int id){
    list<Professor>::iterator e;
    for(e= professores.begin(); e!=professores.end(); e++ ){
        if(e->get_id() == id){
            return true;
        }
    }
    return false;
}

bool DaoProfessor::pesquisa(int id, Professor *professor){
    list<Professor>::iterator e;
    for(e= professores.begin(); e!=professores.end(); e++ ){
        if(e->get_id() == id){
            *professor = *e;
            return true;
        }
    }
    return false;
}

bool DaoProfessor::remove(int id){
    Professor p;
    pesquisa(id, &p);
    professores.remove(p);
}

bool DaoProfessor::altera_todos(int id, string nome, string endereco, string area, float salario_hora){
    for(auto it = professores.rbegin(); it!=professores.rend(); it++){
        if(it->get_id()==id){
            it->set_nome(nome);
            it->set_endereco(endereco);
            it->set_area(area);
            it->set_salario(salario_hora);
            return true;
        }
    }
    return false;
}

bool DaoProfessor::altera_nome(int id, string nome){
    for(auto it = professores.rbegin(); it!=professores.rend(); it++){
        if(it->get_id()==id){
            it->set_nome(nome);
            return true;
        }
    }
    return false;
}
bool DaoProfessor::altera_endereco(int id, string endereco){
    for(auto it = professores.rbegin(); it!=professores.rend(); it++){
        if(it->get_id()==id){
            it->set_endereco(endereco);
            return true;
        }
    }
    return false;
}
bool DaoProfessor::altera_area(int id, string area){
    for(auto it = professores.rbegin(); it!=professores.rend(); it++){
        if(it->get_id()==id){
            it->set_area(area);
            return true;
        }
    }
    return false;
}
bool DaoProfessor::altera_salario(int id, float salario_hora){
    for(auto it = professores.rbegin(); it!=professores.rend(); it++){
        if(it->get_id()==id){
            it->set_salario(salario_hora);
            return true;
        }
    }
    return false;
}
list<Professor> DaoProfessor::lista_professores(){return professores;}