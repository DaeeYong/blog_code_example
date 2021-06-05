#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b);

pair<int, int> p;
vector <pair< int, double >> q;

int main()
{
    p.first = 1; //pair�� ù��° ���ڿ� ����
    p.second = 10; //pair�� �ι�° ���ڿ� ����

    cout << " p first value: " << p.first << endl;
    cout << "p second value: " << p.second << endl<<endl;

    p = make_pair(3, 4); //make_pair�� �̿��� ���
    
    cout << "*****make_pair�� �̿��� ���*****" << endl;
    cout << " p first value: " << p.first << endl;
    cout << "p second value: " << p.second << endl<<endl;


    cout << "**********vector�� pair�� �Բ� ����ϴ� ���*********" << endl;
    q.push_back(make_pair(1, 1.2));
    q.push_back(make_pair(3, 2.2));
    q.push_back(make_pair(4, 3.2));
    q.push_back(make_pair(2, 4.2));

    for (int i = 0; i < q.size(); i++)
    {
        cout << "first: " << q[i].first << ", second: " << q[i].second << endl;
    }
    cout << endl;

    sort(q.begin(), q.end(), compare); //sort�� �̿��ؼ� ����
    
    cout << "**********���� ��*********" << endl;
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