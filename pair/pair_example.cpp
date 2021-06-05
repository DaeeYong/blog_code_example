#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b);

pair<int, int> p;
vector <pair< int, double >> q;

int main()
{
    p.first = 1; //pair의 첫번째 인자에 접근
    p.second = 10; //pair의 두번째 인자에 접근

    cout << " p first value: " << p.first << endl;
    cout << "p second value: " << p.second << endl<<endl;

    p = make_pair(3, 4); //make_pair를 이용한 방법
    
    cout << "*****make_pair을 이용한 방법*****" << endl;
    cout << " p first value: " << p.first << endl;
    cout << "p second value: " << p.second << endl<<endl;


    cout << "**********vector와 pair를 함께 사용하는 방법*********" << endl;
    q.push_back(make_pair(1, 1.2));
    q.push_back(make_pair(3, 2.2));
    q.push_back(make_pair(4, 3.2));
    q.push_back(make_pair(2, 4.2));

    for (int i = 0; i < q.size(); i++)
    {
        cout << "first: " << q[i].first << ", second: " << q[i].second << endl;
    }
    cout << endl;

    sort(q.begin(), q.end(), compare); //sort를 이용해서 정렬
    
    cout << "**********정렬 후*********" << endl;
    for (int i = 0; i < q.size(); i++)
    {
        cout << "first: " << q[i].first << ", second: " << q[i].second << endl;
    }
    
    return 0;
}

bool compare(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}