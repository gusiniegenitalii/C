/*В дюйме имеется 2.54 сантиметра. Напишите программу, которая предлагает
ввести рост в дюймах, после чего выводит на экран этот рост в сантиметрах.*/

#include <stdio.h>

int main(void){
    double sm,dume;

    printf("Введите ваш рост в сантиметрах: ");
    scanf("%lf",&sm);
    dume = sm / 2.54;
    printf("Ваш рост в дюймах: %lf\n",dume);
    return 0;

}