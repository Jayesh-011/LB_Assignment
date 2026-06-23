class Logic
{
    void printEvenNumbers(int a)
    {
        if(a < 2)
        {
            System.out.println("0");
        }

        int iCnt = 0;

        for(iCnt = 2;iCnt <= a;iCnt+=2)
        {
            System.out.println(iCnt);
        }
    }
}

class Question_2
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.printEvenNumbers(20);    
    }
}