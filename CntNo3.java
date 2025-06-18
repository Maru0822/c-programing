public class CntNo3
{
    static int cnt = 0;//全てのインスタンスで共通のフィールドでcntを回しているでできる
    CntNo3()
    {
        cnt++; //このコンストラクタは下でnewインタンス生成がされた後に読み込まれる
    }
    public static void main(String args[])
    {
        CntNo3 c1 = new CntNo3(); //新しいインタスタンスが毎回呼び出される度に０になっているので＋＋で１になっている
        System.out.println(c1.cnt);
        CntNo3 c2 = new CntNo3();
        System.out.println(c2.cnt);
        System.out.println(c1.cnt);//2回目プリントすると２が出てきるのはcntは共有しているため、２になる
    }
}