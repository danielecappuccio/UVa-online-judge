/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

typedef struct bottles_in_box{
    int bottles;
    int box;
    char color;
} bottles_in_box;

bool check_colors(bottles_in_box* first, bottles_in_box* second, bottles_in_box* third){
    return (first->color != second->color && first->color != third->color && second->color != third->color);
}

bool check_box(bottles_in_box* first, bottles_in_box* second, bottles_in_box* third){
    return (first->box != second->box && first->box != third->box && second->box != third->box);
}

int main(){

    bottles_in_box** l = (bottles_in_box**)malloc(9*sizeof(bottles_in_box));

    int N;

    int first_n;

    while (scanf("%d", &first_n) != EOF){

        /*  first bottle,considered here because of scanf() limitation */
        bottles_in_box* b = (bottles_in_box*)malloc(sizeof(bottles_in_box));
        b -> bottles = first_n;
        b -> box = 1;
        b -> color = 'B';
        l[0] = b;

        /*  storing all the values from input in an array of particular structs
         *  in which are saved three infos: no. of bottles, id of the box
         *  and the color of that set of bottles (respectively, int, int, char)
         */ 
        for (int i=1; i<9; ++i){
            scanf("%d", &N);
            if (i%3 == 0){
                bottles_in_box* b = (bottles_in_box*)malloc(sizeof(bottles_in_box));
                b -> bottles = N;
                b -> box = (i/3) + 1;
                b -> color = 'B';
                l[i] = b;
            }
            else if (i%3 == 1){
                bottles_in_box* b = (bottles_in_box*)malloc(sizeof(bottles_in_box));
                b -> bottles = N;
                b -> box = (i/3) + 1;
                b -> color = 'G';
                l[i] = b;
            }
            else{
                bottles_in_box* b = (bottles_in_box*)malloc(sizeof(bottles_in_box));
                b -> bottles = N;
                b -> box = (i/3) + 1;
                b -> color = 'C';
                l[i] = b;
            }
        }

        /*  calculating the total of bottles */
        int total = 0;
        for (int t=0; t<9; ++t){
            total += (l[t]) -> bottles;
        }

        /*  The idea to solve this problem is the following >> after having stored all the values
         *  we try to identify 3 sets of bottles which satisfy three conditions:
         *  (1) each one's in a different box (for instance, 312, in the order)
         *  (2) all of them are of different colors 
         *  (3) their sum is the minimum
         *  At this point it's obvious that the bottles we actually move are:
         *  moved bottles = total - the ones we have just dealt with
         */

        bottles_in_box* first_max; //first set of bottles
        bottles_in_box* second_max; //second set of bottles
        bottles_in_box* third_max; //third set of bottles

        int max_sum = 0, sum;
        int i,j,k;
        for (i=0; i<9; ++i){
            for (j=i+1; j<9; ++j){
                for (k=j+1; k<9; ++k){
                    bottles_in_box* first = l[i]; 
                    bottles_in_box* second = l[j];
                    bottles_in_box* third = l[k];
                    /* checking whether these sets of bottles satisfy our conditions */
                    if (check_box(first, second, third) && check_colors(first, second, third)){
                        sum = first->bottles + second->bottles + third->bottles;
                        if (sum > max_sum){
                            max_sum = sum;
                            first_max = first;
                            second_max = second;
                            third_max = third;
                        }
                        /* this big 'else if' branch serves to deal with multiple configurations
                         * for which moved bottles are the same. The problem states that
                         * 'the alphabetically first string representing a minimal configuration should be printed.'
                         * e.g. CGB and CBG both with moved bottles = 40 ---> then we shall choose 'CBG'
                         */
                        else if (sum == max_sum){
                            if (first->color < first_max->color){
                                first_max = first;
                                second_max = second;
                                third_max = third;
                            }
                            else if (first->color == first_max->color && second -> color < second_max->color){
                                first_max = first;
                                second_max = second;
                                third_max = third;
                            }
                        }
                    }
                }
            }
        }

        cout << first_max->color;
        cout << second_max->color;
        cout << third_max->color << " ";

        cout << total - max_sum << endl;

    }
    return 0;
}
