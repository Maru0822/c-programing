class StudentCard:
    def __init__(self, id, name):#アンダーバーは2つ　初めに自分自身を引数として取り出す
        self.id = id#引数に代入
        self.name = name

    def print_info(self):
        print('学籍番号:', self.id)
        print('氏名:', self.name)

a = StudentCard(1234, '鈴木太郎')# ID 名前
b = StudentCard(1235, '佐藤花子')
a.print_info()
b.print_info()