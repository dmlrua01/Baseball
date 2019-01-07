#include <stdio.h>
#include <time.h>

int num_len (int a, int *b);

int main()
{
	srand(time(NULL));
	
	int count = 0;
	int a = rand()%10000;
	int a_r=a;
	int a_rc = a;
	num_len(a, &count);
	int a_c = count ;
	int strike = 0;
	int ball = 0;
	
	for (int i = a_c-1; i>0; i--)
	{	

		int temp =0;
		int comp =0;
		temp = a_r % 10;
		a_r = a_r/10;
		for(int j = a_c-1; j>0; j--)
		{
			comp = a_rc%10;
			a_rc= a_rc/10;
			if(comp == temp)
			{
				i++;
				a = a+rand()%10000;
				a= a%10000;
				int a_r=a;
				int a_rc = a/10;

			}
		}

	}
	int b = 0;
		printf("%d\n",a);	
	scanf("%d", &b);


	if (a==b)
	{
		printf("\n YES! \n");
	}
	else
	{	int a_s = a;
		int b_s = b;
		int a_b = a;
		
				for(int f = a_c; f >0; f--)
				{	
					int b_b = b;
					int temp = 0 ;
					int comp = 0 ;
					int countb = 0;
					temp = a_s % 10;
					a_s = a_s/10;
					comp = b_s % 10;
					b_s = b_s/10;
					if (temp == comp)
					{
						strike ++;
					}
					else
					for(int j = a_c; j > 0; j-- )
						{

							countb = b_b%10;
							b_b = b_b/10;
							if(temp==countb)
							{
								ball++;
							}
						}	
				}
			printf("%d strike\n", strike);
			printf("%d ball\n", ball);
		}
}

int num_len (int a, int *b)
{
	while(a!=0)
		{
			a=a/10;
			(*b)++;
		}
}

