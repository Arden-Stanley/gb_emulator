#pragma once
#include <cstdint>
#include <unordered_map>

namespace gbe {

	enum class Register {
		af, bc, de,    
		hl, pc, sp
	};

	class CPU {
	public:
		CPU();

	private:
		uint16_t af, bc, de,
			hl, pc, sp;
	};
}