#pragma once
#include "sbComponent.h"
#include "sbGameObject.h"
#include "sbLayer.h"
#include "sbScene.h"
#include "sbSceneManager.h"

namespace sb::object
{
	template <typename T>
	static T* Instantiate(sb::enums::eLayerType type)
	{
		T* gameObject = new T();
		Scene* activeScene = SceneManager::GetActiveScene();
		Layer* layer = activeScene->GetLayer(type);
		layer->AddGameObject(gameObject);

		return gameObject;
	}

	template <typename T>
	static T* Instantiate(sb::enums::eLayerType type, math::Vector2 position)
	{
		T* gameObject = new T();
		Scene* activeScene = SceneManager::GetActiveScene();
		Layer* layer = activeScene->GetLayer(type);

		layer->AddGameObject(gameObject);

		Transform* tr = gameObject->GetComponent<Transform>();
		tr->SetPosition(position);

		return gameObject;
	}
}