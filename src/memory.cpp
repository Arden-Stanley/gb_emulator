#include "memory.h"

namespace gbe {

	MMU::MMU(): m_memory(0x10000, 0) {}

	uint8_t MMU::read(uint16_t addr) const {
		return m_memory.at(addr);
	}

	void MMU::write(uint16_t addr, uint8_t data) {
		m_memory[addr] = data;
	}

	void MMU::view(uint16_t addr) const {
		std::cout << "Byte at 0x" << std::hex
			<< addr	<< ": 0x" 
			<< std::setfill('0') << std::setw(2)
			<< static_cast<int>(m_memory.at(addr))
			<< std::endl;
	}

}