#include <stdio.h>

int main(void)
{
	int a,b,c,d,e,max;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
		 max = (a > b) ?((a > c) ? 
								  ((a > d) ? ((a > e) ? a : e)
								  :(d > e ? d : e)) :
								((c > d) ? ((c > e) ? c : e) : (d > e ? d : e))) :
            ((b > c) ? ((b > d) ? ((b > e) ? b : e) : (d > e ? d : e)) :
                     ((c > d) ? ((c > e) ? c : e) : (d > e ? d : e)));
		printf("%d",max);
	return 0;
}

