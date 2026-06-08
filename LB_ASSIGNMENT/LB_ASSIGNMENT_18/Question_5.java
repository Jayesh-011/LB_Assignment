class Logic
{
    void checkSign(int a)
    {
        if(a == 0)
        {
            System.out.println("Number is 0");
        }
        else if(a < 0)
        {
            System.out.println("Number is -ve");
        }
        else
        {
            System.out.println("Number is +ve");
        }
    }
}

public class Question_5 
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkSign(-8);
    }
    
}
