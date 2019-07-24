//
// Created by lvmaster on 2019/7/23.
//

#include "calculator.h"
#include <iostream>

void main()
{
	double num1;
	double num2;
    char op;
	Operation* operation = NULL;

    std::cout << "Please input the first number:" << std::endl;
    std::cin >> num1;
    std::cout << "Please input the operation:" << std::endl;
    std::cin >> op;
    std::cout << "Please input the second number:" << std::endl;
    std::cin >> num2;


	OperationFactory opr;
	operation = opr.op(op);
	operation->setNum(num1, num2);

    operation->getResult();

    std::cout <<"The result is:" << operation->result << std::endl;


}
