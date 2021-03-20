#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
#define PI acos(-1.0)
int main()
{
	double R,r,n;
	int t;
	double du;
	scanf("%d",&t);
	for(int o=1;o<=t;o++)
	{
		scanf("%lf %lf",&R,&n);
		n=n*2;
		du=PI*2/n;//求出度 然后求余弦
		r=R*sin(du)/(1+sin(du));
	printf("Case %d: %.10f\n",o,r)	;
	}
	return 0;
}
