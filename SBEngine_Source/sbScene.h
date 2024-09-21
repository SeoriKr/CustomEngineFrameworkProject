#pragma once
#include "sbEntity.h"
#include "sbGameObject.h"

namespace sb
{
	class Scene : public Entity
	{
	public:
		Scene();
		~Scene();

		void Initialize();
		void Update();
		void LateUpdate();
		void Render(HDC hdc);

	private:
		std::vector<GameObject*> mGameObjects;
	};
}

