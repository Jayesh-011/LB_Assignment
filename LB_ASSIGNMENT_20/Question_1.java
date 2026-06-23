class Logic
{
    void sumEvenNumbers(int n)
    {
        int iCnt = 0, iSumEven = 0;

        for(iCnt = 2;iCnt <= n;iCnt+=2)
        {
            iSumEven = iSumEven + iCnt;
        }

        System.out.println("Sum of Even Numbers is : "+iSumEven);
    }
}


class Question_1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.sumEvenNumbers(10);
    }

}