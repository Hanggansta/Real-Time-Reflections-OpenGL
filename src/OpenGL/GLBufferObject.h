#pragma once

#include <vector> //For storing vbo

#include <gl3w/gl3w.h> //For OpenGL commands

class  GLBufferObject
{
public:
    GLBufferObject();
    ~GLBufferObject();

    //Setters
    void setVertexBuffer(GLuint vertexBuffer);
    void setIndexBuffer(GLuint indexBuffer);
    void setDrawType(GLenum drawType);
    void setVertexBufferData(std::vector<GLfloat> vertexBufferData);
    void setIndexBufferData(std::vector<GLushort> indexBufferData);
	void setNumElements(GLuint numElements);

    //Getters
    GLuint getVertexBuffer();
    GLuint getIndexBuffer();
    GLenum getDrawType();
    std::vector<GLfloat>& getVertexBufferData();
    std::vector<GLushort>& getIndexBufferData();
	GLuint getNumElements();


private:
    GLuint vertexBuffer;
    GLuint indexBuffer;
    GLenum drawType;
    std::vector<GLfloat> vertexBufferData;
    std::vector<GLushort> indexBufferData;
	GLuint numElements;
};
