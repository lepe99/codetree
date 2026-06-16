import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int a = sc.nextInt();
        int i = 1;
        while (i <= n) {
            if (i++ % a == 0) System.out.println(1);
            else System.out.println(0);
        } 
    }
}