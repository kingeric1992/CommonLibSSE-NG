#pragma once

#include "RE/BaseFormComponent.h"  // BaseFormComponent
#include "RE/FormTypes.h"  // TESObjectARMO


namespace RE
{
	class BGSSkinForm : public BaseFormComponent
	{
	public:
		virtual ~BGSSkinForm();												// 00

		// override (BaseFormComponent)
		virtual void	Init() override;									// 01
		virtual void	ReleaseRefs() override;								// 02 - { return; }
		virtual void	CopyFromBase(BaseFormComponent* a_rhs) override;	// 03


		// members
		TESObjectARMO* skin;	// 08 - WNAM
	};
	STATIC_ASSERT(sizeof(BGSSkinForm) == 0x10);
}
