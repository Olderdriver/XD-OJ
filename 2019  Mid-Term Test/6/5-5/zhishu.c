
# include <stdio.h>
# include <math.h>
# define numberArrayLengthMax 1000
int main(void)
{
    int primeArray[numberArrayLengthMax];
    int numberIndex;
    int numberRemainder;
    int numberMultiply;
    int numberBegin = 3;
    int primeBegin = 2;
    int numberSqrtTemp;
    int numberIndex_1;
    int primeNumberBegin;
    int primeSum = 0;
    int primeNumberEnd;
    primeArray[0] = 2;
    int primeCount = 0;
    scanf("%d", &primeNumberBegin);
    primeNumberEnd = primeNumberBegin + 10;
    for (numberIndex = numberBegin; numberIndex <= numberArrayLengthMax; numberIndex ++)
    {
        numberSqrtTemp = ceil(sqrt((float) numberIndex));
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
            primeCount += 1;
            primeArray[primeCount] = numberIndex;
        }
    }
    for (numberIndex = primeNumberBegin - 1; numberIndex <= primeNumberEnd - 1; numberIndex ++)
    {
        primeSum += primeArray[numberIndex];
    }
   printf("%d", primeSum);
    return 0;
}
