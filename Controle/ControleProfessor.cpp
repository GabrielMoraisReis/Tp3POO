#include "ControleProfessor.h"

void ControleProfessor::insere(int id, string nome, string endereco, string area, float salario_hora){
    if(!daoProfessor.pesquisa_simples(id)){
        Professor p(id, nome, endereco, area, salario_hora);
        printf("Inserido!\n");
        return;
    }
    printf("Ja existe um professor cadastrado com esse codigo!\n");
}

bool ControleProfessor::pesquisa(int id){
    Professor p;
    if(daoProfessor.pesquisa(id, &p)){
        printf("Encontrado!\n");
        std::cout << p.get_id() << std::endl;
        std::cout << p.get_nome() << std::endl;
        std::cout << p.get_endereco() << std::endl;
        std::cout << p.get_area() << std::endl;
        std::cout << p.get_salario() << std::endl;
        return true;
    }
    printf("Nao foi encontrado um professor com esse id!\n");
    return false;
}

bool ControleProfessor::remove(int id){
    if(daoProfessor.remove(id)){
        std::cout << "Removido!" << std::endl;
        return true;
    }
    std::cout << "Nao foi possivel remover!" << std::endl;
    return false;
}
void ControleProfessor::altera_todos(int id, string nome, string endereco, string area, float salario_hora){
    if(daoProfessor.altera_todos(id, nome, endereco, area, salario_hora)){
        std::cout << "Alterado!" << std::endl;
        return;
    }
    std::cout << "Nao foi encontrado o professor para realizar a alteracao!" << std::endl;
}
void ControleProfessor::altera_nome(int id, string nome){
    if(daoProfessor.altera_nome(id, nome)){
        std::cout << "Alterado!" << std::endl;
        return;
    }
    std::cout << "Nao foi encontrado o professor para realizar a alteracao!" << std::endl;
}
void ControleProfessor::altera_endereco(int id, string endereco){
    if(daoProfessor.altera_endereco(id, endereco)){
        std::cout << "Alterado!" << std::endl;
        return;
    }
    std::cout << "Nao foi encontrado o professor para realizar a alteracao!" << std::endl;
}
void ControleProfessor::altera_area(int id, string area){
    if(daoProfessor.altera_area(id, area)){
        std::cout << "Alterado!" << std::endl;
        return;
    }
    std::cout << "Nao foi encontrado o professor para realizar a alteracao!" << std::endl;
}
void ControleProfessor::altera_salario(int id, float salario_hora){
    if(daoProfessor.altera_salario(id, salario_hora)){
        std::cout << "Alterado!" << std::endl;
        return;
    }
    std::cout << "Nao foi encontrado o professor para realizar a alteracao!" << std::endl;
}

list<Professor> ControleProfessor::lista_professores(){return daoProfessor.lista_professores();}