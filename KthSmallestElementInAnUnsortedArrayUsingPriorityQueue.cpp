#include <bits stdc++.h="">
using namespace std;

void kthSmallest(vector<int>& v, int N, int K)
{
    priority_queue<int> heap1;

    for (int i = 0; i < N; ++i) {

        heap1.push(v[i]);

        if (heap1.size() > K) {
            heap1.pop();
        }
    }

    cout << heap1.top() << endl;
}

int main()
{
    vector<int> vec = { 50, 20, 100, 70, 10 };

    int N = vec.size();

    int K = 2;

    kthSmallest(vec, N, K % N);

    return 0;
}
</int></int></int></bits>
