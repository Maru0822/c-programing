import re
# pythonの時間を扱う関数
import datetime

def seireki_to_wareki(date_str):
    #正規表現でチェック
    # if not は偽を真として返す
    if not re.match(r'^\d{4}-\d{2}-\d{2}$', date_str):
        return "正しいフォーマットではありません。"

    try:
        date = datetime.datetime.strptime(date_str, "%Y-%m-%d")
    except ValueError:
        return "例外の日付です。"

    year, month, day = date.year, date.month, date.day

    if date >= datetime.datetime(2019, 5, 1):
        # 令和
        wareki_year = year - 2018
        nenngou = "令和"
    elif date >= datetime.datetime(1989, 1, 8):
        # 平成
        wareki_year = year - 1988
        nenngou = "平成"
    elif date >= datetime.datetime(1926, 12, 25):
        # 昭和
        wareki_year = year - 1925 
        nenngou = "昭和"
    else:
        return "対応する和暦がありません。"

    if wareki_year == 1:
        wareki_year_str = "元年"
    else:
        wareki_year_str = str(wareki_year) + "年"

    return f"{nenngou}{wareki_year_str}{month}月{day}日"

while True:
    date_str = input("西暦で日付を入力してください: ")

    if date_str == "":
        print("終了します。")
        break

    print(seireki_to_wareki(date_str))
