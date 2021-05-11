#include <stdio.h>
#define ROW 20
#define COL 4


// * DESCRIPTION
// Your goal is to complete the given functions (total 6 = 3 (mandatory) + 3 (optional))
// The three mandotaory tasks are for HW3, and the remaining additional threes for HW2.
// The additional tasks are ONLY for those who got a low score less than 7 in HW2. If you want to increase your mark for HW2, then try them. 
// After completing this file, submit it back to the LMS system. 
// DO NOT MAKE ANY MISTAKE OF GIVING WRONG FILE EXTENSIONS AND BUILD ERRORS.
// THERE WILL BE NO FURTHER CHANCE.


// DO NOT TOUCH THE FOLLOWING ARRAY DEFINITIONS
const int A[ROW][COL] = {
	{15, 17, 9, 17},
	{4, 11, 4, 1},
	{14, 8, 19, 19},
	{4, 19, 20, 15},
	{8, 18, 9, 10},
	{13, 12, 3, 12},
	{16, 13, 6, 5},
	{2, 12, 9, 10},
	{19, 5, 12, 20},
	{16, 7, 6, 11},
	{10, 10, 13, 11},
	{9, 5, 15, 5},
	{9, 17, 5, 10},
	{7, 4, 3, 13},
	{11, 5, 6, 14},
	{11, 4, 7, 8},
	{17, 5, 9, 8},
	{16, 9, 11, 20},
	{13, 7, 2, 1},
	{8, 19, 6, 18}
};
int B[COL][1] = { -1 };
int C[ROW][1] = { -1 };

// DO NOT TOUCH THIS FUNCTION
void print(const int* arr, const char* name, const int r, const int c) {
	printf("==================\n");
	printf("%s\n", name);
	
	for (int rr = 0; rr < r; rr++) {
		for (int cc = 0; cc < c; cc++) {
			printf("%-5d", *(arr++));
		}
		printf("\n");
	}
}



// (3pts) This function initializes vector C by filling it with zeros.
void task1(int C[ROW][1]) {
	// TO DO: complete this function.
	// Your code goes here.
	C[0][0] = 0;




	print(C, "C", ROW, 1);				// DO NOT TOUCH THIS CODE
}



// (3pts) This function fills B with the following DATA (Copy DATA to B.)
void task2(int B[COL][1]) {
	const int DATA[] = { 1, 2, 3, 4 };	//DO NOT MODIFY THIS CODE

	// TO DO: complete this function.
	// Your code goes here.

	for (int i = 0; i < COL; i++) {
		B[i][0] = DATA[i];
	}


	print(B, "B", COL, 1);				// DO NOT TOUCH THIS CODE
}



// (4pts) This function computes A * B, and stores the result in C.
// C = A * B.
void task3(const int A[ROW][COL], const int B[COL][1]) {
	// TO DO: complete this function.
	// Your code goes here.
	for (int i = 0; i < ROW; i++) {
		int sum=0;
		for (int j = 0; j < COL; j++) {
			sum += A[i][j] * B[0][j];
			
		}
		C[i][0]=sum;
	}



	print(C, "C = A * B", ROW, 1);		// DO NOT TOUCH THIS CODE

}



// (2pts) This function computes the transpose of A, and stores it in A_T.
int A_T[COL][ROW] = { -1, };
void task1_HW2(const int A[ROW][COL]) {
	// TO DO: complete this function
	// Your code goes here.
	
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			A_T[j][i] = A[i][j];
		}
	}

	print(A_T, "A_T = A'", COL, ROW);	// DO NOT TOUCH THIS CODE
}



// (2pts) This function computes the transpose of B, and stores it in B_T.
int B_T[1][COL] = { -1, };
void task2_HW2(const int B[COL][1]) {
	// TO DO: complete this function
	// Your code goes here.
	for (int i = 0; i < COL; i++) {
		B_T[0][i] = B[i][0];
	}


	print(B_T, "B_T = B'", 1, COL);		// DO NOT TOUCH THIS CODE
}



// (3pts) This function computes B_T * A_T, and stores the result in D.
// D = B_T * A_T.
int D[1][ROW] = { -1, };
void task3_HW2(const int B_T[1][COL], const int A_T[COL][ROW]) {
	// TO DO: complete this function
	// Your code goes here.
	for (int i = 0; i < ROW; i++) {
		int sum = 0;
		for (int j = 0; j < COL; j++) {
			sum += A[i][j] * B[0][j];

		}
		D[0][i] = sum;
	}
	

	print(D, "D = B_T * A_T", 1, ROW);	// DO NOT TOUCH THIS CODE
}


// DO NOT TOUCH THE MAIN FUNCTION.
int main() {
	
	task1(C);
	task2(B);
	task3(A, B);


	// The following threes are only for those who got a score less than 7 in HW2.
	task1_HW2(A);
	task2_HW2(B);
	task3_HW2(B_T, A_T);

	return 0;
}
