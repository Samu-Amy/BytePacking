#include "Operations.h"

#include <array>
#include <bitset>


//NOTE: 0 <= nBit < 8

uint8_t mask = 1;


// Get the n^th bit
uint8_t get(const uint8_t& byte, uint8_t nBit) {
	if (nBit > 7) return 0xFF;

	return (byte >> nBit) & mask;
}


// Set the n^th bit to 1
void set(uint8_t& outByte, uint8_t nBit) {
	if (nBit > 7) return;

	outByte |= mask << nBit;
}


// Set the n^th bit to 0
void clear(uint8_t& outByte, uint8_t nBit) {
	if (nBit > 7) return;

	outByte &= ~(mask << nBit);
}


// Toggle the n^th bit
void toggle(uint8_t& outByte, uint8_t nBit) {
	if (nBit > 7) return;

	outByte ^= mask << nBit;
}


// Print all bits in a byte
void printByte(const uint8_t& byte, const std::string& str) {
	std::cout << (!str.empty() ? ("\n" + str + ": ") : "\nByte: ") << std::bitset<8>(byte) << std::endl;
}
