#pragma once

#include <glm/glm.hpp>

#include "Object.h"

class Light: public Object
{
public:
	Light();
	virtual ~Light();

	virtual void update();

	//Intensity
	void setIntensity(glm::vec4 intensity);
	glm::vec4 getIntensity();

	//Static
	static void setAmbientIntensity(glm::vec4 ambientIntensity);
	static void setLightAttenuation(float lightAttenuation);
	static void setMaxIntensity(float maxIntensity);
	static void setGamma(float gamma);

	static glm::vec4 getAmbientIntensity();
	static float getLightAttenuation();
	static float getMaxIntensity();
	static float getGamma();

private:
	glm::vec4 intensity;

	//Static
	static glm::vec4 ambientIntensity;
	static float lightAttenuation;
	static float maxIntensity;
	static float gamma;
};