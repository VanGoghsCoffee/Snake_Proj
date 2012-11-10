#include "Field.h"


CField::CField(void)
{
    for(int i = 0; i < 16; ++i)
        for(int i2 = 0; i2 < 16; ++i2)
            this->field[i][i2] = '.';
}


CField::~CField(void)
{
}

char CField::getField(Structs::SPosition position_)
{
    return this->field[position_.posX][position_.posY];
}

void CField::setField(Structs::SPosition field_, char sign_)
{
    this->field[field_.posX][field_.posY] = sign_;
}