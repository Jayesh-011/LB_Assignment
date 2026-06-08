class Logic
{
    void calculatePower(int base, int exp)
    {
        int iPower = 0,iCnt = 0;

        for(iCnt = 0,iPower = 1;iCnt < exp ;iCnt++)
        {
            iPower = iPower * base;
        }

        System.out.println("Power is : "+ iPower);
    }
}
class Question_5
{
   public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.calculatePower(2, 5);
    }
}