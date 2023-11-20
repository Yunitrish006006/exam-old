# 107 成大

1. Let $A=\begin{bmatrix}2&5&4\\6&3&0\\6&3&0\\2&5&4\end{bmatrix}$, R: range , N: nullspace
    - (a) Find the singular value decomposition of A.

        $A^T=\begin{bmatrix}2&6&6&2\\5&3&3&5\\4&0&0&4\end{bmatrix}$

        $AA^T=\begin{bmatrix}2&5&4\\6&3&0\\6&3&0\\2&5&4\end{bmatrix}\begin{bmatrix}2&6&6&2\\5&3&3&5\\4&0&0&4\end{bmatrix}$

        $w =\begin{bmatrix}45&27&27&45\\27&45&45&27\\27&45&45&27\\45&27&27&45\end{bmatrix}$

        Since $W x = \lambda x $ then $(W- \lambda I) x = 0$

        $\begin{bmatrix}45-\lambda&27&27&45\\27&45-\lambda&45&27\\27&45&45-\lambda&27\\45&27&27&45-\lambda\end{bmatrix}x=0$
    - (b) Find the orthonormal bases of $R(A^T)$.

        $v_1 = \begin{bmatrix} 2 \\ 5 \\ 4 \end{bmatrix}$

        $v_2 = \begin{bmatrix} 6 \\ 3 \\ 0 \end{bmatrix} - \frac{\begin{bmatrix} 6 \\ 3 \\ 0 \end{bmatrix} \cdot \begin{bmatrix} 2 \\ 5 \\ 4 \end{bmatrix}}{\begin{bmatrix} 2 \\ 5 \\ 4 \end{bmatrix} \cdot \begin{bmatrix} 2 \\ 5 \\ 4 \end{bmatrix}} \begin{bmatrix} 2 \\ 5 \\ 4 \end{bmatrix} = \begin{bmatrix} -4 \\ -3 \\ 0 \end{bmatrix}$

        $v_3 = \begin{bmatrix} 6 \\ 3 \\ 0 \end{bmatrix} - \frac{\begin{bmatrix} 6 \\ 3 \\ 0 \end{bmatrix} \cdot \begin{bmatrix} 2 \\ 5 \\ 4 \end{bmatrix}}{\begin{bmatrix} 2 \\ 5 \\ 4 \end{bmatrix} \cdot \begin{bmatrix} 2 \\ 5 \\ 4 \end{bmatrix}} \begin{bmatrix} 2 \\ 5 \\ 4 \end{bmatrix} - \frac{\begin{bmatrix} 6 \\ 3 \\ 0 \end{bmatrix} \cdot \begin{bmatrix} -4 \\ -3 \\ 0 \end{bmatrix}}{\begin{bmatrix} -4 \\ -3 \\ 0 \end{bmatrix} \cdot \begin{bmatrix} -4 \\ -3 \\ 0 \end{bmatrix}} \begin{bmatrix} -4 \\ -3 \\ 0 \end{bmatrix} = \begin{bmatrix} 2 \\ -1 \\ 0 \end{bmatrix}$

        Finally, we normalize the vectors in this basis to find an orthonormal basis.

        $u_1 = \frac{v_1}{\sqrt{29}} = \begin{bmatrix} \frac{2}{\sqrt{29}} \\ \frac{5}{\sqrt{29}} \\ \frac{4}{\sqrt{29}} \end{bmatrix}$

        $u_2 = \frac{v_2}{\sqrt{25}} = \begin{bmatrix} -\frac{4}{\sqrt{25}} \\ -\frac{3}{\sqrt{25}} \\ 0 \end{bmatrix}$

        $u_3 = \frac{v_3}{\sqrt{5}} = \begin{bmatrix} \frac{2}{\sqrt{5}} \\ -\frac{1}{\sqrt{5}} \\ 0 \end{bmatrix}$
    - (c) Find the orthonormal bases of $R(A)$.

        $R(A)=\begin{bmatrix}2&5&4\\6&3&0\\6&3&0\\2&5&4\end{bmatrix}$

        $R(A)=\begin{bmatrix}1&0&0\\0&1&0\\0&0&1\\0&0&0\end{bmatrix}$

        $v_1 = \begin{bmatrix}2\\6\\6\\2\end{bmatrix}$

        $v_2 = \begin{bmatrix}5\\3\\3\\5\end{bmatrix}-\frac{\begin{bmatrix}5\\3\\3\\5\end{bmatrix} \cdot \begin{bmatrix}2\\6\\6\\2\end{bmatrix}}{\begin{bmatrix}2\\6\\6\\2\end{bmatrix} \cdot \begin{bmatrix}2\\6\\6\\2\end{bmatrix}} \begin{bmatrix}2\\6\\6\\2\end{bmatrix} = \begin{bmatrix}-\frac{15}{8}\\0\\\frac{1}{4}\\0\end{bmatrix}$

        $v_3 = \begin{bmatrix}4\\0\\0\\4\end{bmatrix}-\frac{\begin{bmatrix}4\\0\\0\\4\end{bmatrix} \cdot \begin{bmatrix}2\\3\\6\\2\end{bmatrix}}{\begin{bmatrix}2\\3\\6\\2\end{bmatrix} \cdot \begin{bmatrix}2\\3\\6\\2\end{bmatrix}} \begin{bmatrix}2\\3\\6\\2\end{bmatrix}-\frac{\begin{bmatrix}4\\0\\0\\4\end{bmatrix} \cdot \begin{bmatrix}5\\3\\3\\5\end{bmatrix}}{\begin{bmatrix}5\\3\\3\\5\end{bmatrix} \cdot \begin{bmatrix}5\\3\\3\\5\end{bmatrix}} \begin{bmatrix}5\\3\\3\\5\end{bmatrix} = \begin{bmatrix}\frac{1}{2}\\-\frac{1}{2}\\0\\\frac{1}{2}\end{bmatrix}$

        $Q = \begin{bmatrix}\frac{2}{20}\\\frac{6}{20}\\\frac{6}{20}\\\frac{2}{20}\end{bmatrix},\begin{bmatrix}-\frac{15}{8\sqrt{89}}\\0\\\frac{1}{4\sqrt{89}}\\0\end{bmatrix},\begin{bmatrix}\frac{1}{2\sqrt{29}}\\-\frac{1}{2\sqrt{29}}\\0\\\frac{1}{2\sqrt{29}}\end{bmatrix}$
    - (d) Find the orthonormal bases of $N(A)$.

        $A = \begin{bmatrix}
        2 & 5 & 4 \\
        6 & 3 & 0 \\
        6 & 3 & 0 \\
        2 & 5 & 4
        \end{bmatrix}$

        $R = \begin{bmatrix}
        1 & 0 & 0 \\
        0 & 1 & 0 \\
        0 & 0 & 1 \\
        0 & 0 & 0
        \end{bmatrix}$

        $B = \begin{bmatrix}
        1 \\
        6 \\
        6 \\
        2
        \end{bmatrix}, \begin{bmatrix}
        0 \\
        -3 \\
        3 \\
        5
        \end{bmatrix}$

        $Q = \begin{bmatrix}
        \frac{1}{\sqrt{29}} \\
        \frac{6}{\sqrt{29}} \\
        \frac{6}{\sqrt{29}} \\
        \frac{2}{\sqrt{29}}
        \end{bmatrix}, \begin{bmatrix}
        0 \\
        -1 \\
        1 \\
        \frac{5}{3}
        \end{bmatrix}$

        $O = \begin{bmatrix}
        \frac{1}{2\sqrt{29}} \\
        -\frac{1}{2\sqrt{29}} \\
        0 \\
        \frac{1}{2\sqrt{29}}
        \end{bmatrix}, \begin{bmatrix}
        0 \\
        -\frac{1}{3} \\
        \frac{1}{\sqrt{2}} \\
        \frac{5}{3\sqrt{2}}
        \end{bmatrix}$
    - (e) Find the orthonormal bases of $N(A^T)$.

        $A^T = \begin{bmatrix}2 & 6 & 2 \\ 5 & 3 & 5 \\ 4 & 0 & 4\end{bmatrix}$

        $A^T = \begin{bmatrix}2 & 6 & 2 \\ 5 & 3 & 5 \\ 4 & 0 & 4\end{bmatrix}$

        $R = \begin{bmatrix}1 & 0 & -1 \\ 0 & 1 & 2 \\ 0 & 0 & 0\end{bmatrix}$

        $B = \begin{bmatrix}
        1 \\
        5 \\
        4
        \end{bmatrix}, \begin{bmatrix}
        0 \\
        -1 \\
        2
        \end{bmatrix}$

        $Q = \begin{bmatrix}
        \frac{1}{\sqrt{41}} \\
        \frac{5}{\sqrt{41}} \\
        \frac{4}{\sqrt{41}}
        \end{bmatrix}, \begin{bmatrix}
        0 \\
        -\sqrt{\frac{6}{41}} \\
        \sqrt{\frac{5}{41}}
        \end{bmatrix}$

        $O = \begin{bmatrix}
        \frac{1}{3\sqrt{41}} \\
        \frac{5}{3\sqrt{41}} \\
        \frac{4}{3\sqrt{41}}
        \end{bmatrix}, \begin{bmatrix}
        0 \\
        -\frac{\sqrt{6}}{6} \\
        \frac{\sqrt{5}}{6}
        \end{bmatrix}$

