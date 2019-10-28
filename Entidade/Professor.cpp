#include "Professor.h"


Professor::Professor(int id, string nome, string endereco, string area, float salario_hora){
    this->nome = nome;
    this->endereco = endereco;
    this->area = area;
    this->salario_hora = salario_hora;
    this->id = id;
}

void Professor::set_nome(string nome){
    this->nome = nome;
}
string Professor::get_nome(){return nome;}

void Professor::set_endereco(string endereco){
    this->endereco = endereco;
}
string Professor::get_endereco(){return endereco;}

void Professor::set_area(string area){
    this->area = area;
}
string Professor::get_area(){return area;}

void Professor::set_salario(float salario_hora){
    this->salario_hora = salario_hora;
}
float Professor::get_salario(){return salario_hora;}

int Professor::get_id(){return id;}