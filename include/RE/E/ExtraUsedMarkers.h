#pragma once

#include "RE/B/BSTArray.h"
#include "RE/B/BSExtraData.h"
#include "RE/M/MarkerUsedData.h"
#include "RE/E/ExtraDataTypes.h"


namespace RE
{
	class ExtraUsedMarkers : public BSExtraData
	{
	public:
		inline static constexpr auto RTTI = RTTI_ExtraUsedMarkers;
		inline static constexpr auto EXTRADATATYPE = ExtraDataType::kUsedMarkers;


		virtual ~ExtraUsedMarkers();  // 00

		// override (BSExtraData)
		virtual ExtraDataType GetType() const override;	 // 01 - { return kUsedMarkers; }


		// members
		BSTArray<MarkerUsedData> usedMarkers;  // 10
	};
	static_assert(sizeof(ExtraUsedMarkers) == 0x28);
}