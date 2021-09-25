// Copyright 2019-2021 The jdh99 Authors. All rights reserved.
// ���ģ��
// Authors: jdh99 <jdh821@163.com>

#include "tzrandom.h"

#include <stdlib.h>

// TZRandomSetSeed �������������
void TZRandomSetSeed(int seed) {
    srand((uint32_t)seed);
}

// TZRandomGetRand ��ȡ�����
// �������Χ��min-max֮��,����min��max
uint32_t TZRandomGetRand(uint32_t min, uint32_t max) {
    return (uint32_t)rand() % (max + 1 - min) + min;
}

// TZRandomGetCoin ��ȡӲ�ҵ�������
bool TZRandomGetCoin(void) {
    return rand() % 2 == 0;
}
