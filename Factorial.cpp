int Factorial(int a)
{
    for (int i = a; i > 1; i--)
    {
        a*=i-1;
    }
    return a;
}