#ifndef EEPROM_H_
#define EEPROM_H_


void readGlobalSet();
bool readEEPROM();
void update_constants();
void writeGlobalSet(uint8_t b);
void writeParams(uint8_t b);
void LoadDefaults();

#endif
