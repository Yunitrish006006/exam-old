# 106 中興數學

## Part I Discrete Mathematics

1. Answer the following questions(20分,每題4分)
    - (i) What is the hexadecimal representation and binary representation of 899 (in decinal)?

        hexadecimal: 383

        binary: 1110000011
    - (ii) What are the minimal number of colors needed for a coloring of the graphs: $K_4$, and $Q_3$, which represent complete and hypercube respectively?

        complete: $K_4 = v−e+f = 6-4+1 = 3$

        hypercube: $Q_3 = 12-8+6 = 10$
    - (iii) How many paths of length 4 in the graph K4 between any two vertices?

        16
    - (iv)   In a set of 52 poker cards, each suit of spade, heart, diamond, and club has 13 cards.Now a boy selccts 4 cards at random without looking at them. How many cards must he select to be sure of having all cards of having the same suit? How many cards must he select to be sure of having 4 hearts?

        same suit:16

        4 hearts:43
    - (v) In a tri-ary tree, that is, every node has either 3 children or none. If the height of this tree is 4, then what is the minimum number and maximum number of nodes respectively?

        80

2. True orfalse(16分,每題2分,答錯倒扣1分)
    - T (a) If p is a prime and a is not divisible by p, then ap-l = 1 (mod p).
    - F (b) f(n)=10n-log n +3n2 +100 is O(n3).
    - T (c) The cardinality of rationals (Q) is the same as the cardinaity of integers (Z).
    - T (d) The edge connectivity of the complete bipartite graph Ks.3, k(Ks,3), is 5.
    - F (e)"$\neg (\exists x f(x))" = "\exists x \neg f(x)"$, where $\neg$ stands for "not", $\equiv$ for logical equivalent.
    - F ()  The minimal number of colors needed for a coloring of plannar graphs is no more than 5.
    - T (g) Let R be the relation on the set of integers such that (a,b) e R iff a = b (mod 99). R is an equivalence relation.
    - T (h) In a simple graph, if the degree of each vertex is even, then this graph has a Hamilton circuit.

03. Let L(x,y) be the statement ''x loves y", where the domain for both x and y consists of all people in the world. Use quantifiers to express the following statements.
    - (a) Somebody loves everybody.(6分)

        $\exists x \forall y L(x,y)$
    - (b) There are exactly two persons who love Trump.(8分)

        $\exists x L(x,Trump) = 2$

## Part II Linear Algebra

1. Let A and B square matrices such that AB = I. For each of the following statements, indicate whether the statement is true or  false, repectively. If the statement is true, prove it. If the statement is false, give a counterexample.
    - (a) 0 is not an eigenvalue of B.
    - (b) A is diagonalzable.
    - (c) The equation (A-B)x = 0 has only solution x = 0.
    - (d) A and B are row equivalent to each other.
    - (e) $A^TB^T = I$
2. Let $u_1 = (3,2,1), u_2 = (2,3,0)$,and the set $U = Span{u1,u2}$.
    - (a) Find the orthogonal complement of U.
    - (b) Find the orthogonal projection of (1,1,-1) onto U.
3. Let T(x) = Ax, where A is a $5 \times 4$ matrix of rank 3.
    - (a) What are the dimensions of the domain of T, the kernal of T, and the range of T.
    - (b) Given an example of such a matrix A and justify your answer.
4. By least squares, find the equation of the form $y = ax^2$ that best fits the following data.$\begin{array}{cc}x&y\\\hline -1&1\\0&1\\1&2\\\end{array}$
