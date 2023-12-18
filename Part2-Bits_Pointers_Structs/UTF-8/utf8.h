
#ifndef OHJELMOINNIN_TEKNIIKKA_C_UTF8_H
#define OHJELMOINNIN_TEKNIIKKA_C_UTF8_H

/**
 *  Takes a character in decimal form and encodes it to UTF-8 format
 *  Returns the bytes for the character in UTF-8 foramat
 * @param character
 * @param utf8
 */
void utf8_koodaa(unsigned int character, unsigned char utf8[]);

#endif /* OHJELMOINNIN_TEKNIIKKA_C_UTF8_H */
