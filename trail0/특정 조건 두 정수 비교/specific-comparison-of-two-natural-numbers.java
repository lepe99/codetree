import java.util.*;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        StringBuilder sb = new StringBuilder();
        int A = sc.nextInt();
        int B = sc.nextInt();
        if (A < B) sb.append(1);
        else sb.append(0);
        sb.append(" ");
        if (A == B) sb.append(1);
        else sb.append(0);

        System.out.print(sb);
    }
}