2. Let $M=\begin{bmatrix}a&0&a\\a&2a&-2a\\a&a&0\end{bmatrix}$ , where a=1.

    $M=\begin{bmatrix}1-\lambda&0&1\\1&2-\lambda&-2\\1&1&-\lambda\end{bmatrix}$

    - (a) Find the minimal polynomial of M

        $(\lambda - 1)^3$
    - (b) Find the Jordan canonical form of M.

        $J_n = \begin{bmatrix}λ&1&0&\cdots&0\\0&λ&1&\cdots&0\\\vdots&\vdots&\ddots&\ddots&\vdots\\0&0&0&\ddots&\lambda\end{bmatrix}$

        $J = \begin{bmatrix}0&1&0\\0&2&0\\0&0&2\end{bmatrix}$

    - (c) Find the Jordan basis for M.

        $J = \begin{bmatrix}0&1&0\\0&2&0\\0&0&2\end{bmatrix}$

        $B = \begin{bmatrix}1\\0\\0\end{bmatrix},\begin{bmatrix}0\\1\\0\end{bmatrix},\begin{bmatrix}0\\0\\1\end{bmatrix}$

3. Let $M=\begin{bmatrix}2&2&0&0\\2&6&-2&0\\0&-2&5&-2\\0&0&-2&3\end{bmatrix}$
    - (a) Whether matrix M is positive definite? Why?

        positive definite:
            symmetric? yes
            eigenvalues?

                $2 > 0$

                $2*6-2*2 = 8 > 0$

                $2*6*5-2*(-2)*5-2*2*5 = 20 > 0$

                $2*6*5*3-2*(-2)*5*3-2*2*5*3-2*2*6*-2 = 208 > 0$
            
            two of which is all satisfied, so the answer is yes.

    - (b) Are all eigenvalues of M greater than O and smaller than 2? Why?

        $\begin{bmatrix}2-\lambda&2&0&0\\2&6-\lambda&-2&0\\0&-2&5-\lambda&-2\\0&0&-2&3-\lambda\end{bmatrix}$

        $\lambda^4-16\lambda^3+68\lambda^2-80\lambda+32 = 0$

        if a matrix is positive definite, then all of its eigenvalues are positive. Therefore, all of the roots of the characteristic polynomial of Matrix M must be positive.

        so,yes

4. Let $M=\begin{bmatrix}-2&1&-1\\0&2&1\\-4&2&2\\0&4&0\end{bmatrix}$ and $b = \begin{bmatrix}-5\\5\\5\\-10\end{bmatrix}$ Please find a vector P such that P is in the column space of M and b-P is orthogonal to every vector in the
column space of M.

    $P = M(M^TM)^{-1}b = \begin{bmatrix}-2&1&-1\\0&2&1\\-4&2&2\\0&4&0\end{bmatrix}(\begin{bmatrix}-2&0&-4\\1&2&2\\-1&1&2\end{bmatrix})^-1\begin{bmatrix}-5\\5\\5\\-10\end{bmatrix}=\begin{bmatrix}-2\\-7\\-4\\-4\end{bmatrix}$

    $b-P=\begin{bmatrix}-5\\5\\5\\-10\end{bmatrix}-\begin{bmatrix}-2\\-7\\-4\\-4\end{bmatrix}=\begin{bmatrix}-3\\13\\9\\-6\end{bmatrix}$

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
