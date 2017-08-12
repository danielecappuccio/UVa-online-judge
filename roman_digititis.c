/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <stdio.h>
#include <stdlib.h>

void _count_digits(int page, int** pt_array){
	int* digits = *pt_array;
	
	/* i tests */
	if (page%5 == 4) digits[0] += 1;
	else digits[0] += page%5;
	
	/* v tests */
	if (page%10 >= 4 && page%10 <= 8)
		digits[1] += 1;
	
	/* x tests */
	int page_x = page%50;
	if (page_x == 9) digits[2] += 1;
	if (page_x>=10 && page_x<=18) digits[2] += 1;
	if (page_x>18 && page_x<=28) digits[2] += 2;
	if (page_x>28 && page_x<=38) digits[2] += 3;
	if (page_x==39) digits[2] += 4;
	if (page_x>=40 && page_x<=48) digits[2] += 1;
	if (page_x==49) digits[2] += 2;
	
	/* l tests */
	if (page>=40 && page<=89) digits[3] += 1;
	
	/* c tests */
	if (page>=90) digits[4] += 1; 
}

int main(){
	
	while (1){
		/* i v x l c */
		int* digits = (int*)malloc(5*sizeof(int));
		int i;
		for (i=0; i<5; i++)
			digits[i] = 0;
		int pages;
		scanf("%d", &pages);
		if (pages == 0) return 0;
		int p;
		for (p=1; p<=pages; p++)
			_count_digits(p, &digits);
		
		/* 20: 28 i, 10 v, 14 x, 0 l, 0 c */
		printf("%d: %d i, %d v, %d x, %d l, %d c\n", pages, digits[0], digits[1], digits[2], digits[3], digits[4]);
	}
}
