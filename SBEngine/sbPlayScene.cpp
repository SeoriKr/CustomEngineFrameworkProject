#include "sbPlayScene.h"
#include "sbGameObject.h"
#include "sbPlayer.h"
#include "sbTransform.h"
#include "sbSpriteRenderer.h"
#include "sbInput.h"
#include "sbTitleScene.h"
#include "sbSceneManager.h"

namespace sb
{
	PlayScene::PlayScene()
	{

	}

	PlayScene::~PlayScene()
	{

	}

	void PlayScene::Initialize()
	{
		{
			bg = new Player();
			Transform* tr = bg->AddComponent<Transform>();
			tr->SetPos(Vector2(0, 0));

			tr->SetName(L"TR");

			SpriteRenderer* sr
				= bg->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");
			sr->ImageLoad(L"E:\\AR50\\YamYam_Engine\\Resources\\CloudOcean.png");

			AddGameObject(bg, eLayerType::Background);
		}
	}

	void PlayScene::Update()
	{
		Scene::Update();
	}

	void PlayScene::LateUpdate()
	{
		Scene::LateUpdate();

		if (Input::GetKeyDown(eKeyCode::N))
		{
			SceneManager::LoadScene(L"TitleScene");
		}
	}

	void PlayScene::Render(HDC hdc)
	{
		Scene::Render(hdc);

		wchar_t str[50] = L"Play1 Scene";
		TextOut(hdc, 0, 0, str, 10);
	}
	void PlayScene::OnEnter()
	{

	}

	void PlayScene::OnExit()
	{
		Transform* tr = bg->AddComponent<Transform>();
		tr->SetPos(Vector2(0, 0));
	}
}