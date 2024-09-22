#pragma once
#include "..\\SBEngine_Source\\sbScene.h"

namespace sb
{
	class PlayScene : public Scene
	{
	public:
		PlayScene();
		~PlayScene();

		void Initialize() override;
		void Update() override;
		void LateUpdate() override;
		void Render(HDC hdc)override;

	private:

	};
}