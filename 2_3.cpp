#include <iostream>
using namespace std;

					//Описание переменных:
int main() {				//n - количесво произведение(последние число с которым будем считать произведения) s - финальная сумма (Изначальна равна нулю)
	int n, s=0,k,p=1; 		//p - произведение отдельных частей суммы (равна еденице, тк для произведения 0 не подойдет
	cin >> n;			//Вводим число n, так в условии можем заметить, что пользователь должен ввести число до которого мы будем считать сумму произведений
	for (int i=1; i<=n; i++){	// Мы используем цикл for чтобы перебрать все произведения для нашей суммы до числа n, которое вводит пользователь4675
		k=i*2;			//Переменная k, это число которым заканчивается каждое произведение, и по вводным данным можно заметить, что оно в 2 раза больше i
		for (int j=i;j<=k;j++){ //В этом цикле for мы перебераем все числа для произведения, т.е. от i(первого числа), до k(i*2) последнего числа
			p=p*j;		//Считаем все произведение в одну переменную
		}
		s=s+p;			//После суммируем в переменную s все наши произведения
		p=1;			//Обнуляем p до еденицы для подсчета следующего произведения
	}
	cout << s;			//Выводим нашу сумму
	return 0;
}
