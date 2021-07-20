public class Program
{
    public static int BinaryDecimal(string binary)
    {
        int num = 0;
        foreach (char ch in binary)
        {
            num += num + (int)char.GetNumericValue(ch);
        }
        return num;
    }
}
