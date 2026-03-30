#pragma once
#include <vector>
#include <cstdint>
#include <iostream>
#include <iomanip>

namespace gbe {

	class MMU {
	public:
		MMU();
		uint8_t read(uint16_t addr) const;
		void write(uint16_t addr, uint8_t data);
		void view(uint16_t addr) const;
	private:
		std::vector<std::uint8_t> m_memory;
	};
}