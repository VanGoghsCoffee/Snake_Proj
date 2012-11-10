#pragma once
#ifndef SNAKE_CFIELD_H
#define SNAKE_CFIELD_H

#include "NStructs.h"

class CField
{
public:
	CField(void);
	~CField(void);

    char getField(Structs::SPosition position_);
    void setField(Structs::SPosition field_, char sign_);

private:
    char field[16][16];
};

#endif /* SNAKE_CFIELD_H */