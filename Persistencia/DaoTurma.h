#ifndef TP3_DAOTURMA_H
#define TP3_DAOTURMA_H
#include "C:\Users\gmora\Desktop\Faculdade\POO\Tp3\Entidade\Turma.h"
#include <list>

using namespace std;

class DaoTurma{
private:
    list<Turma> turmas;
public:
    DaoTurma() = default;
    void insere_turma(Professor professor, int codigo, int ano);
    bool pesquisa(int codigo, Turma *turma);
    bool remove(int codigo);
    void altera_dados(int codigo, Professor professor, int ano);
    void altera_prof(int codigo, Professor professor);
    void altra_ano(int codigo, int ano);
    void insere_estudante(int codigo, Estudante estudante);
    void remove_estudante(int codigo, int matricula);
    void procura_estudante(int codigo, int matricula, Estudante *estudante);
    list<Turma> lista_turmas();
};

#endif //TP3_DAOTURMA_H
