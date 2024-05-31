#include <iostream>
using namespace std;

class Queue {
	int FRONT, REAR, max = 5;
	int queue_array[5];

public:
	Queue() {
		FRONT = -1;
		REAR = -1;
	}
};
