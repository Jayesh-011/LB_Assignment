class Logic
{
    void sumEvenOddDigits(int n)
    {
        int iSumEven = 0,iSumOdd = 0;

        while(n!=0)
        {
            if(((n%10) % 2) == 0)
            {
                iSumEven = iSumEven + (n % 10);
            }
            else
            {
                iSumOdd = iSumOdd + (n % 10);
            }

            n = n / 10;
        }

        System.out.println("Sum of even digits is : "+iSumEven);
        System.out.println("Sum of odd digits is : "+iSumOdd);
    }
}

public class Question_4 {
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.sumEvenOddDigits(123456);
    }
    
}
