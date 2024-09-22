#pragma once
#include "sbEntity.h"
#include "sbComponent.h"
#include "sbTexture.h"
		  
namespace sb
{
	class SpriteRenderer : public Component
	{
	public:
		SpriteRenderer();
		~SpriteRenderer();
		void Initialize() override;
		void Update()  override;
		void LateUpdate()  override;
		void Render(HDC hdc)  override;

		void SetTexture(graphics::Texture* texture) { mTexture = texture; }
		void SetSize(math::Vector2 scale) { mSize = scale; }

	private:
		graphics::Texture* mTexture;
		math::Vector2 mSize;
	};
}