import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double a = sc.nextDouble();
        double b = sc.nextDouble();
        System.out.printf(a >= 1.0 && b >= 1.0 ? "High" :
        a >= 0.5 && b >= 0.5 ? "Middle" : "Low");
    }
}