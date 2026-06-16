import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String s;
        for (int i = 1; i <= n; i++) {
            s = String.valueOf(i);
            if (s.contains("3") || s.contains("6") || s.contains("9") || i % 3 == 0) {
                s = "0";
            }
            System.out.print(s + " ");
        }
        
    }
}