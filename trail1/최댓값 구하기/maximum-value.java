import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int max = -101;
        if (a >= b && a >= c) max = a;
        else if (b >= a && b >= c) max = b;
        else max = c;
        System.out.print(max);
    }
}