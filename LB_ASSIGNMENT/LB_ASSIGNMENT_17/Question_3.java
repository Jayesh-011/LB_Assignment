class Logic
{
    void findMax(int a,int b)
    {
        if(a > b)
        {
            System.out.println(a+" is Greater");
        }
        else
        {
            System.out.println(b + " is Greater");
        }
    }
}

public class Question_3 {
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.findMax(15,23);
    }
}
