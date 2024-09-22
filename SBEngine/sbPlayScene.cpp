#include "sbPlayScene.h"
#include "sbGameObject.h"
#include "sbPlayer.h"
#include "sbTransform.h"
#include "sbSpriteRenderer.h"
#include "sbInput.h"
#include "sbTitleScene.h"
#include "sbSceneManager.h"
#include "sbObject.h"
#include "sbTexture.h"
#include "sbResources.h"

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
			bg = object::Instantiate<Player>(enums::eLayerType::Background/* Vector2(100.0f, 100.0f)*/);
			SpriteRenderer* sr = bg->AddComponent<SpriteRenderer>();

			graphics::Texture* bgTexture = Resources::Find<graphics::Texture>(L"BG");
			sr->SetTexture(bgTexture);

			//graphics::Texture* tex = new graphics::Texture();
			//tex->Load(L"E:\\imagetest\\003.png");
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

		wchar_t str[50] = L"Play Scene";
		TextOut(hdc, 0, 0, str, 10);
	}
	void PlayScene::OnEnter()
	{

	}

	void PlayScene::OnExit()
	{
		//Transform* tr = bg->AddComponent<Transform>();
		//tr->SetPosition(Vector2(0, 0));
	}
}