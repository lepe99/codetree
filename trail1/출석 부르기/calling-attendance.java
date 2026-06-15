import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        String name;
        switch (a) {
            case 1:
                name = "John";
                break;
            case 2:
                name = "Tom";
                break;
            case 3:
                name = "Paul";
                break;
            default:
                name = "Vacancy";
        }
        System.out.print(name);
    }
}