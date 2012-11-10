#include "Game.h"
#include <cstdlib>
#include <time.h>

int main( int argc, const char* argv[] )
{
    srand( time(NULL) );
    CGame* game = new CGame();
    game->runGame();
    
    return 0;
}