# 107 中正 計算機系統

1. Selection
    - (1) D
    - (2) C
    - (3) C
    - (4) A
    - (5) A
    - (6) A
    - (7) C
    - (8) D
    - (9) A
    - (10) E
2. Ans:
    ManSize = (12x8KB +(2048x8KB) + (2048x2048x8KB) + (2048 x 2048 x 2048 x 8KB)) ~ 64TB
3. Ans:
    - (a)
        P1: 10 / 50 = 0.2  
        P2: 20 / 100 = 0.2  
        P3: 50 / 150 = 0.33  
        P4: 80 / 300 = 0.27  
        0.2 + 0.2 + 0.33 + 0.27  = 1  
        so it can meet  
    - (b)
        <= 1, then EDF can meet too
4. Ans:
    - (a) 8kb = 2^3 x 2^10 = 2^13  
        2^64 / 2^13 = 2^51  
        2^51 x 2^3 = 2 ^54 (pages)  
    - (b)5 levels (cache, L1, L2, memory, disk)
    - (c) 2^30 * 8  = 2^33
5. Ans:
    - now we can get 1 constant, so we have to add k times
    - and we have to multiply k times also
    thus if k datas input: $k(D_add + D_mul)$
    so if k = 16 => $result  = 16(0.1*D_mul + D_mul) = 17.6 D_mul$
6. Ans: if it can be done in parallel => k + 1 cycle (1 is the constant)
7. Ans:
    - locality of cache
8. Ans:
    - (a) 88, because (8, 20, 182) is first block, so 88 is the second block
    - (b) 8
    - (c) 7, because 8、20、182、88、40、98 、 57 is in the same block
    - (d) the first read access that has a cache hit is "8"
    - (e) 10 / 12, 182 except
