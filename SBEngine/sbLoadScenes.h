#pragma once
#include "sbSceneManager.h"
#include "sbPlayScene.h"

namespace sb
{
	void LoadScenes()
	{
		SceneManager::CreateScene<PlayScene>(L"PlayScene");
	}
}