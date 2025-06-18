public class Bank {
    String name;
    long balance;

    Bank()
    {
        name = " ";
        balance = 0;
    }
    Bank(String n, long b)
    {
        name = n;
        balance = b;
    }
    void showname()
    {
        System.out.print(name + "さんの");
    }
    void showbalance()
    {
        System.out.println("残高は"+balance+"円です");
    }
    void name(String n)
    {
        name = n;
    }
    void balance(long b)
    {
        balance = b;
    }
    public static void main(String[] args)
    {
        Bank k1 = new Bank();
        k1.name ("高専花子");
        k1.balance (5000);
        k1.showname();
        k1.showbalance();
        Bank k2 = new Bank("高専太郎",1000);
        k2.showname();
        k2.showbalance();
    }
}
