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

		void AddGameObject(GameObject* gameObject, const enums::eLayerType type);

		Layer* GetLayer(enums::eLayerType type) { return mLayers[(UINT)type]; };

	private:
		std::vector<Layer*> mLayers;
	};
}

