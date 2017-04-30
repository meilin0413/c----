#include<vector>
using namespace std;
double power(double base, int pow);
double Ab_value(double val);
void reset(int *p);
int max(int a, int *b);
void swap(int *a, int *b);
void swap(int &val1, int &val2);
vector<int>::const_iterator find_val(vector<int>::const_iterator beg, vector<int>::const_iterator end, int val, vector<int>::size_type &occurs);
void input_vector(vector<int> &array);
void output_vector(vector<int>::iterator beg, vector<int>::iterator end);
void output(vector<int> array);
int test(int &val);
void print_array(int *p, int length);
int* add(int *p, int length);
