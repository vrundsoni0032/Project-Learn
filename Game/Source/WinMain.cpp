#include "Framework.h"

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hInstPrev, PSTR cmdline, int cmdshow)
{
    fw::FWCore* pFramework = new fw::FWCore();

    pFramework->Init(500, 500);
    pFramework->Run();
    pFramework->Shutdown();

    delete pFramework;
}
