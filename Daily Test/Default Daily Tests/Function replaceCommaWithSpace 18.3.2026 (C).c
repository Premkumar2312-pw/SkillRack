void replaceCommaWithSpace(char *fileName)
{
    char ch;
    FILE *f, *t;

    f = fopen(fileName, "r");
    t = fopen("temp.txt", "w");

    while ((ch = fgetc(f)) != EOF)
    {
        if (ch == ',')
        {
            fputc(' ', t);
        }
        else
        {
            fputc(ch, t);
        }
    }

    fclose(f);
    fclose(t);

    remove(fileName);
    rename("temp.txt", fileName);
}