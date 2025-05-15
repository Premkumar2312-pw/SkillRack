Time* addSeconds(Time *time, int X)
{
    Time *newTime = (Time*)malloc(sizeof(Time));
    newTime->hh = time->hh;
    newTime->mm = time->mm;
    newTime->ss = time->ss;

    newTime->ss += X;
    newTime->mm += newTime->ss / 60;
    newTime->ss = newTime->ss % 60;
    newTime->hh += newTime->mm / 60;
    newTime->mm = newTime->mm % 60;
    newTime->hh = newTime->hh % 24; // Corrected this line

    return newTime;
}