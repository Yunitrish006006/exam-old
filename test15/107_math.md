# 107 成大

1. Let $A=\begin{bmatrix}2&5&4\\6&3&0\\6&3&0\\2&5&4\end{bmatrix}$, R: range , N: nullspace
    - (a) Find the singular value decomposition of A.

        $A^T=\begin{bmatrix}2&6&6&2\\5&3&3&5\\4&0&0&4\end{bmatrix}$

        $AA^T=\begin{bmatrix}2&5&4\\6&3&0\\6&3&0\\2&5&4\end{bmatrix}\begin{bmatrix}2&6&6&2\\5&3&3&5\\4&0&0&4\end{bmatrix}$

        $w =\begin{bmatrix}45&27&27&45\\27&45&45&27\\27&45&45&27\\45&27&27&45\end{bmatrix}$

        Since $W x = \lambda x $ then $(W- \lambda I) x = 0$

        $\begin{bmatrix}45-\lambda&27&27&45\\27&45-\lambda&45&27\\27&45&45-\lambda&27\\45&27&27&45-\lambda\end{bmatrix}x=0$
    - (b) Find the orthonormal bases of $R(A^T)$.
    - (c) Find the orthonormal bases of $R(A)$.
    - (d) Find the orthonormal bases of $N(A)$.
    - (e) Find the orthonormal bases of $N(A^T)$.

2. Let $M=\begin{bmatrix}a&0&a\\a&2a&-2a\\a&a&0\end{bmatrix}$ , where a=1.
    - (a) Find the minimal polynomial of M
    - (b) Find the Jordan canonical form of M.
    - (c) Find the Jordan basis for M.

3. Let $M=\begin{bmatrix}2&2&0&0\\2&6&-2&0\\0&-2&5&-2\\0&0&-2&3\end{bmatrix}$
    - (a) Whether matrix M is positive definite? Why?
    - (b) Are all eigenvalues of M greater than O and smaller than 2? Why?

4. Let $M=\begin{bmatrix}-2&1&-1\\0&2&1\\-4&2&2\\0&4&0\end{bmatrix}$ and $b = \begin{bmatrix}-5\\5\\5\\-10\end{bmatrix}$ Please find a vector P such that P is in the column space of M and b-P is orthogonal to every vector in the
column space of M.

5. Suppose we randomly choose nomnegative integers $x_1,x_2,x_3, \text{and } x_4$ that solve the equation $x_1+x_2+x_3+x_4=10$. We assume that each solution has an equal probability of being chosen. Given that at Least one of $x_1$ and $x_2$ is equal to 2, what is the probability that.$x_2 = 2$?

    $\frac{H^8_4}{H^8_4+H^8_4-H^6_4} = \frac{C^{11}_4}{C^{11}_4+C^{11}_4-C^9_4} = \frac{330}{330+330+126} = $
6. Suppose that Mark selects a ball by first picking one of two boxes at random and then
selecting a ball from this box at random. The first box contains 5 red balls and 4 blue
balls, and the second box contains 3 red balls and 6 blue balls. What is the probability
that Mark picked a ball from the second box if he has selected a red ball?

    $\frac{\frac{3}{3+6}}{\frac{5}{4+5}+\frac{3}{3+6}} = \frac{3}{8}$

7. Solve the following recurrence relation:

    $3a_n - 6a_{n-1}-3a_{n-2}+6a_{n-3}=0$

    with $a_0 = 1,a_1 = 0,a_2 = 7$.
8. Find the set of all solutions x to the system of congruences:

    $x \equiv 4(mod 5) \text{ and } x \equiv 5(mod 15)$

    另 x = 4 + 5t

    $4+5t \equiv 5(mod 15)$

    $3t \equiv 1(mod 15) => t \equiv 5(mod15) => t = 5+15k$

    $x = 4 + 5(5+15k) = 29+75k$
