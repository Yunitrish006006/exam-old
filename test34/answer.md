# 中正 110 計算機系統

1. Selection
    1. C
    2. A
    3. D
    4. C [補充](https://zh.wikipedia.org/zh-tw/%E5%AD%98%E5%82%A8%E5%99%A8%E6%98%A0%E5%B0%84%E8%BE%93%E5%85%A5%E8%BE%93%E5%87%BA)
    5. B
    6. C
    7. B [A 補充](https://www.ptt.cc/bbs/Grad-ProbAsk/M.1316085108.A.4ED.html)
    8. A
    9. B
    10. A

2. s
    a. yes
    <!-- [RMS tutorial](https://www.youtube.com/watch?app=desktop&v=tCgeW_KXwHE)  
        N x (2^(1/N)-1) = 3 x (2^(1/3) - 1 ) = 0.7797
        u1 = 20/50 = 0.4  
        u2 = 30/100 = 0.3  
        u3 = 90/300 = 0.3  

        0.4 + 0.3 + 0.3 > 0.7797

        Miss will occur if apply RMS -->

    b. p1,p2,p3 => 20/50, 50/100,140/300, thus it can meet!  

3. 64-bit virual address, 32KB/each page, 4 byte per page entry table  
    a. 64/(3x8) = 2 ... 2

    so we need at least 3 levels

    b. T = (1 - hit ratio) x TLB access time + hit ratio x (TLB access time + memory access time)  
        T = (1 - 0.8) x 310 ns + 0.8 x (10 ns + 100 ns) = 150 ns  

4. safe

5. 4KB/8byte = 512byte
    8*(12+512+512^2+512^3) = 1 TB
