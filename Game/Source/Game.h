#pragma once

class Game : public fw::GameCore
{
protected:
    fw::ShaderProgram* m_pShader = nullptr;

    fw::Mesh* m_pMesh;
public:
    Game();
    virtual ~Game();

    virtual void Init();
    virtual void Update() override;
    virtual void Draw() override;
};


