public class Main {
    public static void main(String[] args) {
        char q = 34;
        String program[] = {
"public class Main {",
"    public static void main(String[] args) {",
"        char q = 34;",
"        String program[] = {",
"        };",
"        for (int i = 0; i < 4; i++) System.out.println(program[i]);",
"        for (int i = 0; i < 10; i++) System.out.println(q + program[i] + q + ',');",
"        for (int i = 4; i < 10; i++) System.out.println(program[i]);",
"    }",
"}",
        };
        for (int i = 0; i < 4; i++) System.out.println(program[i]);
        for (int i = 0; i < 10; i++) System.out.println(q + program[i] + q + ',');
        for (int i = 4; i < 10; i++) System.out.println(program[i]);
    }
}
