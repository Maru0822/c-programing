public class CntNo5
{
    static int cnt = 0;//全てのインスタンスで共通のフィールドでcntを回しているでできる
    int num;

    CntNo5()
    {
        cnt++; //このコンストラクタは下でnewインタンス生成がされた後に読み込まれる
        num = cnt;
    }
    static int getCnt()
    {
        return cnt;
    }
    public static void main(String args[])
    {
        System.out.println(CntNo5.getCnt());
        CntNo5 c1 = new CntNo5();
        System.out.println(c1.num);
        CntNo5 c2 = new CntNo5();
        System.out.println(c2.num);
        System.out.println(CntNo5.getCnt());
    }
}