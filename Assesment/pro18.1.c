int check_perfect_number(int num)
{
        int i,sum = 1;
        for(i=2; i<=num/2; i++)
        {
                if(num%i == 0)
                        sum = sum + i;
        }
        return sum;
}
     
