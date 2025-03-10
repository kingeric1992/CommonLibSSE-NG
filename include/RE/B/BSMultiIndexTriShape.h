#pragma once

#include "RE/B/BSTriShape.h"
#include "RE/N/NiColor.h"
#include "RE/N/NiSmartPointer.h"

#include "REX/W32/D3D.h"

namespace RE
{
	namespace BSGraphics
	{
		class IndexBuffer;
	}

	class BSShaderProperty;

	class BSMultiIndexTriShape : public BSTriShape
	{
	public:
		inline static constexpr auto RTTI = RTTI_BSMultiIndexTriShape;
		inline static constexpr auto Ni_RTTI = NiRTTI_BSMultiIndexTriShape;
		inline static constexpr auto VTABLE = VTABLE_BSMultiIndexTriShape;

		~BSMultiIndexTriShape() override;  // 00

		// override (BSGeometry)
		const NiRTTI*         GetRTTI() const override;                           // 02
		NiObject*             CreateClone(NiCloningProcess& a_cloning) override;  // 17
		BSMultiIndexTriShape* AsMultiIndexTriShape() override;                    // 35 - { return this; }

		// members
		BSGraphics::IndexBuffer*    altIndexBuffer;            // 160
		std::uint32_t               altPrimCount;              // 168
		REX::W32::XMFLOAT4X4        materialProjection;        // 16C
		std::uint32_t               pad1AC;                    // 1AC
		NiPointer<BSShaderProperty> additionalShaderProperty;  // 1B0
		std::uint8_t                useAdditionalTriList;      // 1B8
		std::uint8_t                pad1B9;                    // 1B9
		std::uint16_t               pad1BA;                    // 1BA
		NiColorA                    materialParams;            // 1BC
		float                       materialScale;             // 1CC
		float                       normalDampener;            // 1D0
		std::uint32_t               unk1D4;                    // 1D4
	private:
		KEEP_FOR_RE()
	};
#ifndef SKYRIMVR
	static_assert(sizeof(BSMultiIndexTriShape) == 0x1D8);
#else
	static_assert(sizeof(BSMultiIndexTriShape) == 0x218);
	//static_assert(sizeof(BSMultiIndexTriShape) == 0x258); SKYRIM_SUPPORT_AE
#endif
}
