# 111 成大 程式設計

1. (A)

    ``` c
        *stk = *tmp;
    ```

    (B)

    ``` c
        *new_node->prev = stk;
    ```

2. A

3. [教學](https://alrightchiu.github.io/SecondRound/red-black-tree-introjian-jie.html)
    A D 則一，A較合理，故答案為A

4. (A) 8 is in, (F) 9 is in

5. [教學](https://cs.lmu.edu/~ray/notes/abtrees/)
    - delete 70
            |    ~   | 50,80  |   ~   |
            |  10,20 |   60   | 90,95 |
    - delete 60
            |    ~   | 50,80  |   ~   |
            |  10,20 |   60   | 90,95 |

6. X

7. (A)

8. (A) 52 (B) 1 (C) 20 (D) 35 (E) 82

9. (A) i++; (B) return i; (C) arr, front, pivot -1 (D) arr, pivot + 1, end

10. (B) inorder, (B) 6  -- C, E

11. ?(A) 15, (A) 13, (A) 13

12. X

13. $T(n)
    \\ = 2T(\frac{n}{4}) + \sqrt{n}log(n)
    \\ = 2 (2T(\frac{n}{16}) + \sqrt{\frac{n}{4}}log(\frac{n}{4})) + \sqrt{n}log(n)
    $

    => $
        T(n) = 4 \left(2T\left(\frac{n}{64}\right) + \sqrt{\frac{n}{16}}log\left(\frac{n}{16}\right)\right) + 2\sqrt{n}log(n) \\
        = 8 \left(2T\left(\frac{n}{256}\right) + \sqrt{\frac{n}{64}}log\left(\frac{n}{64}\right)\right) + 4\sqrt{n}log(n) \\
        \vdots \\
        = 2^k \left(2T\left(\frac{n}{2^{k+1}}\right) + \sqrt{\frac{n}{2^k}}log\left(\frac{n}{2^k}\right)\right) + k\sqrt{n}log(n) \\
      $

    Ans: $O(\sqrt{n}log(n))$

14. $C = \sum_{i=1}^n p_i \cdot d_i + \sum_{i=0}^n q_i \cdot (d_i - 1)$  

    $
    p_i = \begin{cases}
    0.08 & ,i = 1 \\
    0.15 & ,i = 2 \\
    0.05 & ,i = 3 \\
    0.1 & ,i = 4 \\
    0.12 & ,i = 5
    \end{cases}$  

    $
    q_i = \begin{cases}
    0.04 & ,i = 0 \\
    0.1 & ,i = 1 \\
    0.08 & ,i = 2 \\
    0.1 & ,i = 3 \\
    0.06 & ,i = 4 \\
    0.12 & ,i = 5
    \end{cases}$

    $C = \\
    0.08 \cdot 1 + 0.15 \cdot 2 + 0.05 \cdot 3 + 0.1 \cdot 4 + 0.12 \cdot 5 + 0.04 \cdot 0 + 0.1 \cdot 1 + 0.08 \cdot 2 + 0.1 \cdot 3 + 0.06 \cdot 4 + 0.12 \cdot 5
    \\ = 1.56$

    Ans: 1.56

15. Given a directed and strongly connected graph G = (V, E), please design an algorithm to
determine whether it contains a (directed) cycle of odd length.

    ``` python
        def contains_odd_cycle(G):
            dfs_order = dfs(G) # dfs 先跑過一遍

            next_vertex = {}
            for v in G.vertices:
                next_vertex[v] = dfs_order[v - 1] # 把每個頂點都記錄下一個到的地方

            for v in G.vertices:
                if len(G.outgoing_edges(v)) == 0: # 若找到"出度"為0則是有找到
                    return True

            return False

        # 示範範例
        G = directed_graph([(0, 1), (1, 2), (2, 0), (0, 3), (3, 2)])
        print(contains_odd_cycle(G))
    ```

16. 解法 想像成線段

    $
        \begin{align}
        x_1 - x_3 &\le 1 \\
        x_2 - x_3 &\le -4 \\
        x_4 - x_5 &\le 2 \\
        x_2 - x_4 &\le 7 \\
        x_5 - x_1 &\le 5 \\
        x_4 - x_2 &\le 10
        \end{align}
    $

    $\text{先把 } x_2 - x_3 \le -4 \text{ 轉為 } x_3 - x_2 \le 4$

    然後畫圖出來 就發現無解了

17. Ans:

    ``` Bard 說
        給定一個有限集合 X 和集合 F，其中每個元素 x 都屬於至少一個集合 S ∈ F，集合覆蓋問題是找到一個最小大小的子集 F，其元素覆蓋了所有 X。

        給定一個 6-近似算法來找到集合覆蓋，滿足

        |C| ≤ δ |C*|
        其中 C* 是最佳解。請計算 6 的最小值。

        首先，我們可以看到，如果 δ > 1，則 C 的大小必然大於 C*。因此，δ 必須等於或小於 1。

        如果 δ = 1，則 C 的大小等於 C*。因此，6 的最小值是 1。

        證明：

        假設 δ > 1，則 C 的大小必然大於 C*。

        證明：

        設 C* 的大小為 k。則存在一個子集 C ∈ F，滿足 |C| = k 且 C 覆蓋了 X。

        由 δ > 1，可得

        |C| ≤ δ |C*| = δk
        但 |C| = k，因此 δk ≤ k。

        又因為 δ > 1，因此 k < δk。

        矛盾。

        因此，δ 必須等於或小於 1。

        由以上證明，6 的最小值是 1。

        答案：1
    ```
