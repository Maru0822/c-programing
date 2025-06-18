public class Shikaku3 {
    int width;
    int height;

    void setSize(int w, int h)//幅と高さを設定するメソッド
    {
        width = w;
        height = h;
    }

    int getArea()//面積を計算するメソッド
    {
        return width * height;
    }

    public static void main(String[] args)
    {
        Shikaku2 s = new Shikaku2();
        s.setSize(123,45);//生成したインスタンスが持っている関数に引数を与えている
        System.out.println("s.width = " + s.width);
        System.out.println("s.height = " + s.height);
    }
}

