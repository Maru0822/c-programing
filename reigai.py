# print ('a / y の計算をします')
# a = input ('aの値を入力してください: ')
# b = input ('bの値を入力してください: ')
# c = float(a) / float(b)
# print('答え',c)
# 入力された値が、数字でない場合やbの値がゼロの場合にエラーが起きることを踏まえて。

print('a / b の計算をします')
try:
    a = input('aの値を入力してください: ')
    b = input('bの値を入力してください: ')
    c = float(a) / float(b)
    print('答えは', c)
except ValueError:
    print('入力が数字ではありません')
except ZeroDivisionError:
    print('ゼロで割ることは出来ません')

print('処理を終わります')
# こうするとexceptが働いてエラーが出なくなる。
# errorの種類にはValueerror zerodivisionerrorがある
