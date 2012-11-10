#pragma once
#ifndef SNAKE_COUTPUT_H
#define SNAKE_COUTPUT_H
#include "Field.h"

class COutput
{
public:
	COutput(void);
	~COutput(void);

    void printField(CField* field_);
    void printCollision();
    void printWin();
    void printRndNmbr(int rndNmbr_);
};

#endif /* SNAKE_COUTPUT_H */
