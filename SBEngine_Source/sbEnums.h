#pragma once

namespace sb::enums
{
	enum class eLayerType
	{
		None,
		Background,
		Player,
		Max = 16,
	};

	enum class eResourceType
	{
		Texture,
		Audioclip,
		Prefab,
		End,
	};
}