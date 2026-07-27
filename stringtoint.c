int myAtoi(char* s) 
{    
    int fni = 0; // fni = first number index.
    int pm = 0; // (pm = 0 implies number is positive)

    while (s[fni] == ' ')
    {
        fni++;
    }
    if (s[fni] == '-')
    {
            pm++;
            fni++;
    }
    else if (s[fni] == '+')
    {
        fni++;
    }
    if (s[fni] > 57 || s[fni] < 48)
    {
        return 0;
    }

    long long number = 0;
    while (s[fni] >= 48 && s[fni] <= 57)
    {
        number = number * 10 + (long long) s[fni] - 48;
        fni++;
        if (number >= 2147483648)
        {
            break;
        }
    }
    if (pm > 0)
    {
        number = -number;
    }
    int returnvalue;

    if (number >= -2147483648 && number <= 2147483647)
    {
        returnvalue = number;
    }
    else if (number < -2147483648)
    {
        returnvalue = -2147483648; 
    }
    else
    {
        returnvalue = 2147483647;
    }
    return returnvalue;
}
