#include <stdio.h>
#define MAX 50

/*
***** HW4 DESCRIPTION *****
* You have three mandatory tasks (task1 to task3) and one optinal task (task4).
* As you did in the last homework, your goal is to complete given functions.
* Read the guideline of each function carefully, and fill the function appropriately.
* To do this homework, you need to understand 1) the relationship between array and pointer, and 2) how to handle character strings.
* NOTE: please do not make it by manually assinging some values such as arr[1] = 'a', arr[2] = 'B', and arr[3] = 'C'. You cannot get a full mark.
* GOOD LUCK!
*/

// DO NOT TOUCH THIS FUNCTION.
void init(char* ptr) {
	int i;
	for (i = 0; i < MAX; i++) {
		ptr[i] = '\0';
	}
}


// (3pts) This function returns the length of the given string, passed via character pointer "ptr".
// For example, for the string, "abcd", this function should return 4. (NOT COUNT THE NULL CHACRACTER ('\0').) 
// Please note that in C programming all strings are stored in character arrays with the last element of '\0'.
// More specifically, the string "abcd" is stored in an array (let's say arr) as follows:
// arr[0] = 'a'
// arr[1] = 'b'
// arr[2] = 'c'
// arr[3] = 'd'
// arr[4] = '\0'
int task1(char* ptr) {
	int len = 0;

	//Your code goes here.
	int i = 0;
		while (ptr[i]) {
			if (ptr[i] == "\0") {
				break;
			}
			else i++;
	}
		len = i;
	return len;
}


// (3pts) This function converts the string pointed by "ptr" to UPPERCASE.
// For example, for the string of "aBcD", this function should change it to "ABCD".
// You can use the fact that for a lowercase character the ascii code of the corresponding uppwercase is obtained by subtracting 32.
// Also you may want to use the length of the target string for this task, 
// and that is why this function takes the length of the string (i.e., int len) as a second parameter.
// Recall: Do not make it by manually assinging some values. 
// For example, for the example above, the following code is not a good choice, though it works, and you cannot get a full mark:
// ptr[0] = 'A'; ptr[2] = 'C';
void task2(char* ptr, int len) {

	//Your code goes here.
	int i = 0;
	
	for (i = 0; i < len; i++) {
		int temp = ptr[i];
		if (temp > 96 && temp < 123) {
			ptr[i] -= 32;
		}
		
	}


}


// (4pts) This function reverses the string pointed by "ptr". 
// For example, for string "abcd", this function should chage it to "dcba".
// For this task, you may want to use an additional variable or array, and the length of the target string (i.e., int len) would be very helpful.
void task3(char* ptr, int len) {

	//Your code goes here.
	for (int i = 0; i < len / 2; i++) {
		int temp;
		temp = ptr[i];
		
		ptr[i] = ptr[len - 1-i];
		
		ptr[len - i-1] = temp;
		
	}

}


// (3pts) This function copies the first "len" strings from the string pointed by "src" to "dst".
// For example, let us say that "src" points to string "abcd", "dst" is an empty array, and "len" is 2.
// Then, the resulting "dst" will be "ab", more specifically, dst[0]='a', dst[1]='b', dst[2]='\0'.
void task4(char* src, char* dst, int len) {

	//Yout code goes here.
	int i;
	for (i = 0; i < len; i++) {
		dst[i] = src[i];
	}
	src[i + 1] = "\n";

}



// DO NOT TOUCH THE MAIN FUNCTION.
int main() {
	char str[MAX] = "This is your last homework.";


	int len = task1(str);
	printf("[TASK1] Answer: 27\n");
	printf("[TASK1] Yours : %d\n", len);

	task2(str, len);
	printf("\n[TASK2] Answer: THIS IS YOUR LAST HOMEWORK.\n");
	printf("[TASK2] Yours : %s\n", str);

	task3(str, len);
	printf("\n[TASK3] Answer: .KROWEMOH TSAL RUOY SI SIHT\n");
	printf("[TASK3] Yours : %s\n", str);


	char str2[MAX];
	init(str2);
	task4(str, str2, 4);
	printf("\n[TASK4] Answer: .KRO\n");
	printf("[TASK4] Yours : %s\n", str2);

	return 0;
}
