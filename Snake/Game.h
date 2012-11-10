#pragma once
#ifndef SNAKE_CGAME_H
#define SNAKE_CGAME_H

#include "Field.h"
#include "Player.h"
#include "Output.h"

class CGame
{
public:
	CGame(void);
	~CGame(void);

    void runGame();
    bool doGameTurn(CField* field_, COutput* output_, CPlayer* player1_, CPlayer* player2_);
    int calcRand(int from_, int to_);

private:
    int roundNumber;
};

#endif /* SNAKE_CGAME_H */