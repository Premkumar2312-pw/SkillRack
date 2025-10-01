int solveExpression(char *exp) {
    int a, b, c;
    char op;
    char s1[20], s2[20], s3[20];
    
    sscanf(exp, "%[^+*]%c%[^=]=%s", s1, &op, s2, s3);

    if (s1[0] == 'X') 
        return op == '+' ? atoi(s3) - atoi(s2) : atoi(s3) / atoi(s2);

    if (s2[0] == 'X') 
        return op == '+' ? atoi(s3) - atoi(s1) : atoi(s3) / atoi(s1);

    return op == '+' ? atoi(s1) + atoi(s2) : atoi(s1) * atoi(s2);
}