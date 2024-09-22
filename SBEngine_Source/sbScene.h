#pragma once
#include "sbEntity.h"
#include "sbGameObject.h"
#include "sbLayer.h"

namespace sb
{
	class Scene : public Entity
	{
	public:
		Scene();
		~Scene();

		virtual void Initialize();
		virtual void Update();
		virtual void LateUpdate();
		virtual void Render(HDC hdc);

		virtual void OnEnter();
		virtual void OnExit();

		void AddGameObject(GameObject* gameObject, const eLayerType type);

	private:
		std::vector<Layer*> mLayers;
	};
}

