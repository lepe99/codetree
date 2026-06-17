import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int sum = 0;
        int num;
        for (int i = 0; i < n; i++) {
            num = sc.nextInt();
            if (num % 2 == 1 && num % 3 == 0) sum += num;
        }
        System.out.print(sum);
    }
}