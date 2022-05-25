#include "ModuloCommand.h"

float ModuloCommand::Execute(float _num1, float _num2)
{
    int modulo = (int)_num1 % (int)_num2;
    return modulo;
}

char ModuloCommand::GetOp()
{
    return '%';
}
