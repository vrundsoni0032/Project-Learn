#pragma once

namespace fw{

class Mesh
{

public:
    Mesh();
    virtual ~Mesh();

    void Draw();

protected:
    unsigned int m_VBO = 0;

    int m_NumVertices = 0;
    int m_PrimitiveType = 0;
};

}

