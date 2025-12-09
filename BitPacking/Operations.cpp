#include "Operations.h"

#include <array>
#include <bitset>


//NOTE: 0 <= nBit < 8

uint8_t mask = 1; // equal to 0x01 or 0b00000001, defined only for readability


// Get the n^th bit
uint8_t get(const uint8_t& byte, uint8_t nBit) {
	if (nBit > 7) return 0xFF; // out of bounds (since the returned value should be 00000000 or 00000001 if it's 11111111 means it's out of bounds)

	return (byte >> nBit) & mask;
}


// Set the n^th bit to 1
void set(uint8_t& outByte, uint8_t nBit) {
	if (nBit > 7) return; // out of bounds

	outByte |= mask << nBit; // shift the mask (00000001) by nBits and do a bitwise OR operation (the n^th bit becomes 1, the others remain the same)
}


// Set the n^th bit to 0
void clear(uint8_t& outByte, uint8_t nBit) {
	if (nBit > 7) return; // out of bounds

	outByte &= ~(mask << nBit); // shift the mask by nBits and do a bitwise AND using its Complement (reversed mask)
}


// Toggle the n^th bit
void toggle(uint8_t& outByte, uint8_t nBit) {
	if (nBit > 7) return; // out of bounds

	outByte ^= mask << nBit; // shift the mask (00000001) by nBits and do a bitwise XOR operation (toggle the n^th bit, the others remain the same)

	// XOR (if a and b are equals -> 0, else 1):
	// a b   a^b
	// 0 0 -> 0
	// 0 1 -> 1
	// 1 0 -> 1
	// 1 1 -> 0

	// a ^ 0 = a; -> remains the same
	// a ^ 1 = !a; -> inverted
}


// Print all bits in a byte
void printByte(const uint8_t& byte, const std::string& str) {
	//uint8_t mask = 1; // equal to 0x01 or 0b00000001

	//for (int8_t i = 7; i >= 0; i--) {
	//	std::cout << get(byte, i) << " "; // shift the bits and mask (to obtain a bool (00000000 or 00000001))
	//}

	//std::cout << std::endl;

	std::cout << (!str.empty() ? ("\n" + str + ": ") : "\nByte: ") << std::bitset<8>(byte) << std::endl;
}
