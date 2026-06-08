class Logic
{
    void sumOfDigits(int num)
    {
        int iSum = 0;

        while(num != 0)
        {
            iSum = iSum + (num % 10);
            num = num / 10;
        }

        System.out.println("Addition of digits is : "+ iSum);
    }
}
class Question_1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.sumOfDigits(1234);
    }
}