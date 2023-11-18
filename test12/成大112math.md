# 成大 112

1. Among the 900 three-digit integers (from 100 to 999) those such as 131, 222, 303, 717, 848, and 969, where the integer is the same whether it is read from left to right or from right to left, are called palindromes. Without actually determining all of these three-digit palindromes, we would like to determine their sum. Please calculate the sum of these palindrome ranging from 100 to 999.

    Step 1:

        from the side from 1 ~ 9, then get the middle count from 0~9
    Step 2:

        we get a set:
            101,111,121,131,141,151,161,171,181,191
            202,212,222,232,242,252,262,272,282,292
            ................................989,999
    Step 3:

        then we knew that we have a regular:
            each line we can  get 9 of n*101 and we get 0+10+20+...+90
        so, our answer is 

    $(9*10)/2 * 101 * 9 + 9*10*(9*10)/2 = 45 * 999 = 44955$

2. Determine the generating function for the sequence 1, 1, 1,...,1,0,0,..., where the first n+1 terms are 1.

    生成函數:

    $g(x) = 1 + x + x^2 + ... + x^n + 0x^{n+1} + 0x^{n+2} + ...$

    Ans: $g(x) = \frac{1 - x^{n+1}}{1 - x}$
3. How many bijective functions are there from a finite set A to a finite set B where $|A| = |B| = n$?

    $n * (n-1) * (n-2) * ... * 2 * 1$

    所以答案 = n!
4. Solve the recurrence relation $a_{n+2}-5a_{n+1}+6a_n=2,n \ge 0,a_0=3,a_1=7$.

    $a_0 = 3,a_1 = 7, a_2 = 19, a_3 = 50$

    ANS: $2*3^n + 1$

5. Let $a, b \in Z$ and let $2a + 3b$ be a multiple of 17. (For example, we could have a = 7, b = 1; and a = 4, b = 3 also works.) Determine that the following statement is true or false: 17 divides 9a + 5b.

    $2a + 3b \equiv 0 \pmod{17}$

    $26a + 39b \equiv 0 \pmod{17}$

    $(9+17)a + (17*2+5)b \equiv 0 \pmod{17}$
6. Determine the coordinate vector of w = (8, - 4, - 12) with respect to the basis{(1,1,1),(1,5,-3),(2,2,1)}.

    (8,-4,-12) = $c_1(1,1,1) + c_2 (1,5,-3) + c_3 (2,2,1)$

    解:

    (-53,-3,32)
7. Let ${u_1,u_2,u_3}$ be an orthonormal basis for an inner product space V. If $x = c_1u_1+c_2u_2+c_3u_3$ is a vector with the properties $||x|| = 5$, $\langle u_i,x \rangle = 4$, and $x \perp u_2$, then what are the possible values of $c_1,c_2,c_3$?

    $c_1=4,c_2=0,c_3=3$
8. Let A be a 5 by 7 matrix with rank 4.
    - (a) What is the dimension of the solution space of  Ax = 0?

        因為A的rank是4，所以A有4個無關的線性向量。
        因此，A 可以化簡成：$A = [I_4 | 0]$。
        所以$A^4$的dimension是4。
        所以 Ax = 0 解的dimension是 7 - 4 = 3。
    - (b) Is Ax = b consistent for all vectors b in $R^5$? Explain.

        如果 Ax = b 有解，那就代表b是a的row裡面的一個向量。
        因為A的rank=4，所以A的rank是 $R^5$ 的subspace，dimension = 4。
        假如 Ax = b 有解，b 就要滿足：b = A * c (c 是 $R^7$ 的一個subspace)
        因此以上代表不成立。
9. Given that the characteristic polynomial of a matrix A is
$p(\lambda)=(\lambda+1)(\lambda-2)^2(\lambda+3)^2$,find $det(A^{-1})$.

    特徵值: -1,2,2,-3

    特徵值全部都不是0: 可逆 ($A^{-1}$存在的意思)

    $det(A^{-1}) = \frac1{(-1)(2)(2)(-3)} = \frac1{12}$
10. True or False
    - (a) If A is an $n \times n$ matrix whose eigenvalues are all nonzero, then A is nonsingular.
    - (b) If A is a $5 \times 5$ matrix of rank 1 and $ \lambda = 0$ is an eigenvalue of multiplicity 4, then A is diagonalizable. (因為他是 rank 1 所以沒有basis)
    - (c) If A and B are row equivalent matrices, then their determinants are equal. (本來他的 row equivalent 就是 det 一樣的)
    - (d) If A isan invertible $n \times n$ matrix, then $rank(A^T) = 0$ (invertible rank 不能為 0)

    ANS: T F T F
