public class CntNo2
{
    static int cnt = 0;//全てのインスタンスで共通のフィールドでcntを回しているでできる
    CntNo2()
    {
        cnt++; //このコンストラクタは下でnewインタンス生成がされた後に読み込まれる
    }
    public static void main(String args[])
    {
        CntNo2 c1 = new CntNo2(); //新しいインタスタンスが毎回呼び出される度に０になっているので＋＋で１になっている
        System.out.println(c1.cnt);
        CntNo2 c2 = new CntNo2();
        System.out.println(c2.cnt);
        CntNo2 c3 = new CntNo2();
        System.out.println(c3.cnt);//エラーあるけどいけた
    }
}