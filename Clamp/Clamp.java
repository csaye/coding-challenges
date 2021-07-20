public class Main {
    public static int clamp(int val, int min, int max) {
        return Math.max(min, Math.min(val, max));
    }
}
