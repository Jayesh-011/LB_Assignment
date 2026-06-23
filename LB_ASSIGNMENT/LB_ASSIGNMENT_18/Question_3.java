class Logic
{
    void printOddNumbers(int a)
    {
        if(a < 1)
        {
            System.out.println("0");
        }

        int iCnt = 0;

        for(iCnt = 1;iCnt <= a;iCnt+=2)
        {
            System.out.println(iCnt);
        }
    }
}

class Question_3
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.printOddNumbers(20);    
    }
}