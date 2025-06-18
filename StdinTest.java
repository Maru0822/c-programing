public class StdinTest
{
    public static void main(String args[])
    {
        Stdin si = new Stdin();

        System.out.print("文字列=");
        String str = si.gets();
        System.out.println(str);

        System.out.print("整数=");
        int no = si.geti();
        System.out.println(no);

        System.out.print("実数=");
        double po = si.getd();
        System.out.println(po);
    }
}
