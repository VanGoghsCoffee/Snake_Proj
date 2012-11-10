#include "Output.h"
#include "Field.h"
#include "NStructs.h"
#include <iostream>

COutput::COutput(void)
{
}


COutput::~COutput(void)
{
}

void COutput::printField(CField* field_)
{
    Structs::SPosition position;
    for(int index = 0; index < 16; ++index)
    {
        std::cout << std::endl;
        for(int index2 = 0; index2 < 16; ++index2)
        {
            position.posX = index2;
            position.posY = index;
            std::cout << " " <<field_->getField(position);
        }
    }
}