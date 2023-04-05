//
// Created by Sabbrumm on 17.09.2022.
//

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <limits.h>
#include <math.h>
int main(void)
{


    // ставим русскую локализацию
    SetConsoleOutputCP(CP_UTF8);

    int inp; // клавиша, которая была введена

    short cou = 1; // счётчик действий
    long numA = 0; // число 1
    long numB = 0; // число 2

    short overflow = 0; // Булево число. Произошло ли переполнение
    short impossible = 0; // Булево число. Показывает невозможность операции.

    long long result = 0; // результат

    // при 0 - меню выбора первого числа
    // при 1 - меню выбора действия
    // при 2 - меню выбора второго числа

    // бесконечный цикл, прерывается по кнопке выход

    while (1)
        {
        system("cls");
        printf("Калькулятор C-NOVA.\n\n");


        // Интерфейс вычислений
        printf("---------------\n");

        if (cou==2){
            printf("%d\n", numA);
        }
        else if (cou==3){
            printf("%d\n", numB);
        }
        else {
            if (overflow == 1)
            {
                printf("Переполнение. Попробуйте числа поменьше\n");
            }
            else if (impossible == 1){
                printf("Невозможно сделать действие\n");
            }
            else
                {
                printf("%d\n", (int) result);
                }
        };

        printf("---------------\n\n");

        //


        // Меню


        // Пункт ?
        printf("?) Помощь ");
        if (cou==1)
        {
            printf("<---\n");
        }
        else {
            printf("\n");
        }

        // Пункт A
        printf("A) Число A: %d (A) ", (int)numA);
        if (cou==2)
        {
            printf("<---\n");
        }
        else {
            printf("\n");
        }

        // Пункт B
        printf("B) Число B: %d (B) ", (int)numB);
        if (cou==3)
        {
            printf("<---\n");
        }
        else {
            printf("\n");
        }

        printf("---------------\n\n");

        // Пункт 1
        printf("1) Сложить A и B ");
        if (cou==4)
        {
            printf("<---\n");
        }
        else {
            printf("\n");
        }

        // Пункт 2
        printf("2) Вычесть B из A ");
        if (cou==5)
        {
            printf("<---\n");
        }
        else {
            printf("\n");
        }

        // Пункт 3
        printf("3) Умножить A на B ");
        if (cou==6)
        {
            printf("<---\n");
        }
        else {
            printf("\n");
        }

        // Пункт 4
        printf("4) Поделить A на B ");
        if (cou==7)
        {
            printf("<---\n");
        }
        else {
            printf("\n");
        }

        // Пункт 5
        printf("5) Возвести A в степень B ");
        if (cou==8)
            {
                printf("<---\n");
            }
        else {
            printf("\n");
        }

        // Пункт 6
        printf("6) Корень степени B из A ");
        if (cou==9)
            {
                printf("<---\n");
            }
        else {
            printf("\n");
        }


        // Пункт 7
        printf("7) Обнулить числа и результат (Del) ");
        if (cou==10)
        {
            printf("<---\n");
        }
        else {
            printf("\n");
        }

        // Пункт 8
        printf("8) Перестановка чисел (Tab) ");
        if (cou==11)
        {
            printf("<---\n");
        }
        else {
            printf("\n");
        }

        // Пункт 9
        printf("9) Выход из программы (Escape) ");
        if (cou==12)
        {
            printf("<---\n");
        }
        else {
            printf("\n");
        }

        // Динамическое меню помощи

            printf("---------------\n");

            // при варианте помощь
            if (cou==1)
            {
                printf("Введите числа A и B через пункты A и B (для инверсии числа нажмите -)\n"
                       "Используйте клавиши, указанные в скобках для быстрого выполнения действий\n");
            }

            // при варианте числа A
            if (cou==2)
            {
                printf("\nВводите цифры с клавиатуры или нажмите BackSpace, чтобы стереть последнюю цифру\n\n");
            }

            // при варианте числа B
            if (cou==3)
                {
                    printf("\nВводите цифры с клавиатуры или нажмите BackSpace, чтобы стереть последнюю цифру\n\n");
                }

            // при варианте сложения
            if (cou==4)
                {
                    printf("\n%d+%d= (Нажмите Enter)\n\n",(int)numA, (int)numB);
                }

            // при варианте вычитания
            if (cou==5)
                {
                    printf("\n%d-%d= (Нажмите Enter)\n\n",(int)numA, (int)numB);
                }

            // при варианте умножения
            if (cou==6)
                {
                    printf("\n%d*%d= (Нажмите Enter)\n\n",(int)numA, (int)numB);
                }

            // при варианте деления
            if (cou==7)
                {
                    printf("\n%d/%d= (Нажмите Enter)\n\n",(int)numA, (int)numB);
                }

            // при варианте степени
            if (cou==8)
            {
                printf("\n%d^%d= (Нажмите Enter)\n\n",(int)numA, (int)numB);
            }

            // при варианте корня
            if (cou==9)
            {
                printf("\n%d\\/%d`= (Нажмите Enter)\n\n",(int)numB, (int)numA);
            }

            // при варианте обнуления
            if (cou==10)
                {
                    printf("\nНажмите Enter для обнуления чисел\n\n");
                }

            // при варианте смены
            if (cou==11)
                {
                    printf("\nНажмите Enter для того чтобы поменять числа A и B местами\n\n");
                }

            // при варианте выхода
            if (cou==12)
                {
                    printf("\nНажмите Enter для выхода из программы\n\n");
                }
            printf("---------------\n\n");

        // Закрываем меню помощи


        // Обработка нажатий

        inp = _getch();

        //printf("%d", _getch());
        // Нажали BackSpace
        if (inp == 8){
            if (cou==2){
                numA = numA / 10;
                continue;
            }
            if (cou==3){
                numB = numB/10;
                continue;
            }
        }

        // Нажали минус
        if (inp == 45){

            // Если выбрано число A
            if (cou==2){
                numA = -1 * numA;
                continue;
            }
            if (cou==3){
                numB = -1 * numB;
                continue;
            }
        }

        // Нажали Enter
        if (inp == 13){


            // 4. Сложение
            if (cou==4){

                // Переполнение чек

                // Одинаковый знак
                if (numB != 0 && numA/numB >= 0){

                    // и этот знак +
                    if (numA >= 0){
                        if ((LONG_MAX-numA > numB))
                        {
                            result = numA + numB;
                            overflow = 0;
                            impossible = 0;
                        }
                        else
                        {
                            overflow = 1;
                            result = 0;
                            impossible = 0;
                        }
                    }

                    // и этот знак -
                    if (numA < 0){
                        if ((LONG_MIN-numA < numB)){
                            result = numA + numB;
                            overflow = 0;
                            impossible = 0;
                        }
                        else
                        {
                            overflow = 1;
                            impossible = 0;
                            result = 0;
                        }
                    }

                }

                // Разный знак
                else {
                    result = numA + numB;
                    overflow = 0;
                    impossible = 0;
                }

                continue;
            }

            // 5. Вычитание
            if (cou==5){
                // Если одинаковый знак

                if (numB != 0 && numA/numB >= 0){
                    overflow = 0;
                    impossible = 0;
                    result = numA-numB;
                }
                // Если разный
                else {
                    // и этот знак +
                    if (numA >= 0) {
                        if ((LONG_MAX - numA > -1 * numB)) {
                            result = numA - numB;
                            overflow = 0;
                            impossible = 0;
                        } else {
                            overflow = 1;
                            result = 0;
                            impossible = 0;
                        }
                    }

                    // и этот знак -
                    if (numA < 0) {
                        if ((LONG_MIN - numA < -1 * numB)) {
                            result = numA - numB;
                            overflow = 0;
                            impossible = 0;
                        } else {
                            impossible = 0;
                            overflow = 1;
                            result = 0;
                        }
                    }
                }
                continue;
            }

            // 6. Умножение
            if (cou==6){
                long long prom = (long long)numA * numB;
                if (prom > LONG_MAX || prom < LONG_MIN){
                    overflow = 1;
                    result = 0;
                }
                else {
                    result = numA * numB;
                    impossible = 0;
                    overflow = 0;
                    continue;
                }
            }

            // 7. Деление
            if (cou==7){
                if (numB == 0){
                    impossible = 1;
                    continue;
                }
                result = numA / numB;
                impossible = 0;
                overflow = 0;
                continue;

            }

            // 8. Степень
            if (cou==8){
                double prom = pow((double)numA, (double)numB);
                if (prom > LONG_MAX || prom < LONG_MIN){
                    overflow = 1;
                    result = 0;
                }
                else {
                    result = (long)round(pow(numA, numB));
                    impossible = 0;
                    overflow = 0;
                    continue;}
            }

            // 9. Корень
            if (cou==9){
                if (numB<=0 || (numA<0 && numB%2==0)){
                    overflow = 0;
                    impossible = 1;
                    continue;
                }

                double prom = pow((double)numA, ((double)1/numB));
                if (prom > LONG_MAX || prom < LONG_MIN){
                    overflow = 1;
                    result = 0;
                }
                else {
                    result = (long)round(pow((double)numA, ((double)1/numB)));
                    impossible = 0;
                    overflow = 0;
                    continue;
                }
            }

            // 10. Обнуление чисел
            if (cou == 10){
                numA = 0;
                numB = 0;
                result = 0;
                overflow = 0;
                impossible = 0;
                cou = 2;
                continue;
            }

            // 11. Перестановка
            if (cou == 11){
                long numC = numA;
                numA = numB;
                numB = numC;
                result = 0;
                overflow = 0;
                cou = 2;
                continue;
            }

            // 12. Выход
            if (cou==12) {break;}
        }

        // Если нажаты цифры от 0 до 9
        if (inp >= 48 && inp <=57)

        {
            // цифра которую ввел юзер
            long inpnum = inp-48;

            // если мы в пункте числа А
            if (cou==2){

                // если число A больше нуля
                if (numA>=0){

                    // без переполнения
                    if ((LONG_MAX)/10 > numA){
                        numA = numA*10 + inpnum;
                    }
                    else if (LONG_MAX/10 == numA && inpnum <=7){
                        numA = numA*10 + inpnum;
                    }


                }
                else
                {
                    // без переполнения
                    if ((LONG_MIN)/10 < numA){
                        numA = numA*10 - inpnum;
                    }
                    else if (LONG_MIN/10 == numA && inpnum <=8){
                        numA = numA*10 - inpnum;
                    }
                }

                continue;
            }

            // если мы в пункте числа B
            else if (cou==3){

                // если число B больше нуля
                if (numB>=0){

                    // без переполнения
                    if ((LONG_MAX)/10 > numB){
                        numB = numB*10 + inpnum;
                    }
                    else if (LONG_MAX/10 == numB && inpnum <=7){
                        numB = numB*10 + inpnum;
                    }


                }
                else
                {
                    // без переполнения
                    if ((LONG_MIN)/10 < numB){
                        numB = numB*10 - inpnum;
                    }
                    else if (LONG_MIN/10 == numB && inpnum <=8){
                        numB = numB*10 - inpnum;
                    }
                }

                continue;
            }

            else if (inpnum!=0){
                cou=inpnum+3;
                continue;
            }
        }

        // Нажали стрелку или del
        if (inp == 224)
        {
            int inp2 = getch();

            // Стрелочка вниз
            if (inp2==80){
                cou+=1;
                if (cou==13){
                    cou=1;
                }
                continue;
            }

            // Стрелочка вверх
            if (inp2==72){
                cou-=1;
                if (cou==0){
                    cou=12;
                }
                continue;
            }

            // 8. Delete
            if (inp2 == 83){
                numA = 0;
                numB = 0;
                result = 0;
                overflow = 0;
                impossible = 0;
                cou = 2;
                continue;
            }

        }

        // Нажали Tab
        if (inp == 9){
            long numC = numA;
            numA = numB;
            numB = numC;
            result = 0;
            cou = 2;
            continue;
        }

        // Нажали A на различных раскладках
        if (inp == 97 || inp == 65 || inp == 228 || inp == 148){
            cou=2;
            continue;
        }

        // Нажали B на различных раскладках
        if (inp == 98 || inp == 66 || inp == 136 || inp == 168){
            cou=3;
            continue;
        }

        // Нажали ? на различных раскладках
        if (inp == 47 || inp == 46 || inp == 44 || inp == 63){
            cou=1;
            continue;
        }

        // Нажали Esc
        if (inp == 27)
        {
            break;
        }

        };
    return 0;
}