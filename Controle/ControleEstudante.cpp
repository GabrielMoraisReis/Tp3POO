#include "ControleEstudante.h"


void ControleEstudante::insere(string nome_aluno, string nome_pai, string nome_mae, string data_nasc,
            string endereco){
    int matricula = rand()%1000;
    while(daoEstudante.pesquisa(matricula)){
         matricula = rand()%1000;
    }
    printf("Inserido com matricula: %d\n", matricula);
    Estudante e(nome_aluno, nome_pai, nome_mae, data_nasc, endereco, matricula);
    daoEstudante.insere(e);
}


bool ControleEstudante::pesquisa(int matricula){
    Estudante e;
    if(daoEstudante.pesquisa_altera(matricula, &e)){
        std::cout << "Encontrado!" << std::endl;
        std::cout << e.get_matricula() << std::endl;
        std::cout << e.get_endereco() << std::endl;
        std::cout << e.get_nasc() << std::endl;
        std::cout << e.get_nome_aluno() << std::endl;
        std::cout << e.get_nome_mae() << std::endl;
        std::cout << e.get_nome_pai() << std::endl;
        printf("\n");
        return true;
    }
    std::cout << "Nao foi encontrado nenhum estudante com essa matricula!" << std::endl;
    return false;
}

bool ControleEstudante::remove(int matricula){
    if(daoEstudante.remove(matricula)){
        std::cout << "Removido!" << std::endl;
        return true;
    }
    std::cout << "Nao foi possivel remover!" << std::endl;
    return false;
}

bool ControleEstudante::altera_dados(int matricula, string nome_aluno, string nome_pai, string nome_mae,
                  string endereco){
    if(daoEstudante.altera_dados(matricula, nome_aluno, nome_pai, nome_mae, endereco)){
        std::cout << "Alterado!" << std::endl;
        return true;
    }
    std::cout << "Nao foi encontrado o estudante para realizar a alteracao!" << std::endl;
    return false;
}

bool ControleEstudante::altera_nome(int matricula, string nome){
    if(daoEstudante.altera_nome(matricula, nome)){
        std::cout << "Alterado!" << std::endl;
        return true;
    }
    std::cout << "Nao foi encontrado o estudante para realizar a alteracao!" << std::endl;
    return false;
}

bool ControleEstudante::altera_pai(int matricula, string nome){
    if(daoEstudante.altera_pai(matricula, nome)){
        std::cout << "Alterado!" << std::endl;
        return true;
    }
    std::cout << "Nao foi encontrado o estudante para realizar a alteracao!" << std::endl;
    return false;
}

bool ControleEstudante::altera_mae(int matricula, string nome){
    if(daoEstudante.altera_mae(matricula, nome)){
        std::cout << "Alterado!" << std::endl;
        return true;
    }
    std::cout << "Nao foi encontrado o estudante para realizar a alteracao!" << std::endl;
    return false;
}

bool ControleEstudante::altera_endereco(int matricula, string endereco){
    if(daoEstudante.altera_endereco(matricula, endereco)){
        std::cout << "Alterado!" << std::endl;
        return true;
    }
    std::cout << "Nao foi encontrado o estudante para realizar a alteracao!" << std::endl;
    return false;
}

list<Estudante> ControleEstudante::lista_estudantes(){ return daoEstudante.lista_estudantes();}