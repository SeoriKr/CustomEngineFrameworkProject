#pragma once
#include "..\\SBEngine_Source\\sbResources.h"
#include "..\\SBEngine_Source\\sbTexture.h"

namespace sb
{
	void LoadResources()
	{
		Resources::Load<graphics::Texture>(L"BG", L"E:\\imagetest\\003.png");
	}
}