
#include <stdio.h>
#include"Tenp.h"


int main() {

	ClassTemp<int, int>       ans1(112, 23);
	ClassTemp<int, float>     ans2(112.8f, 13);
	ClassTemp<int, double>    ans3(10.5, 1);
	ClassTemp<float, float>   ans4(11.5f, 0.5f);
	ClassTemp<float, double>  ans5(12.3f, 2.5);
	ClassTemp<double, double> ans6(11.2, 5.4);

	printf("�������l: %d\n", ans1.Min());
	printf("�������l: %d\n", ans2.Min());
	printf("�������l: %d\n", ans3.Min());
	printf("�������l: %0.2f\n", ans4.Min());
	printf("�������l: %0.2lf\n", ans5.Min());
	printf("�������l: %0.2lf\n", ans6.Min());


	return 0;
}