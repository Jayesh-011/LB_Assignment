class Logic
{
    void printDivisibleBy2and3(int num)
    {
        int iCnt = 0;

        for(iCnt = 2;iCnt <= num ;iCnt++)
        {
            if((iCnt % 2 == 0 )&& (iCnt % 3 == 0))
            {
                System.out.println(iCnt);
            }
        }       
    }
}


public class Question_5 
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.printDivisibleBy2and3(30);
    }    
}
