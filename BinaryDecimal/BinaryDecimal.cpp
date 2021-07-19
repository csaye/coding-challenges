int binaryDecimal(std::string binary)
{
    int total = 0;
    for (int i = 0; i < binary.length(); i++)
    {
        std::string ch(1, binary[i]);
        total += total + stoi(ch);
    }
    return total;
}
