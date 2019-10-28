#ifndef TP3_CONTROLEESTUDANTE_H
#define TP3_CONTROLEESTUDANTE_H
#include "C:\Users\gmora\Desktop\Faculdade\POO\Tp3\Persistencia\DaoEstudante.h"

using namespace std;

class ControleEstudante{
private:
    DaoEstudante daoEstudante;
public:
    void insere(string nome_aluno, string nome_pai, string nome_mae, string data_nasc,
                string endereco);
    bool pesquisa(int matricula);
    bool remove(int matricula);
    bool altera_dados(int matricula, string nome_aluno, string nome_pai, string nome_mae,
                      string endereco);
    bool altera_nome(int matricula, string nome);
    bool altera_pai(int matricula, string nome);
    bool altera_mae(int matricula, string nome);
    bool altera_endereco(int matricula, string endereco);
    list<Estudante> lista_estudantes();
};

#endif //TP3_CONTROLEESTUDANTE_H
