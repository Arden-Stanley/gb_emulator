#pragma once
#include <cstdint>
#include <unordered_map>

namespace gbe {

	enum class Registers {
		AF, BC, DE, 
		HL,	SP,	PC
	};

	class CPU {
	public:
		CPU();
	private:
		std::unordered_map<Registers, uint8_t> m_registers; 
	};
}