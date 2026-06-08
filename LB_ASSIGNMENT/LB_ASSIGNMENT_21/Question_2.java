class Logic
{
    void countEvenOddRange(int n)
    {
        int iCountEven = 0,iCountOdd = 0,iCnt = 0;
        
        for(iCnt = 1;iCnt <= n;iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iCountEven++;
            }
            else
            {
                iCountOdd++;
            }
        }

        System.out.println("Even Count : "+iCountEven+" Odd Count : "+iCountOdd);

    }
}


class Question_2
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.countEvenOddRange(50);
    }
}