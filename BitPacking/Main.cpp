#include "Operations.h"

#include <iostream>


int main() {
	uint8_t byte = 0x00; // "Empty" byte (equal to 0b00000000)

	std::cout << "Size of a uint8_t: " << sizeof(byte) << " Byte" << std::endl;
	std::cout << "Size of a c++ bool: " << sizeof(bool) << " Byte" << std::endl;

	printByte(byte);

	
	// - Set Tests -
	set(byte, 4);
	printByte(byte, "Set 4");

	set(byte, 7);
	printByte(byte, "Set 7");

	set(byte, 4); // doesn't do anything since it's already 1
	printByte(byte, "Set 4");


	// - Clear Tests -
	clear(byte, 2); // doesn't do anything since it's already 0
	printByte(byte, "Clear 2");

	clear(byte, 7);
	printByte(byte, "Clear 7");


	// - Toggle Tests -
	toggle(byte, 1);
	printByte(byte, "Toggle 1");

	toggle(byte, 4);
	printByte(byte, "Toggle 4");


	// - Get Tests -
	printByte(get(byte, 1), "Get 1");

	printByte(get(byte, 5), "Get 5");


	// - Get Tests -
	/*uint8_t byte2 = 0b00101101;

	printByte(byte2, "Byte2");
	printByte(get(byte2, 0));
	printByte(get(byte2, 1));
	printByte(get(byte2, 2));
	printByte(get(byte2, 3));
	printByte(get(byte2, 4));
	printByte(get(byte2, 5));
	printByte(get(byte2, 6));
	printByte(get(byte2, 7));*/


	return 0;
}