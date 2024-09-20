#pragma once
#include "sbGameObject.h"

namespace sb
{
	class Application
	{
	public:
		Application();
		~Application();

		void Initialize(HWND hwnd);
		void Run();

		void Update();
		void LateUpdate();
		void Render();
		
	private:
		HWND mHwnd;
		HDC mHdc;

		float mSpeed;

		GameObject mPlayer;
	
	};
}

