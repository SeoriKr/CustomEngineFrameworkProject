#pragma once
#include "sbGameObject.h"

namespace sb
{
	class Application
	{
	public:
		Application();
		~Application();
		void Initialize(HWND hwnd, UINT width, UINT height);
		void Run();

		void Update();
		void LateUpdate();
		void Render(); 

		HDC GetHdc() { return mHdc; }

	private:
		void clearRenderTarget();
		void copyRenderTarget(HDC source, HDC dest);
		
	private:
		HWND mHwnd;
		HDC mHdc;

		HDC mBackHdc;
		HBITMAP mBackBitmap;

		UINT mWidth;
		UINT mHeight;
		//std::vector<Scene*> mScenes;

	};
}