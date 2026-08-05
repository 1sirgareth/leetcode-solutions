char* longestCommonPrefix(char** strs, int strsSize) 
{ 
    int currentletter;
    for (currentletter = 0; strs[0][currentletter] != 0; currentletter++)
    {
        int inwords = 0;
        for (int i = 1; i < strsSize; i++)
        {
            if (strs[i][currentletter] == strs[0][currentletter])
            {
                inwords++;
            }
        }
        if (inwords != strsSize - 1)
        {
            break;
        }
    }
    char *returnvalue = malloc((currentletter + 1) * sizeof(char));
    for (int i = 0; i < currentletter; i++)
    {
        returnvalue[i] = strs[0][i];
    }
    returnvalue[currentletter] = 0;
    return returnvalue;
}
