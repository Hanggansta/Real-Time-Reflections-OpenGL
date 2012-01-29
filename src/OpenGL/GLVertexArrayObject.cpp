#include "GLVertexArrayObject.h"

GLVertexArrayObject::GLVertexArrayObject()
{
	this->vertexArrayObject = 0;
	this->attributes = std::vector<GLAttribute*>();
}
GLVertexArrayObject::~GLVertexArrayObject()
{
	//Do nothing
}

//Setters
void GLVertexArrayObject::setVertexArrayObject(GLuint vertexArrayObject)
{
	this->vertexArrayObject = vertexArrayObject;
}

//Getters
GLuint GLVertexArrayObject::getVertexArrayObject()
{
	return this->vertexArrayObject;
}
std::vector<GLAttribute*> GLVertexArrayObject::getAttributes()
{
	return this->attributes;
}
void GLVertexArrayObject::setAttributes(std::vector<GLAttribute*> attributes)
{
	this->attributes = attributes;
}