class Logic
{
    void findSmallestDigit(int num)
    {
        int iMin =0;

        iMin = num % 10;

        while (num != 0) 
        {
            if((num % 10) < iMin)
            {
                iMin = num % 10;
            }
            num = num / 10;
        }

        System.out.println("Smallest digit is : "+iMin);
    }
}

class Question_5
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.findSmallestDigit(45872);
    }

}