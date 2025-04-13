/*В году содержится примерно 3.156х107 секунд. Напишите программу, которая
нредлагает ввести возраст в годах, а затем выводит на экран эквивалентное значение в секундах.*/

#include <stdio.h>

int main(void){
    int yo;
    double seciny = 3.156e7;
    double secinold,mininold,hold,dold,mold,years;
    printf("Введите сколько вам полных лет: ");
    scanf("%d",&yo);
    secinold = seciny*yo;
    printf("Вот столько секунд прошло с года вашего рождения:\n");
    printf("%.2f\n",secinold);
    mininold = secinold/60;
    hold = mininold/60;
    dold = hold/24;
    mold = dold/30;
    years = mold/12;
    printf("А вот столько минут: %.0f\n",mininold);
    printf("Вот стока часов: %.0f\n",hold);
    printf("Стока дней: %.0f\n",dold);
    printf("Месяцы: %.0f\n",mold);
    printf("Наконец года: %.0f\n",years);
    
//при %.0f грамотно округляет значение хз почему
}