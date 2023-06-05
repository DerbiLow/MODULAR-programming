# MODULAR-programming

<h1>ЛАБОРАТОРНАЯ РАБОТА № 4 «МОДУЛЬНОЕ ПРОГРАММИРОВАНИЕ» <br>
Цель работы: знакомство с технологией применения языка ассемблера при разработке программного обеспечения на языках высокого уровня. </h1>

Исходное задание: <br>
![image](https://user-images.githubusercontent.com/126500303/231411593-06964776-19d5-4115-9aed-040987a82270.png)
![image](https://user-images.githubusercontent.com/126500303/231411209-802b7723-943b-4268-90c9-14a30333f6d2.png) <br>

Изначально пользователь вводит значение Х <br>
После из кода С++ вызывается функция, написанная на языке Assembler <br>
В коде Assembler переменная передается в стек и происходит вызов функции на С++ <br>
По условию задания в С++ вычисляется следующая функция - f(x) = log(abs(cos(x) + sin(x))), вычисленное значение возвращается обратно в Assembler <br>
Assembler выполняет функцию y = f(x), то есть записывает вычисленное значение и сохраняет его в переменную <br>
А после код Assembler возвращает значение обратно в С++, где он записывается в массив y[i] <br>
Пользователь в консоли видит пару чисел Xi, которое он ввел и результат вычислений y[i] <br>


Результат работы программы представлен на рисунках ниже <br>
![image](https://user-images.githubusercontent.com/126500303/231412597-fa2e5bb2-784a-4f04-8a02-a7269beae8d2.png) <br>
![image](https://user-images.githubusercontent.com/126500303/231418424-1f2bdac6-f017-4423-88f3-73062c4195f4.png)<br>

Скорость работы кода С++ и assembler: <br>
![image](https://github.com/DerbiLow/MODULAR-programming/assets/126500303/2e671108-3aaf-4efa-b3d0-2c6e969ac3a3)<br>
Скорость работы кода на Python: <br>
![image](https://github.com/DerbiLow/MODULAR-programming/assets/126500303/79e15786-14cd-4e22-8741-405d017eabf7) <br>
Скорость работы  кода на Python с DLL: <br>
![Python+DLL](https://github.com/DerbiLow/MODULAR-programming/assets/126500303/3d0ca18a-9fb2-410a-995c-32064b01058b) <br>
Из результатов работы программы можно сделать вывод: Самый медленный - Python из-за того, что он работает построчно. C++ (на котором написан DLL) перед работой компилируется, за счет чего работает быстрее. Самый быстрый способ вычисления результата - С++ и assembler <br>

Код программы представлен в файле code3.txt, Assembler - some.asm, C++ - ConsoleApplication50.cpp (Проект в ConsoleApplication50) <br>
Код программы на Python представлен в файле python(2).txt (Проект в PythonApplication1) <br>
Код программы на Python с DLL представлен в файле 325.txt (Проект в PythonApplication4 и DLL4) <br>


