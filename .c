int is_prime(int number) {
	if (number <= 1)
		return 0;
	else if (number <= 3)
		return 1;
	else if (number % 2 == 0 || number % 3 == 0)
		return 0;
	int i = 5;
	while (i*i <= number) {
		if (number % i == 0 || number % (i + 2) == 0) {
			return 0;
		}
		i = i + 6;
	}
	return 1;
}
// mocemuli ricxvis martiv mamravlebad dashla boshyo! 
main() {
	srand(time(NULL));
	int n = 100600, i = 2;
	while (n > 1) {
		if (n % i == 0) {
			printf("%02d ", i);
			n /= i;
			i = 2;
		}
		else {
			i++;
		}
	}
		getchar();

	}
\b\b -  nishansvs backspaces! anu shlis bolo 2 simbolos radgan boloshi gamravleba agar gvindoda! 
ricxvis martiv mamravlebad dashla! 
// timer for bonus!
	main(){

	 int i = 0;
	while(1){
        Sleep(1000);
	printf("\b\b%02d", i++ % 60 + 1);
	}
	
	main() {

	int i = 0;
	int k = 0;
	while (1) {
		Sleep(1000);
		printf("\b\b\b\b\b\b\b%02d  %02d", i++ / 60 + 1, k++ % 60);
		
	}
}
