//
//  han256.h
//
//  Created by Luke on 2022-12-28.
//

#ifndef han256_h
#define han256_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// This method will convert han256 to binary
uint8_t *hanzi2binary(char *han256);

// This method will convert binary to han256
char *binary2hanzi(uint8_t *binary, int count);

#endif /* han256_h */
