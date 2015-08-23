/**
 * local variables will be copyed to heap when push back to
 * a vector
 **/
#include <iostream>
#include <vector>

using namespace std;

class wien
{
public:
	int hello;
	int world;
};

void push(vector<wien> &vec);

int main() {
	vector<wien> vec;

	push(vec);
	cout<< &vec[0]<<endl;
    cout<< &vec[1]<<endl;
	return 0;
}

void push(vector<wien> &vec)
{
	wien w1;
	w1.hello = 1;
	w1.world = 1;
	vec.push_back(w1);
	cout<<"in push w1 addr:" <<&w1<<endl;
	
	wien *w2 = new wien();
	w2->hello = 2;
	w2->world = 2;
	vec.push_back(*w2);
    cout<<"in push w2 addr:" <<w2<<endl;

	return;
}
	
