public class Main {
    public static int binaryDecimal(String binary) {
        char[] chars = input.toCharArray();
        int num = 0;
        for (char ch : chars) {
            num += num + Character.getNumericValue(ch);
        }
        return num;
    }
}
