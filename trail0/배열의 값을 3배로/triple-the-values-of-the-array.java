import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        for (int i = 1; i <= 9; i++) {
            System.out.print(sc.nextInt() * 3 + " ");
            if (i % 3 == 0) System.out.println();
        }
    }
}