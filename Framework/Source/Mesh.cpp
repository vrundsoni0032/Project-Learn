#include "FrameworkPCH.h"
#include "Mesh.h"

fw::Mesh::Mesh()
{
    glGenBuffers(1, &m_VBO);

    glBindBuffer(GL_ARRAY_BUFFER, m_VBO);

    float attribs[] =
    {
        0.0f, 0.0f,
        0.5f, 0.5f,
        0.5f, 0.0f, 
    };

    m_NumVertices = 3;
    m_PrimitiveType = GL_POINTS;

    int numAttribsComponent = m_NumVertices * 2;

    glBufferData(GL_ARRAY_BUFFER, sizeof(float) * numAttribsComponent, attribs, GL_STATIC_DRAW);
}

fw::Mesh::~Mesh()
{
}

void fw::Mesh::Draw()
{
    glBindBuffer(GL_ARRAY_BUFFER, m_VBO);

    GLint loc = 0;
    glEnableVertexAttribArray(loc);

    glVertexAttribPointer(loc, 2, GL_FLOAT, GL_FALSE, 8, (void*)0);

    glPointSize(7.5f);

    glDrawArrays(m_PrimitiveType, 0, m_NumVertices);
}
