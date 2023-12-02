# 110 中興資工乙組資訊概論

1. Ans:
    - b: 因為該陣列中不一定照順序，所以可以用順序找出數字，但不能直接去找一個特定的值。
2. Ans:
    - b
3. Ans:
    - b
4. Ans:
    - d
5.

6.

7.

8.

9.

10.

11.

12.

13.

14. Ans:
    - AddRoundKey: 矩陣中的每一個位元組都與該次回合金鑰（round key）做XOR運算；每個子金鑰由金鑰生成方案產生
    - SubBytes: 透過一個非線性的替換函數，用尋找表的方式把每個位元組替換成對應的位元組
    - ShiftRows: 將矩陣中的每個橫列進行循環式移位。
    - MixColumns: 為了充分混合矩陣中各個直行的操作。這個步驟使用線性轉換來混合每行內的四個位元組。最後一個加密迴圈中省略MixColumns步驟，而以另一個AddRoundKey取代

15.

16. Ans:
    | Algorithm | Best | Average | Worst |
    |:---------:|:----:|:-------:|:-----:|
    | Insertion |   n  |  $n^2$  | $n^2$ |
    |   Quick   | nlogn|  nlogn  | $n^2$ |
    |   Merge   | nlogn|  nlogn  | nlogn |
    |    Heap   | nlogn|  nlogn  | nlogn |

17. Ans:
    - Stable soring: 同鍵值的資料，排序後順序和排序前一樣
    - In-place: 使用資料原來的資料結構(陣列)進行排序，不需使用暫存的輔助資料結構
18. Ans:
    - a: T
    - b: F 不能只跑一次
    - c: T
19. Ans:
    - P: 指在多項式時間內，可以找出解的決定性問題(decision problem)。
    - NP: 包含可在多項式時間內驗證其解是否正確，但不保證能在多項式時間內能找出解的決定性問題。
