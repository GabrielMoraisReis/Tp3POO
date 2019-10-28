#ifndef TP3_DAOESTUDANTE_H
#define TP3_DAOESTUDANTE_H
#include "C:\Users\gmora\Desktop\Faculdade\POO\Tp3\Entidade\Estudante.h"


using namespace std;

class DaoEstudante{
private:
    list<Estudante> estudantes;
public:
    DaoEstudante() = default;
    void insere(Estudante e);
    bool pesquisa(int matricula);
    bool pesquisa_altera(int matricula, Estudante *estudante);
    bool remove(int matricula);
    bool altera_dados(int matricula, string nome_aluno, string nome_pai, string nome_mae, string endereco);
    bool altera_nome(int matricula, string nome);
    bool altera_pai(int matricula, string nome);
    bool altera_mae(int matricula, string nome);
    bool altera_endereco(int matricula, string endereco);
    list<Estudante> lista_estudantes();
    void insere_nota(int matricula, float valor);
    int soma_notas(int matricula);
};


#endif //TP3_DAOESTUDANTE_H
