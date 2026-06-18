import java.util.*;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int div = n;
        for (int i = 1; i <= n; i++) {
            div /= i;
            if (div <= 1) {
                System.out.print(i);
                break;
            }
        }
    }
}