#pragma once
#ifndef SNAKE_CPLAYER_H
#define SNAKE_CPLAYER_H 

#include "NEnums.h"
#include "NStructs.h"
#include "Field.h"

class CPlayer
{
public:
	CPlayer(char* name_, char sign_, int posX_, int posY_);
	~CPlayer(void);

    bool move(int chNewDir_, CField* field_);
    bool checkDir(int crntDir_);
    Enums::EDirection getNewDir(CField* field_);
    bool collision(CField* field_);
    void setSign(CField* field_);
    char getSign();
    Structs::SPosition getPos();
    char* getName();

private:
    char*                   name;
    char                    sign;
    Structs::SPosition      position;
    Enums::EDirection       crntDir;
};

#endif /* SNAKE_CPLAYER_H */