public class Shikaku1 {
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
}
