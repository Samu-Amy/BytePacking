#pragma once

#include <iostream> // includes also string and cstdint


//NOTE: 0 <= nBit < 8


// Get the n^th bit
uint8_t get(const uint8_t& byte, uint8_t nBit);


// Set the n^th bit to 1
void set(uint8_t& outByte, uint8_t nBit);


// Set the n^th bit to 0
void clear(uint8_t& outByte, uint8_t nBit);


// Toggle the n^th bit
void toggle(uint8_t& outByte, uint8_t nBit);


// Print all bits in a byte
void printByte(const uint8_t& byte, const std::string& str = "");
