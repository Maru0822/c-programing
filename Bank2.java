public class Bank2 {
    String name;
    long balance;

    Bank2(String n, long b)
    {
        name = n;
        balance = b;
    }
    void name(String n)
    {
        name = n;
    }
    void showname()
    {
        System.out.print(name + "さんの");
    }
    void balance(long b)
    {
        if(b < 0)
        {
            System.out.println("残高がマイナスの金額です。");
        }
        else{
            balance = b;
        }
    }
    void showbalance()
    {
        System.out.println("残高は"+balance+"円です");
    }
    long deposit(long add)
    {
        if(add < 0){
            System.out.println("0円以上でないと預金できません。");
        }
        else if(add > 200000){
            System.out.println("200,000円以下でないと預金できません。");
        }
        else{
            balance += add;
        }
        return(balance);
    }
    long withdraw(long take)
    {
        if(take < 0){
            System.out.println("0円以上でないと引き出しできません。");
        }
        else if(balance < take){
            System.out.println("残高が0になってしまうので引き出せません。" + (take - balance) + "円たりません");
        }
        else{
            balance -= take;
        }
        return(balance);
        
    }
    public static void main(String args[])
    {

        Bank2 k2 = new Bank2("高専太郎",5000);
        k2.showname();
        k2.showbalance();
        k2.balance(-1000);
        k2.showbalance();
        k2.deposit(100000);
        k2.showbalance();
        k2.withdraw(50000);
        k2.showbalance();
        k2.deposit(500000);
        k2.showbalance();
        k2.withdraw(1000000);
        k2.showbalance();

    }
}
