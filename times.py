import sys

def kake_table(n):
    a = []
    for i in range(1, n+1):
        b = []
        for j in range(1, n+1):
            b.append(i * j)
        a.append(b)
    return a

def hyouji(table):
    # 乗算表を表示する関数。
    for b in table:
        for number in b:
            print(f"{number:3}", end=" ")  # 必要に応じてフォーマットを調整
        print()

if __name__ == "__main__":
    if len(sys.argv) == 1:
        # コマンドライン引数がない場合、9*9の乗算表を表示する
        n = 9
    else:
        try:
            n = int(sys.argv[1])
        except ValueError:
            print("Please provide a valid integer.")
            sys.exit(1)
    
    table = kake_table(n)
    hyouji(table)
