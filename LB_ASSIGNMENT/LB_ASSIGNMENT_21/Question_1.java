class Logic
{
    void productOfDigits(int num)
    {
        int iProduct = 0;

        iProduct = 1;
        while (num != 0)
        {
            iProduct = iProduct * (num % 10);
            num = num / 10;
        }

        System.out.println("Product of each digit is : "+iProduct);
    }
}


class Question_1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.productOfDigits(234);
    }
}