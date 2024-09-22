#include "sbPlayerScript.h"
#include "sbInput.h"
#include "sbTransform.h"
#include "sbTime.h"
#include "sbGameObject.h"

namespace sb
{
	PlayerScript::PlayerScript()
	{

	}

	PlayerScript::~PlayerScript()
	{

	}

	void PlayerScript::Initialize()
	{

	}

	void PlayerScript::Update()
	{	if (Input::GetKey(eKeyCode::Right))
		{
			Transform* tr = GetOwner()->GetComponent<Transform>();
			Vector2 pos = tr->GetPosition();
			pos.x += 100.0f * Time::DeltaTime();
			tr->SetPosition(pos);
		}

		if (Input::GetKey(eKeyCode::Left))
		{
			Transform* tr = GetOwner()->GetComponent<Transform>();
			Vector2 pos = tr->GetPosition();
			pos.x -= 100.0f * Time::DeltaTime();
			tr->SetPosition(pos);
		}
	}

	void PlayerScript::LateUpdate()
	{

	}

	void PlayerScript::Render(HDC hdc)
	{

	}
}