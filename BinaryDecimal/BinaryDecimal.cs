public class Program
{
    public static int BinaryDecimal(string binary)
    {
        int total = 0;
        foreach (char ch in binary)
        {
            total += total + (int)char.GetNumericValue(ch);
        }
        return total;
    }
}
