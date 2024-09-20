#include "sbApplication.h"

namespace sb
{
	Application::Application()
		: mHwnd(nullptr)
		, mHdc(nullptr)
		, mSpeed(0)
	{

	}

	Application::~Application()
	{

	}

	void Application::Initialize(HWND hwnd)
	{
		mHwnd = hwnd;
		mHdc = GetDC(hwnd);

		mPlayer.SetPosition(0, 0);
	}

	void Application::Run()
	{
		Update();
		LateUpdate();
		Render();
	}

	void Application::Update()
	{
		mSpeed += 0.01f;

		mPlayer.Update();

	}

	void Application::LateUpdate()
	{
	}

	void Application::Render()
	{
		HBRUSH blueBrush = CreateSolidBrush(RGB(0, 0, 255));

		HBRUSH oldBrush = (HBRUSH)SelectObject(mHdc, blueBrush);

		HPEN redPen = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));
		HPEN oldPen = (HPEN)SelectObject(mHdc, redPen);
		
		SelectObject(mHdc, oldPen);

		int x = mPlayer.GetPositionX();
		int y = mPlayer.GetPositionY();
		Rectangle(mHdc, 100 + x, 100 + y, 200 + x, 200 + y);

		mPlayer.Render(mHdc);
	}


}
