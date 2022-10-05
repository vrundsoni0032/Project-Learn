#include "Framework.h"
#include "Game.h"

Game::Game()
{
}

Game::~Game()
{
    delete m_pMesh;
    delete m_pShader;
}

void Game::Init()
{
    m_pShader = new fw::ShaderProgram("Data/Basic.vert" , "Data/Basic.frag");
    m_pMesh = new fw::Mesh();
}

void Game::Update()
{

}

void Game::Draw()
{

    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);

    glUseProgram(m_pShader->GetProgram());

    m_pMesh->Draw();
}
