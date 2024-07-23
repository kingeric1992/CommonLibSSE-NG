#include "RE/P/PlayerCamera.h"

namespace RE
{
	PlayerCamera* PlayerCamera::GetSingleton()
	{
		REL::Relocation<PlayerCamera**> singleton{ RELOCATION_ID(514642, 400802) };
		return *singleton;
	}

	void PlayerCamera::ForceFirstPerson()
	{
		using func_t = decltype(&PlayerCamera::ForceFirstPerson);
		REL::Relocation<func_t> func{ RELOCATION_ID(49858, 50790) };
		return func(this);
	}

	void PlayerCamera::ForceThirdPerson()
	{
		using func_t = decltype(&PlayerCamera::ForceThirdPerson);
		REL::Relocation<func_t> func{ RELOCATION_ID(49863, 50796) };
		return func(this);
	}

	bool PlayerCamera::IsInBleedoutMode() const
	{
		return QCameraEquals(CameraState::kBleedout);
	}

	bool PlayerCamera::IsInFirstPerson() const
	{
		return QCameraEquals(CameraState::kFirstPerson);
	}

	bool PlayerCamera::IsInFreeCameraMode() const
	{
		return QCameraEquals(CameraState::kFree);
	}

	bool PlayerCamera::IsInThirdPerson() const
	{
		return QCameraEquals(CameraState::kThirdPerson);
	}

	bool PlayerCamera::QCameraEquals(CameraState a_cameraState) const
	{
		return currentState && currentState == cameraStates[a_cameraState];
	}

	void PlayerCamera::ToggleFreeCameraMode(bool a_freezeTime)
	{
		using func_t = decltype(&PlayerCamera::ToggleFreeCameraMode);
		REL::Relocation<func_t> func{ RELOCATION_ID(49876, 50809) };
		return func(this, a_freezeTime);
	}

	void PlayerCamera::UpdateThirdPerson(bool a_weaponDrawn)
	{
		using func_t = decltype(&PlayerCamera::UpdateThirdPerson);
		REL::Relocation<func_t> func{ RELOCATION_ID(49908, 50841) };
		return func(this, a_weaponDrawn);
	}
}
