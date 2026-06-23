class Logic
{
    void findLargestDigit(int num)
    {
        int iMax =0;

        iMax = num % 10;

        while (num != 0) 
        {
            if((num % 10) > iMax)
            {
                iMax = num % 10;
            }
            num = num / 10;
        }

        System.out.println("largest digit is : "+iMax);
    }
}

class Question_4
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.findLargestDigit(83429);
    }

}