#include "Game.h"
#include <cstdlib>

CGame::CGame(void)
    : roundNumber(0)
{
}

CGame::~CGame(void)
{
}

void CGame::runGame()
{
    CField* field = new CField();
    COutput* output = new COutput();
    CPlayer* player1 = new CPlayer("Player1", '#', 0, 0);
    CPlayer* player2 = new CPlayer("Player2", '*', 15, 15);

    while(doGameTurn(field, output, player1, player2))
        ++this->roundNumber;

    delete field;
    delete output;
    delete player1;
    delete player2;
}

bool CGame::doGameTurn(CField* field_, COutput* output_, CPlayer* player1_, CPlayer* player2_)
{
    if(!player1_->move(calcRand(0, 100), field_))
        return false;
    if(!player2_->move(calcRand(0, 100), field_))
        return false;

    output_->printField(field_);
    return true;
}

int CGame::calcRand(int from_, int to_)
{
    return (rand() % (to_ - from_ + 1) + from_);
}