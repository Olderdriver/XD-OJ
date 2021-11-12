# include <stdio.h>
# include <math.h>
# define numberMax 1000
int main(void)
{
    int inputNumber;
    int numberBegin;
    int numberEnd;
    int numberSum = 0;
    int numberIndex;
    int numberSqrtTemp;
    int numberRemainder;
    int numberMultiply;
    int numberIndex_1;
    int primeBegin = 2;
    scanf("%d", &inputNumber);
    numberBegin = pow(inputNumber, 2);
    numberEnd = pow(inputNumber + 1, 2);
    for (numberIndex = numberBegin; numberIndex <= numberEnd; numberIndex ++)
    {
        numberSqrtTemp = floor(sqrt((float) numberIndex));
        numberMultiply = 1;
        for (numberIndex_1 = primeBegin; numberIndex_1 <= numberSqrtTemp; numberIndex_1 ++)
        {
            numberRemainder = numberIndex % numberIndex_1;
            if (numberRemainder != 0)
            {
                numberRemainder = 1;
            }
            numberMultiply *= numberRemainder;
        }
        if (numberMultiply != 0)
        {
            numberSum += numberIndex;
        }
    }
    printf("%d", numberSum);
    return 0;
}
