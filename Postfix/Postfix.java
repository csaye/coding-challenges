import java.util.ArrayDeque;
import java.util.Deque;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a postfix expression: ");
        String exp = scanner.nextLine();
        String[] elems = exp.split(" ");

        Deque<String> stack = new ArrayDeque<String>();
        for (String elem : elems) {
            try {
                int num = Integer.parseInt(elem);
                stack.addFirst(Integer.toString(num));
            } catch(Exception e) {
                int b = Integer.parseInt(stack.removeFirst());
                int a = Integer.parseInt(stack.removeFirst());
                if (elem.equals("+")) stack.addFirst(Integer.toString(a + b));
                else if (elem.equals("-")) stack.addFirst(Integer.toString(a - b));
                else if (elem.equals("*")) stack.addFirst(Integer.toString(a * b));
                else if (elem.equals("/")) stack.addFirst(Integer.toString(a / b));
            }
        }
        System.out.println(stack.peek());
    }
}
