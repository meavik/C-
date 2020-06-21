#include <iostream>
#include <forward_list>
using namespace std;

int main(void)
{

    forward_list<int> l1(5, 0);
    //assigning different values
    l1.assign({1, 2, 3, 4, 5});
    // l1.assign(3,4);
    //printing the size of the list
    cout << std::distance(l1.begin(), l1.end()) << endl;

    if (!l1.empty())
    {
        l1.assign({10,9,8,7});
    }
    auto it = l1.end();
    l1.insert_after(l1.begin(),{2,3,4});
    l1.reverse();
    l1.push_front(1);
    l1.pop_front();

    forward_list<int> l2{7,3,9,2};
    //after merging l2 to l1 the size of l2 will be zero.
    // l1.sort();
    // l2.sort();
    l1.merge(l2);
    cout<<"After merging size of l2: "<<std::distance(l2.begin(),l2.end())<<endl;
    l1.unique();
    l1.remove(3);
    l2.resize(4,2);
    l1.splice_after(l1.begin(),{1,2,3});
    l1.splice_after(l1.begin(),{l2.front()});
    for (auto &it : l1)
    {
        cout << it << endl;
    }
    cout << endl << l1.front() << endl;

    return EXIT_SUCCESS;
}
