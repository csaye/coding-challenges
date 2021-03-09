import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a binary number: ");
        String input = scanner.nextLine();
        char[] b = input.toCharArray();
        int n = 0;

        for (char c : b) {
            n += n + Character.getNumericValue(c);
        }
        System.out.println(n);
    }
}
