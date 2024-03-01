#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;


int main(void){
    unsigned int ui_year = 2024;

    bool b_logicExpression_cond1 = ((ui_year%4==0)&!(ui_year%100==0));
    bool b_logicExpression_cond2 = ((ui_year%400==0));

    string yearTest = (b_logicExpression_cond1||b_logicExpression_cond2) ? "Teste do Ano Bissexto : VERDADEIRO" : "Teste do Ano Bissexto : FALSO.";
    std::cout << "Ano : " << ui_year <<"\n";
    std::cout << yearTest;




}


