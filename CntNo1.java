public class CntNo1 
{
    int cnt = 0;
    CntNo1()
    {
        cnt++; //このコンストラクタは下でnewインタンス生成がされた後に読み込まれる
    }
    public static void main(String args[])
    {
        CntNo1 c1 = new CntNo1(); //新しいインタスタンスが毎回呼び出される度に０になっているので＋＋で１になっている
        System.out.println(c1.cnt);
        CntNo1 c2 = new CntNo1();
        System.out.println(c2.cnt);
        CntNo1 c3 = new CntNo1();
        System.out.println(c3.cnt);
    }
}