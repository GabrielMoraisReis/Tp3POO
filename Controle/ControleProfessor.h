#ifndef TP3_CONTROLEPROFESSOR_H
#define TP3_CONTROLEPROFESSOR_H
#include "C:\Users\gmora\Desktop\Faculdade\POO\Tp3\Persistencia\DaoProfessor.h"

using namespace std;

class ControleProfessor{
private:
    DaoProfessor daoProfessor;
public:
    void insere(int id, string nome, string endereco, string area, float salario_hora);
    bool pesquisa(int id);
    bool remove(int id);
    void altera_todos(int id, string nome, string endereco, string area, float salario_hora);
    void altera_nome(int id, string nome);
    void altera_endereco(int id, string endereco);
    void altera_area(int id, string area);
    void altera_salario(int id, float salario_hora);
    list<Professor> lista_professores();
};

#endif //TP3_CONTROLEPROFESSOR_H
