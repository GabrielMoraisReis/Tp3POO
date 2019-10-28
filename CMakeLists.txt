cmake_minimum_required(VERSION 3.13)
project(Tp3)

set(CMAKE_CXX_STANDARD 14)

add_executable(Tp3 main.cpp Entidade/Estudante.cpp Entidade/Estudante.h Entidade/Professor.cpp Entidade/Professor.h Entidade/Turma.cpp Entidade/Turma.h Persistencia/DaoEstudante.cpp Persistencia/DaoEstudante.h Persistencia/DaoProfessor.cpp Persistencia/DaoProfessor.h Persistencia/DaoTurma.cpp Persistencia/DaoTurma.h Controle/ControleEstudante.cpp Controle/ControleEstudante.h Controle/ControleProfessor.cpp Controle/ControleProfessor.h)