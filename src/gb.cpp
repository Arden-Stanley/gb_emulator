#include <iostream>
#include "memory.h"


int main(int argc, char* argv[]) {
	gbe::MMU memory;
	memory.view(0x5577);
	return 0;
}