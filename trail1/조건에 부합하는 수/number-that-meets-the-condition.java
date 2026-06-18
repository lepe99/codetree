import java.util.*;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int cnt = 0;
        for (int i = 1; i <= a; i++) {
            if ((i / 8) % 2 == 0 || (i % 2 == 0 && i % 4 != 0) || i % 7 < 4) continue;
            System.out.print(i + " ");
        }
    }
}