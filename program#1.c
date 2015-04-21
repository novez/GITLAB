#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Calculate a students grade.
* Ask the user for quizzes, midterm and final exam score,
*then print user results. Quizzes count 25%, midterm 25%,
*final exam 50%. Final grade is a number, not a letter.
*/
int main()
	{
	char stringInput[128];
	int totalScores = 0;
	int quizScore = 0;
	int midScore = 0;
	int finalScore = 0;
	int averageScore = 0;
	int grade = 0;
	int quiz;
	memset(stringInput,0,sizeof(stringInput));

	/* Calculate average of quizzes */
	for (quiz = 1; quiz <=5; quiz++)
		{
		printf("Enter score for quiz number %d: ", quiz);
		fgets(stringInput,128, stdin);
		sscanf(stringInput,"%d",&quizScore);
		totalScores = totalScores + quizScore;
		}
	averageScore = totalScores/5;

	/* Get the midterm exam score */
	printf("Enter midterm exam score: ");
	fgets(stringInput,128, stdin);
	sscanf(stringInput,"%d",&midScore);

	/* Get the final exam score */
	printf("Enter final exam score: ");
	fgets(stringInput,128, stdin);
	sscanf(stringInput,"%d",&finalScore);

	/* Calculate grade */
	grade = averageScore * 0.25 + midScore * 0.25 + finalScore * 0.5;
	printf("Your grade is %d\n",grade);
	if (grade < 60)
	printf("Sorry, you've failed the course.\n");
else
	printf("Congratulation! You passed the course.\n");
exit(0);
}
