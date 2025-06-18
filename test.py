class StudentCard:
    def __init__(self):
        print('初期化メソッド内の処理です')
        self.id = 0
        self.name = '未定'

a = StudentCard()
b = StudentCard()

a.id = 1234
a.name = '鈴木太郎'
b.id = 1235
b.name = '佐藤花子'