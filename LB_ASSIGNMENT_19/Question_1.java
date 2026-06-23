class Logic
{
    void checkLeapYear(int year)
    {
        if((year % 4 )== 0)
        {
            System.out.println("Year is Leap Year");
        }
        else if((year % 100) == 0)
        {
            System.out.println("Year is not Leap Year");
        }
        else if((year % 400) == 0)
        {
            System.out.println("Year is leap year");
        }
        else
        {
            System.out.println("Year is not Leap Year");
        }
    }
}
class Question_1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkLeapYear(2024);
    }
}