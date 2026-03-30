#include "cpu.h"

namespace gbe {

	CPU::CPU() : m_registers({
		{ Registers::AF, 0 },
		{ Registers::BC, 0 },
		{ Registers::DE, 0 },
		{ Registers::HL, 0 },
		{ Registers::PC, 0 },
		{ Registers::SP, 0 }
	}) {

	}

}