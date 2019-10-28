#ifndef TP3_PROFESSOR_H
#define TP3_PROFESSOR_H
#include "iostream"

using namespace std;

class Professor{
private:
    int id;
    string nome;
    string endereco;
    string area;
    float salario_hora;
public:
    Professor()=default;
    Professor(int id, string nome, string endereco, string area, float salario_hora);
    void set_nome(string nome);
    string get_nome();
    void set_endereco(string endereco);
    string get_endereco();
    void set_area(string area);
    string get_area();
    void set_salario(float salario_hora);
    float get_salario();
    int get_id();
    bool operator == (const Professor& s) const {return nome==s.nome && endereco==s.endereco && area==s.area &&
                                                 salario_hora==s.salario_hora && id==s.id;};
    bool operator != (const Professor& s) const {return !operator==(s);};
};


#endif //TP3_PROFESSOR_H
