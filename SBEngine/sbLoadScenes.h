#pragma once
#include "..\\SBEngine_Source\\sbSceneManager.h"
#include "sbPlayScene.h"
#include "sbTitleScene.h"

namespace sb
{
	void LoadScenes()
	{
		SceneManager::CreateScene<TitleScene>(L"TitleScene");
		SceneManager::CreateScene<PlayScene>(L"PlayScene");
		//SceneManager::CreateScene<PlayScene>(L"EndScene");

		SceneManager::LoadScene(L"TitleScene");
	}
}