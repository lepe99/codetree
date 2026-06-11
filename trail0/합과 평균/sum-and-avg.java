import java.util.*;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        int sum = A + B;
        double avg = (double) sum / 2;
        System.out.printf("%d %.1f", sum, avg);
    }
}