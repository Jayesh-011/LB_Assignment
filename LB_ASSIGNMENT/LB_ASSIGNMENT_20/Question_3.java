class Logic
{
    void checkPerfect(int num)
    {
        int iCnt = 0,iSum = 0;

        for(iCnt = 1;iCnt <= (num/2);iCnt++)
        {
            if((num % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }

            if(iSum > num)
            {
                break;
            }
        }

        if(iSum == num)
        {
            System.out.println("Number is perfect");
        }
        else
        {
            System.out.println("Number is not perfect");
        }
    }
}

class Question_3
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkPerfect(6);
    }

}