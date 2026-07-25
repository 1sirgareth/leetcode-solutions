bool isPalindrome(int x) 
{
    int m = x;
    if (x < 0)
    {
        return false;
    }

    int new_digit = m % 10;
    double reversed_number = 0;

    while (m > 0)
    {
        reversed_number = reversed_number * 10 + new_digit;

        m = m/10;
        new_digit = m % 10;
    }
    if (reversed_number == x)
    {
        return true;
    }
    return false;
}
