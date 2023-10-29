import numpy as np

# 创建一个复杂矩阵
A = np.array([[3,0,0], [0,2,0],[0,1,2]])

# 对矩阵进行对角化
eigenvalues, eigenvectors = np.linalg.eig(A)

print("特征值：", eigenvalues)
print("特征向量：", eigenvectors)