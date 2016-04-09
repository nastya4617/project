#include <iostream>

#include "organization.h"
using namespace std;

int main()
{
    int N; cin >> N;
    Organization *obj = new Organization[N];
    for(int i = 0; i < N; i++)
       obj[i].Input();
    Sort(N, obj);

    return 0;
}

