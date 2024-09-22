#pragma once
#include "..\\SBEngine_Source\\sbSceneManager.h"
#include "sbPlayScene.h"

namespace sb
{
	void LoadScenes()
	{
		SceneManager::CreateScene<PlayScene>(L"PlayScene");
		//SceneManager::CreateScene<PlayScene>(L"EndScene");
		//SceneManager::CreateScene<PlayScene>(L"TitleScene");

		SceneManager::LoadScene(L"PlayScene");
	}
}