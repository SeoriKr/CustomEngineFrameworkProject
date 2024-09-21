#include "sbTime.h"

namespace sb
{
	LARGE_INTEGER Time::CpuFrequency = {};
	LARGE_INTEGER Time::PrevFrequency = {};
	LARGE_INTEGER Time::CurrentFrequency = {};
	float Time::DeltaTimeValue = 0.0f;

	void Time::Initialize()
	{
		QueryPerformanceFrequency(&CpuFrequency); // CPU 고유 진동수
		
		QueryPerformanceCounter(&PrevFrequency); // 프로그램 시작 시 진동수
	}

	void Time::Update()
	{
		QueryPerformanceCounter(&CurrentFrequency);

		float diffFrequency = static_cast<float>(CurrentFrequency.QuadPart - PrevFrequency.QuadPart);
		DeltaTimeValue = diffFrequency / static_cast<float>(CpuFrequency.QuadPart);

		PrevFrequency.QuadPart = CurrentFrequency.QuadPart;
	}

	void Time::Render(HDC hdc)
	{
		static float time = 0.0f;

		time += DeltaTimeValue;

		float fps = 1.0f / DeltaTimeValue;

		wchar_t strTime[50] = L"";
		wchar_t strFps[50] = L"";

		swprintf_s(strTime, 50, L"Time : %f", time);
		swprintf_s(strFps, 50, L"Time : %f", fps);

		int lenTime = wcsnlen_s(strTime, 50);
		int lenFps = wcsnlen_s(strFps, 50);

		TextOut(hdc, 0, 0, strTime, lenTime);
		TextOut(hdc, 0, 20, strFps, lenFps);
	}

}