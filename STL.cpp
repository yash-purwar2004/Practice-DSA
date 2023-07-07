        // Array

// #include<iostream>
// #include<array>
// using namespace std;
// int main(){
//     array<int,6>arr={1,2,3,4,5,6};
//     for(int i:arr){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     cout<<"This function is used to access the elements of array"<<endl;
//     cout<<arr.at(5)<<endl;
//     cout<<"This function is used to access the first element of an array"<<endl;
//     cout<<arr.front()<<endl;
//     cout<<"This function is used to access the last elements of array"<<endl;
//     cout<<arr.back()<<endl;
//     cout<<"This function returns the number of elements of array"<<endl;
//     cout<<arr.size()<<endl;
//     cout<<"This function returns the maximum size of array"<<endl;
//     cout<<arr.max_size()<<endl;
// }


        //Vector
// #include <iostream>
// #include <vector>
 
// using namespace std;
 
// int main()
// {
//     vector<int> g1;
 
//     for (int i = 1; i <= 5; i++)
//         g1.push_back(i);
 
//     cout << "Output of begin and end: ";
//     for (auto i = g1.begin(); i != g1.end(); ++i)
//         cout << *i << " ";
 
//     cout << "\nOutput of cbegin and cend: ";
//     for (auto i = g1.cbegin(); i != g1.cend(); ++i)
//         cout << *i << " ";
 
//     cout << "\nOutput of rbegin and rend: ";
//     for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
//         cout << *ir << " ";
 
//     cout << "\nOutput of crbegin and crend : ";
//     for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
//         cout << *ir << " ";
 
//     return 0;
// }


// // C++ program to illustrate the
// // capacity function in vector
// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
// 	vector<int> g1;

// 	for (int i = 1; i <= 7; i++)
// 		g1.push_back(i);

// 	cout << "Size : " << g1.size();
// 	cout << "\nCapacity : " << g1.capacity();
// 	cout << "\nMax_Size : " << g1.max_size();

// 	// resizes the vector size to 4
// 	g1.resize(4);

// 	// prints the vector size after resize()
// 	cout << "\nSize : " << g1.size();

// 	// checks if the vector is empty or not
// 	if (g1.empty() == false)
// 		cout << "\nVector is not empty";
// 	else
// 		cout << "\nVector is empty";

// 	// Shrinks the vector
// 	g1.shrink_to_fit();
// 	cout << "\nVector elements are: ";
// 	for (auto it = g1.begin(); it != g1.end(); it++)
// 		cout << *it << " ";
// cout << "\nCapacity : " << g1.capacity();
// 	return 0;
// }


// // C++ program to illustrate the
// // element access in vector
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	vector<int> g1;

// 	for (int i = 1; i <= 10; i++)
// 		g1.push_back(i * 10);

// 	cout << "\nReference operator [g] : g1[2] = " << g1[2];

// 	cout << "\nat : g1.at(4) = " << g1.at(4);

// 	cout << "\nfront() : g1.front() = " << g1.front();

// 	cout << "\nback() : g1.back() = " << g1.back();

// 	// pointer to the first element
// 	int* pos = g1.data();

// 	cout << "\nThe first element is " << *pos;
// 	return 0;
// }


// // C++ program to illustrate the
// // Modifiers in vector
// #include <bits/stdc++.h>
// #include <vector>
// using namespace std;

// int main()
// {
// 	// Assign vector
// 	vector<int> v;

// 	// fill the vector with 10 five times
// 	v.assign(5, 10);

// 	cout << "The vector elements are: ";
// 	for (int i = 0; i < v.size(); i++)
// 		cout << v[i] << " ";

// 	// inserts 15 to the last position
// 	v.push_back(15);
// 	int n = v.size();
// 	cout << "\nThe last element is: " << v[n - 1];

// 	// removes last element
// 	v.pop_back();

// 	// prints the vector
// 	cout << "\nThe vector elements are: ";
// 	for (int i = 0; i < v.size(); i++)
// 		cout << v[i] << " ";

// 	// inserts 5 at the beginning
// 	v.insert(v.begin(), 5);

// 	cout << "\nThe first element is: " << v[0];

// 	// removes the first element
// 	v.erase(v.begin());

// 	cout << "\nThe first element is: " << v[0];

// 	// inserts at the beginning
// 	v.emplace(v.begin(), 5);
// 	cout << "\nThe first element is: " << v[0];

// 	// Inserts 20 at the end
// 	v.emplace_back(20);
// 	n = v.size();
// 	cout << "\nThe last element is: " << v[n - 1];

// 	// erases the vector
// 	v.clear();
// 	cout << "\nVector size after clear(): " << v.size();

// 	// two vector to perform swap
// 	vector<int> v1, v2;
// 	v1.push_back(1);
// 	v1.push_back(2);
// 	v2.push_back(3);
// 	v2.push_back(4);

// 	cout << "\n\nVector 1: ";
// 	for (int i = 0; i < v1.size(); i++)
// 		cout << v1[i] << " ";

// 	cout << "\nVector 2: ";
// 	for (int i = 0; i < v2.size(); i++)
// 		cout << v2[i] << " ";

// 	// Swaps v1 and v2
// 	v1.swap(v2);

// 	cout << "\nAfter Swap \nVector 1: ";
// 	for (int i = 0; i < v1.size(); i++)
// 		cout << v1[i] << " ";

// 	cout << "\nVector 2: ";
// 	for (int i = 0; i < v2.size(); i++)
// 		cout << v2[i] << " ";
// }



            // Deque
