#pragma once
#include "..\\SBEngine_Source\\sbScene.h"

namespace sb
{
	class TitleScene : public Scene
	{
	public:
		TitleScene();
		~TitleScene();

		void Initialize() override;
		void Update() override;
		void LateUpdate() override;
		void Render(HDC hdc)override;

	private:

	};
}