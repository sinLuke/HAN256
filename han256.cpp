//
//  han256.c
//
//  Created by Luke on 2022-12-28.
//

#include "han256.h"

char *hanzi = "的一是不了人我在有他这中大来上国个到说们为子和你地出道也时年得就那要下以生会自着去之过尹家学对可她里后小么心多天而能好都然没日于起还发成事只作当想看文无开手十用主行方又如前所本见经头面公同三宇老从动两长知民样现分将外但身些与高意进把法此实回二理美点月明其种声全工己话儿者向情部正名定女问力机给等几很业最间新什打便位因重被走电四第门相次东政海口使教西再平真听世气信北少关并内加化由却代军产入先山五太水万市眼体别处总才场师书比住员九笑性通目华报立马命张活难神数件安表原车白应路期叫死常提感金何更反合放做系计或司利受光";

uint8_t *hanzi2binary(char *han256) {
    uint8_t hanziStride = strlen("的");
    char *hanPtr = han256;
    int count = 0;
    while (*hanPtr != 0) {
        count++;
        hanPtr++;
    }
    if (count % hanziStride != 0) return NULL;
    uint8_t *binary = (uint8_t *)malloc(sizeof(uint8_t) * (count / hanziStride));
    uint8_t *binaryPtr = binary;
    hanPtr = han256;
    while (*hanPtr != 0) {
        for (int value = 0; value < 256 * 3; value += hanziStride) {
            
            char current[10] = "";
            strncpy(current, hanPtr, hanziStride);
            
            char target[10] = "";
            strncpy(target, hanzi + value, hanziStride);
            
            if (strcmp(target, current) == 0) {
                *binaryPtr = value / hanziStride;
                binaryPtr ++;
                break;
            }
        }
        hanPtr += hanziStride;
    }
    return binary;
}

char *binary2hanzi(uint8_t *binary, int count) {
    uint8_t hanziStride = strlen("的");
    char *han256 = (char *)malloc(sizeof(char) * count * hanziStride);
    char *han256Ptr = han256;
    for (uint8_t index = 0; index < count; index ++) {
        int value = binary[index] * hanziStride;
        strncpy(han256Ptr, hanzi + value, hanziStride);
        han256Ptr += hanziStride;
    }
    return han256;
}
