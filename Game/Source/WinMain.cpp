#include "Framework.h"
#include "Game.h"

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hInstPrev, PSTR cmdline, int cmdshow)
{
    fw::FWCore* pFramework = new fw::FWCore();
    Game* pGame = new Game();

    pFramework->Init(600, 600); 
    pGame->Init();

    pFramework->Run(pGame);
    pFramework->Shutdown();

    delete pGame;
    delete pFramework;
}
