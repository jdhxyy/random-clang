// Copyright 2019-2021 The jdh99 Authors. All rights reserved.
// 随机模块
// Authors: jdh99 <jdh821@163.com>

#include "tzrandom.h"

#include <stdlib.h>

// TZRandomSetSeed 设置随机数种子
void TZRandomSetSeed(int seed) {
    srand((uint32_t)seed);
}

// TZRandomGetRand 读取随机数
// 随机数范围在min-max之间,包括min和max
uint32_t TZRandomGetRand(uint32_t min, uint32_t max) {
    return (uint32_t)rand() % (max + 1 - min) + min;
}

// TZRandomGetCoin 获取硬币的正反面
bool TZRandomGetCoin(void) {
    return rand() % 2 == 0;
}
