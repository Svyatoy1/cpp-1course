#include <iostream>
using namespace std;

//task1
/* Написати функцію, яка для двох скінченних множин цілих чисел, 
поданих зв'язними впорядкованими списками, знаходить їхній перетин*/

//task2
/* Написати функцію для знаходження значення максимального елемента розрідженої матриці
   В[20,50] при послідовно-зв'язному індексному зберіганні */

//task3
/* Написати функцію, яка визначає кількість ізольованих вершин неорієнтованого графа, 
поданого матрицею суміжності */

//task1
void multilicationOfLists(list* head1, list* head2) {
	while (head1 && head2) {
		if (head1->num == head2->num) {
			cout << head1->num<<", ";
			head1 = head1->left;
			head2 = head2->left;
		} else {
      if (head1->num > head2->num)
				head2 = head2->left;
			else
				head1 = head1->left;
    }
	}
	cout << endl;
}

//task2
// Структура для представлення елемента в рядку
struct listI {
    int num;
    listI* next;
};

// Структура для представлення рядка в матриці
struct row {
    listI* node;
    row* next;
};

int searchMaxElement (row* headM){
	int max = headM->node->num;
	while (headM) {
		listI* temp = headM->node;
		while (temp){
			if (temp->num > max)
				max = temp->num;
			temp = temp->next;
		}
		headM = headM->next;
	}
	return max;
}
