int lengthOfLastWord(char* s) 
{    
    int lengthofstring = 0;
    while (s[lengthofstring] != 0)
    {
        lengthofstring++;
    }

    int lli = lengthofstring - 1;
    // lli = last_letter_index

    while ((s[lli] > 'Z' && s[lli] < 'a') || (s[lli] > 'z') || (s[lli] < 'A'))
    {
        lli = lli - 1;
    }
    int length = 0;
    while ( (s[lli] >= 'A' && s[lli] <= 'Z') || (s[lli] >= 'a' && s[lli] <= 'z') )
    {
        length = length + 1;
        lli = lli - 1;
        if (lli < 0)
        {
            break;
        }
    }
    return length;
}
