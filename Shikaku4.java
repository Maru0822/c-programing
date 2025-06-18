public class Shikaku4 {
    int width;
    int height;
    Shikaku4()
    {
        setSize(10,20);
    }
    Shikaku4(int w, int h)
    {
        setSize(w, h);
    }
    void setSize(int w, int h)
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
        Shikaku4 s1 = new Shikaku4();
        System.out.println("s1.width = " + s1.width);
        System.out.println("s1.height = " + s1.height);
        System.out.println("s1.getArea() = " + s1.getArea());
        Shikaku4 s2 = new Shikaku4(123,45);
        System.out.println("s2.width = " + s2.width);
        System.out.println("s2.height = " + s2.height);
        System.out.println("s2.getArea() = " + s2.getArea());
    }
}

