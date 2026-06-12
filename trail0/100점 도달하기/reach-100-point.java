import java.util.*;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        StringBuilder sb = new StringBuilder();
        while (N <= 100) {
            if (N >= 90) sb.append("A");
            else if (N >= 80) sb.append("B");
            else if (N >= 70) sb.append("C");
            else if (N >= 60) sb.append("D");
            else sb.append("F");
            sb.append(" ");
            N++;
        }
        System.out.print(sb);
    }
}