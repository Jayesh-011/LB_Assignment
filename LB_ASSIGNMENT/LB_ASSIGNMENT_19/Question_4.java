class Logic
{
    void printDigits(int num)
    {
        while (num != 0)
        {
            System.out.println(num % 10);    
            num = num / 10;
        }
    }
}
class Question_4
{
    public static void main(String args[])
    {
    Logic obj = new Logic();
    obj.printDigits(9876);
    }
}