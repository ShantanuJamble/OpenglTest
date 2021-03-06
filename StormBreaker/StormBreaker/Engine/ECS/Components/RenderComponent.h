#ifndef RENDER_COMPONENT_H
#define RENDER_COMPONENT_H

#include "Component.h"
#include "Renderer/Mesh.h"
#include "Renderer/Material.h"

struct RenderComponent : public Component
{
private:
	Mesh* m_mesh;
	Material* m_material;
};



#endif