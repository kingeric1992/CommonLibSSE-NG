#include "RE/N/NiNode.h"

#include "RE/M/MemoryManager.h"

namespace RE
{
	NiNode* NiNode::Create(std::uint16_t a_arrBufLen)
	{
		auto node = malloc<NiNode>();
		std::memset((void*)node, 0, sizeof(NiNode));
		node->Ctor(a_arrBufLen);
		return node;
	}

	void NiNode::DetachChild(NiAVObject* a_child)
	{
		return DetachChild2(a_child);
	}

	void NiNode::DetachChild(NiAVObject* a_child, NiPointer<NiAVObject>& a_childOut)
	{
		return DetachChild1(a_child, a_childOut);
	}

	void NiNode::DetachChildAt(std::uint32_t a_idx)
	{
		return DetachChildAt2(a_idx);
	}

	void NiNode::DetachChildAt(std::uint32_t a_idx, NiPointer<NiAVObject>& a_childOut)
	{
		return DetachChildAt1(a_idx, a_childOut);
	}

	void NiNode::SetAt(std::uint32_t a_idx, NiAVObject* a_child)
	{
		return SetAt2(a_idx, a_child);
	}

	void NiNode::SetAt(std::uint32_t a_idx, NiAVObject* a_child, NiPointer<NiAVObject>& a_childOut)
	{
		return SetAt1(a_idx, a_child, a_childOut);
	}

	NiNode* NiNode::Ctor(std::uint16_t a_arrBuffLen)
	{
		using func_t = decltype(&NiNode::Ctor);
		static REL::Relocation<func_t> func{ RELOCATION_ID(68936, 70287) };
		return func(this, a_arrBuffLen);
	}
}
