#ifndef TP3_ESTUDANTE_H
#define TP3_ESTUDANTE_H
#include <iostream>
#include <list>
using namespace std;

class Estudante{
private:
    string nome_aluno;
    string nome_pai;
    string nome_mae;
    string data_nasc;
    string endereco;
    int matricula;
    list<float> notas;
public:
    Estudante() = default;
    Estudante(string nome_aluno, string nome_pai, string nome_mae, string data_nasc, string endereco, int matricula);
    void set_nome_aluno(string nome);
    string get_nome_aluno();
    void set_nome_pai(string nome);
    string get_nome_pai();
    void set_nome_mae(string nome);
    string get_nome_mae();
    void set_nasc(string data);
    string get_nasc();
    void set_endereco(string endereco);
    string get_endereco();
    void set_matricula(int matricula);
    int get_matricula();
    void insere_nota(float nota);
    list<float> lista_notas();

    bool operator == (const Estudante& s) const {return nome_aluno==s.nome_aluno && nome_pai ==s.nome_pai
                                                       && nome_mae==s.nome_mae && data_nasc==s.data_nasc &&
                                                       endereco==s.endereco && matricula==s.matricula; };
    bool operator != (const Estudante& s) const {return !operator==(s);};
};


#endif //TP3_ESTUDANTE_H
