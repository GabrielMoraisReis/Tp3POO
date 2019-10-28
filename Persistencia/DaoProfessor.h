#ifndef TP3_DAOPROFESSOR_H
#define TP3_DAOPROFESSOR_H
#include "C:\Users\gmora\Desktop\Faculdade\POO\Tp3\Entidade\Professor.h"
#include <list>

using namespace std;

class DaoProfessor{
private:
    list<Professor> professores;
public:
    DaoProfessor() = default;
    void insere(Professor professor);
    bool pesquisa_simples(int id);
    bool pesquisa(int id, Professor *professor);
    bool remove(int id);
    bool altera_todos(int id, string nome, string endereco, string area, float salario_hora);
    bool altera_nome(int id, string nome);
    bool altera_endereco(int id, string endereco);
    bool altera_area(int id, string area);
    bool altera_salario(int id, float salario_hora);
    list<Professor> lista_professores();
};

#endif //TP3_DAOPROFESSOR_H
