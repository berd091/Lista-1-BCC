/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>


int main()
{
    float aprov, total, percentual, reprov;
    std::cout <<"\nInforme a quantidade total de alunos desta turma: ";
    std::cin >> total;
    std::cout <<"\nInforme a quantidade de alunos aprovados desta turma: ";
    std::cin >> aprov;
    reprov = total - aprov;
    percentual = (reprov / total) * 100;
    std::cout <<"\nO percentual de alunos reprovados desta turma eh de: "<< percentual;
    return 0;
}
