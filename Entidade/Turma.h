#ifndef TP3_TURMA_H
#define TP3_TURMA_H
#include "iostream"
#include <list>
#include "C:\Users\gmora\Desktop\Faculdade\POO\Tp3\Persistencia\DaoEstudante.h"
#include "Professor.h"

using namespace std;

class Turma{
private:
    Professor professor;
    DaoEstudante estudantes_turma;
    int codigo;
    int ano;
public:
    Turma() = default;
    Turma(Professor professor, int codigo, int ano);
    void set_professor(Professor professor);
    Professor get_professor();
    list<Estudante> get_estudantes();
    void set_codigo(int codigo);
    int get_codigo();
    void set_ano(int ano);
    int get_ano();
    void insere_estudante(Estudante estudante);
    void remove_estudante(int matricula);
    bool procura_estudante(int matricula, Estudante *estudante);
    bool operator == (const Turma& s) const {return codigo==s.codigo && professor==s.professor && ano==s.ano;};
    bool operator != (const Turma& s) const {return !operator==(s);};
};


#endif //TP3_TURMA_H
