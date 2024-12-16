#include<iostream>
using namespace std;
class Student {
public:
	int num;
	int score;
};
void max(Student* students, int size) {
	Student* p = &students[0];
	for (int i = 1;i < size;i++) {
		if (students[i].score > p->score) {
			p = &students[i];
		}

	}cout << "the best num is" << p->num << endl;
}
int main() {
	Student students[5] = {
		{1,92},
		{2,93},
		{3,89},
		{4,94},
		{5,88},
	};
	max(students , 5);
	return 0;
}
