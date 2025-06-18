import numpy as np
import matplotlib.pyplot as plt
 
x = np.arange(-100, 100, 1)
y = x*x
 
plt.plot(x, y)
 
plt.savefig("houbutu.svg")   # プロットしたグラフをファイルsin.pngに保存する
plt.show()