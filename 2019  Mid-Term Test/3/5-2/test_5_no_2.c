// 输入两个正整数，求出二者之间所有质数的和
# include <stdio.h>
# include <math.h>
int main(void)
{
    int numberOne;
    int numberTwo;
    int numberTemp;
    int primeSum = 0;
    int numberIndex;
    int numberRemainer;
    int numberMultiply;
    int numberSqrtTemp;
    int numberIndex_1;
    int primeBegin = 2;
    scanf("%d %d", &numberOne, &numberTwo);
    if (numberOne > numberTwo)
    {
        numberTemp = numberOne;
        numberOne = numberTwo;
        numberTwo = numberTemp;
    }
    for (numberIndex = numberOne; numberIndex <= numberTwo; numberIndex ++)
    {
        numberSqrtTemp = floor(sqrt((float) numberIndex));
        numberMultiply = 1;
        for (numberIndex_1 = primeBegin; numberIndex_1 <= numberSqrtTemp; numberIndex_1 ++)
        {
            numberRemainer = numberIndex % numberIndex_1;
            if (numberRemainer != 0)
            {
                numberRemainer = 1;
            }
            numberMultiply *= numberRemainer;
        }
        if (numberMultiply != 0)
        {
            primeSum += numberIndex;
        }
    }
    printf("%d", primeSum);
    return 0;
}
