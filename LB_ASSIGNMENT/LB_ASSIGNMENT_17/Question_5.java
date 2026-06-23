class Logic
{
    void printTable(int a)
    {
        int iCnt = 0;
        for(iCnt = 1;iCnt <= 10;iCnt++)
        {
            System.out.println(iCnt + " * " + a + " = " + iCnt * a);
        }
    }
}

public class Question_5 {
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.printTable(5);    
    }
}
