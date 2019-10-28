#include <iostream>
#include "C:\Users\gmora\Desktop\Faculdade\POO\Tp3\Controle\ControleEstudante.h"
#include <time.h>
int main() {
    srand(time(NULL));
    ControleEstudante controleEstudante;
    controleEstudante.insere("Gabriel", "guido", "ana", "20/01/2000", "begonia");
    controleEstudante.insere("Arthur", "guido", "ana", "20/01/2000", "begonia");
    Estudante estudante;
    list<Estudante> aux  = controleEstudante.lista_estudantes();
    for(auto itr = aux.begin(); itr!= aux.end(); itr++) {
        std::cout << itr->get_matricula() << std::endl;
        std::cout << itr->get_endereco() << std::endl;
        std::cout << itr->get_nasc() << std::endl;
        std::cout << itr->get_nome_aluno() << std::endl;
        std::cout << itr->get_nome_mae() << std::endl;
        std::cout << itr->get_nome_pai() << std::endl;
        printf("\n");
    }
    int a;
    scanf("%d", &a);
    controleEstudante.pesquisa(a);
    //scanf("%d", &a);
    /*controleEstudante.remove(a);
    controleEstudante.altera_dados(a, "banana", "robson", "turiju", "disney");
    aux  =controleEstudante.lista_estudantes();
    for(auto itr = aux.begin(); itr!= aux.end(); itr++){
        std::cout << itr->get_matricula() << std::endl;
        std::cout << itr->get_endereco() << std::endl;
        std::cout << itr->get_nasc() << std::endl;
        std::cout << itr->get_nome_aluno() << std::endl;
        std::cout << itr->get_nome_mae() << std::endl;
        std::cout << itr->get_nome_pai() << std::endl;
    }*/
    return 0;
}