// CPP Program to implement Deque in STL
// #include <deque>
// #include <iostream>

// using namespace std;

// void showdq(deque<int> g)
// {
// 	deque<int>::iterator it;
// 	for (it = g.begin(); it != g.end(); ++it)
// 		cout << '\t' << *it;
// 	cout << '\n';
// }

// int main()
// {
// 	deque<int> gquiz;
// 	gquiz.push_back(10);
// 	gquiz.push_front(20);
// 	gquiz.push_back(30);
// 	gquiz.push_front(15);
// 	cout << "The deque gquiz is : ";
// 	showdq(gquiz);

// 	cout << "\ngquiz.size() : " << gquiz.size();
// 	cout << "\ngquiz.max_size() : " << gquiz.max_size();

// 	cout << "\ngquiz.at(2) : " << gquiz.at(2);
// 	cout << "\ngquiz.front() : " << gquiz.front();
// 	cout << "\ngquiz.back() : " << gquiz.back();

// 	cout << "\ngquiz.pop_front() : ";
// 	gquiz.pop_front();
// 	showdq(gquiz);

// 	cout << "\ngquiz.pop_back() : ";
// 	gquiz.pop_back();
// 	showdq(gquiz);

// 	return 0;
// }


            // Lists
// C++ program to demonstrate the use of list containers
// #include <iostream>
// #include <list>
// using namespace std;

// int main()
// {
// 	// defining list
// 	list<int> gqlist{12,45,8,6};

// 	for (auto i : gqlist) {
// 		cout << i << ' ';
// 	}
// 	return 0;
// }


// // C++ program to demonstrate the implementation of List
// #include <iostream>
// #include <iterator>
// #include <list>
// using namespace std;

// // function for printing the elements in a list
// void showlist(list<int> g)
// {
// 	list<int>::iterator it;
// 	for (it = g.begin(); it != g.end(); ++it)
// 		cout << '\t' << *it;
// 	cout << '\n';
// }

// // Driver Code
// int main()
// {

// 	list<int> gqlist1, gqlist2;

// 	for (int i = 0; i < 10; ++i) {
// 		gqlist1.push_back(i * 2);
// 		gqlist2.push_front(i * 3);
// 	}
// 	cout << "\nList 1 (gqlist1) is : ";
// 	showlist(gqlist1);

// 	cout << "\nList 2 (gqlist2) is : ";
// 	showlist(gqlist2);

// 	cout << "\ngqlist1.front() : " << gqlist1.front();
// 	cout << "\ngqlist1.back() : " << gqlist1.back();

// 	cout << "\ngqlist1.pop_front() : ";
// 	gqlist1.pop_front();
// 	showlist(gqlist1);

// 	cout << "\ngqlist2.pop_back() : ";
// 	gqlist2.pop_back();
// 	showlist(gqlist2);

// 	cout << "\ngqlist1.reverse() : ";
// 	gqlist1.reverse();
// 	showlist(gqlist1);

// 	cout << "\ngqlist2.sort(): ";
// 	gqlist2.sort();
// 	showlist(gqlist2);

// 	return 0;
// }


            // Stack
// #include <iostream>
// #include <stack>
// using namespace std;
// int main() {
// 	stack<int> stack;
// 	stack.push(21);// The values pushed in the stack should be of the same data which is written during declaration of stack
// 	stack.push(22);
// 	stack.push(24);
// 	stack.push(25);
// 	int num=0;
// 	stack.push(num);
// 	stack.pop();
// 	stack.pop();
// 	stack.pop();

// 	while (!stack.empty()) {
// 		cout << stack.top() <<" ";
// 		stack.pop();
// 	}
// }


                //queue
// #include <iostream>
// #include<queue>
// using namespace std;
// int main(){
//     queue<string>q;
//     q.push("yash");
//     q.push("purwar");
//     q.push("sanskriti");
    
//     cout<<q.front()<<endl;
//     q.pop();
//     cout<<q.front()<<endl;
//     cout<<q.size()<<endl;
// }


                //Priority Queue
// #include <iostream>
// #include<queue>
// using namespace std;
// int main(){
//     priority_queue<int>maxi;
//     maxi.push(2);
//     maxi.push(1);
//     maxi.push(0);
//     maxi.push(54);
//     maxi.push(32);
    
//     cout<<maxi.top()<<endl;
    
    
//     priority_queue<int, vector<int>, greater<int>>mini;
//     mini.push(2);
//     mini.push(1);
//     mini.push(0);
//     mini.push(54);
//     mini.push(32);
    
//     cout<<mini.top()<<endl;
// }


                //set
// #include<iostream>
// #include<set>
// using namespace std;
// int main(){
//     set<int>s;
//     s.insert(1);
//     s.insert(7);
//     s.insert(13);
//     s.insert(1);
//     s.insert(1);
//     s.insert(34);
//     s.insert(17);

// for(int i : s){
//     cout<<i<<endl;
// }

// set<int>::iterator it=s.begin();
// it++;

// s.erase(it);

// for(int i : s){
//     cout<<i<<endl;
// }
// }


                // Map
// #include<iostream>
// #include<map>
// using namespace std;
// int main(){
//     map<int,string>m;
//     m[1]="yash";
//     m[2]="niyash";
//     m[3]="suyash";
//     m[4]="jayash";
    
//     for(auto i:m){
//         cout<<i.first<<" "<<i.second<<endl;
//     }
// }