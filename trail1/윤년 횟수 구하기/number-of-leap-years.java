import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            if(yoonAgain(i)) cnt++;
        }
        System.out.print(cnt);
    }

    static boolean yoonAgain(int n) {
        return n % 4 == 0 && (n % 100 != 0 || n % 400 == 0);
    }
}