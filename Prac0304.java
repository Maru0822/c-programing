public class Prac0304 {
    public static void main(String[] args) {
        for (int i = 1; i <= 100; i++) {
        int key = 0;
        
        key += (i % 3 == 0 ? 1 : 0);
        key += (i % 5 == 0 ? 2 : 0);
        
        switch (key) {
        case 0:
            System.out.println(i);
            break;
        case 1:
            System.out.println("Fizz");
            break;
        case 2:
            System.out.println("Buzz");
            break;
        case 3:
            System.out.println("FizzBuzz");
            break;
        }        
      }   
    }
}
