class Logic
{
    void displayGrade(int marks)
    {
        if(marks < 50)
        {
            System.out.println("D");
        }
        else if(marks < 65)
        {
            System.out.println("C");
        }
        else if(marks < 85)
        {
            System.out.println("B");
        }
        else
        {
            System.out.println("A");
        }
    }
}
class Question_2
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.displayGrade(82);
    }
}