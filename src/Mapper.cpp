#include "../include/Mapper.hpp"

Mapper::Mapper(uint8_t prgBanks, uint8_t chrBanks)
    : nPRGBanks(prgBanks), nCHRBanks(chrBanks) {}

Mapper::~Mapper() {}