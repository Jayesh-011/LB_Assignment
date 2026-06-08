class Logic
{
    void countFactors(int num)
    {
        int iCnt = 0,iCount = 0;

        for(iCnt = 1;iCnt <= (num / 2);iCnt++)
        {
            if(num % iCnt == 0)
            {
                iCount++;
            }
        }

        System.out.println("Count of factors is : "+iCount);
    }
}


class Question_4
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.countFactors(20);
    }
}