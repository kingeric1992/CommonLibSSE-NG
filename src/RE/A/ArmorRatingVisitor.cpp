#include "RE/A/ArmorRatingVisitor.h"

namespace RE
{
	bool ArmorRatingVisitor::HaveNotVisitedArmor(TESObjectARMO* a_armor)
	{
		using func_t = decltype(&ArmorRatingVisitor::HaveNotVisitedArmor);
		REL::Relocation<func_t> func(REL::Offset(0x6BC120));
		return func(this, a_armor);
	}

	void ArmorRatingVisitor::VisitArmor(TESObjectARMO* a_armor)
	{
		using func_t = decltype(&ArmorRatingVisitor::VisitArmor);
		REL::Relocation<func_t> func(REL::Offset(0x6BC090));
		return func(this, a_armor);
	}
}
