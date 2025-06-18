public class CntNo4
{
    static int cnt = 0;//全てのインスタンスで共通のフィールドでcntを回しているでできる
    int num;

    CntNo4()
    {
        cnt++; //このコンストラクタは下でnewインタンス生成がされた後に読み込まれる
        num = cnt;
    }
    public static void main(String args[])
    {
        CntNo4 c1 = new CntNo4(); //新しいインタスタンスが毎回呼び出される度に０になっているので＋＋で１になっている
        System.out.println(c1.num);
        CntNo4 c2 = new CntNo4();
        System.out.println(c2.num);
        System.out.println(c1.num);//numというフィールを使っているためバラバラになる？　c１のために作られたnum
    }
}