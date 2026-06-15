import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int price = 0;
        if (a >= 90) {
            if (b >= 95) price = 100000;
            else if (b >= 90) price = 50000;
        }
        System.out.print(price);
    }
}