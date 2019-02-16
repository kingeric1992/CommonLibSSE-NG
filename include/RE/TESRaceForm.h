#pragma once

#include "RE/BaseFormComponent.h"  // BaseFormComponent
#include "RE/FormTypes.h"  // TESRace


namespace RE
{
	class TESRaceForm : public BaseFormComponent
	{
	public:
		virtual ~TESRaceForm();												// 00

		// override (BaseFormComponent)
		virtual void	Init() override;									// 01 - { race = 0; }
		virtual void	ReleaseRefs() override;								// 02 - { return; }
		virtual void	CopyFromBase(BaseFormComponent* a_rhs) override;	// 03


		// members
		TESRace* race;	// 08 - RNAM
	};
	STATIC_ASSERT(sizeof(TESRaceForm) == 0x10);
}
