class Logic
{
    void findMin(int a, int b, int c)
    {
        if((a < b) && (a < c))
        {
            System.out.println(a+" is smallest");
        }
        else if(b < c)
        {
            System.out.println(b + " is smallest");
        }
        else
        {
            System.out.println(c + " is smallest");
        }
    }
}

public class Question_4 {
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.findMin(2,12,3);
    }
}
