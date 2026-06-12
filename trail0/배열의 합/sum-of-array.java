import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int total;
        for (int i = 0; i < 4; i++) {
            total = 0;
            for (int j = 0; j < 4; j++) {
                total += sc.nextInt();
            }
            System.out.println(total);
        }
    }
}