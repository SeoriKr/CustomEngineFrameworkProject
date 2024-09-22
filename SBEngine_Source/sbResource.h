#pragma once
#include "sbEntity.h"

namespace sb
{
	class Resource abstract : public Entity
	{
	public:
		Resource(enums::eResourceType mType);
		virtual ~Resource();

		virtual HRESULT Load(const std::wstring& path) = 0;

		const std::wstring& GetPath() { return mPath; }
		void SetPath(const std::wstring& path) { mPath = path; }

	private:
		enums::eResourceType mType;
		std::wstring mPath;
	};
}