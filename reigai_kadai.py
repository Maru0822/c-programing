l = ['リンゴ','バナナ','オレンジ']
try:
    a = input('好きな整数を入力してください: ')
    print(l[int (a)])
except ValueError:
    print('正しく整数が入力されていません')
except IndexError:
    print('範囲外の数字が入力されています')

