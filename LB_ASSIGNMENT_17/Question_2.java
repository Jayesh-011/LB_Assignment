class Logic
{
    void checkPalindrome(int num)
    {
        int temp = num;
        int iRev = 0;

        if(num < 0)
        {
            System.out.println("Number is not palindrome");
            return;
        }

        while (num != 0) {
            iRev = (iRev * 10)+(num % 10);
            num = num / 10;
        }

        if(iRev == temp)
        {
            System.out.println("Number is Palindrome");
        }
        else
        {
            System.out.println("Number is not palindrome");
        }
    }
}

public class Question_2 {
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkPalindrome(121);
    }
}
