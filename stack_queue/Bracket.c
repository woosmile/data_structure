int Bracket(char* S)
{
    int* stack = (int*)malloc(sizeof(int) * strlen(S));
    int top = -1;

    for (int i = 0; i < strlen(S); i++)
    {
        if (S[i] == '[' || S[i] == '{' || S[i] == '(')
            stack[++top] = S[i];
        else
        {
            int dif = S[i] - stack[top];
            if (dif == 1 || dif == 2)
                top--;
            else
                return 0;
        }
    }
    return top < 0 ? 1 : 0;
}