#include <iostream>

long long lcm_naive(int a, int b) {
	for (long l = 1; l <= (long long)a * b; ++l)
		if (l % a == 0 && l % b == 0)
			return l;

	return (long long)a * b;
}
int gcd_fast(int a, int b){
	if (b == 0)
		return a;
	else
		return gcd_fast(b, a%b);
}

long long lcm_fast(int a, int b){

	return ((long long)a*b) / gcd_fast(a, b);
}
void testSolutionManully(){
	while (true){
		std::cin >> a >> b;
		std::cout << "gcd  : " << gcd_fast(a, b) << std::endl;

		std::cout << "a*b/gcd  : " << ((long long)a*b) / gcd_fast(a, b) << std::endl;

		std::cout << "lcm_fast : " << lcm_fast(a, b) << std::endl;

		std::cout << "lcm_naive : " << lcm_naive(a, b) << std::endl;


	}
}

int main() {
	//testSolutionManually();
	int a, b;
	std::cin >> a >> b;
	std::cout << lcm_fast(a, b) << std::endl;
	
	system("pause");
	return 0;
}
