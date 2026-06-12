import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        // Please write your code here.
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        char input = br.readLine().charAt(0);
        for (int i = 0; i < 8; i++) sb.append(input);
        System.out.print(sb);
    }
}