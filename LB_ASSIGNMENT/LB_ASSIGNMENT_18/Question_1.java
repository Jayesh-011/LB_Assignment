class Logic
{
    void checkPrime(int num)
    {
        if(num < 0)
        {
            System.out.println("Number cant be -ve");
        }
        else if(num == 1)
        {
            System.out.println("Number is Not Prime");
        }
        else if(num == 2)
        {
            System.out.println("Number is Prime");
        }

        int iCnt = 0;
        for(iCnt = 2;iCnt <= num/2;iCnt++)
        {
            if((num % iCnt) == 0)
            {
                break;
            }
        }

        if(iCnt < (num / 2))
        {
            System.out.println("Number is not prime");
        }
        else
        {
            System.out.println("Number is Prime");
        }
    }
}

class Question_1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkPrime(11);
    }
}