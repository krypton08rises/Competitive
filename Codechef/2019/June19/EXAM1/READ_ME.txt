Chef is taking a cooking exam. The exam consists of N multiple-choice questions numbered 1 through N. In each question, Chef may choose one out of four choices: A, B, C and D, or leave the question unanswered.

Answering a question correctly gives Chef 1 point. Not answering a question or answering it incorrectly gives him 0 points. However, there is a penalty for wrong answers. Specifically, the questions are graded one by one from question 1 to question N; for each i (1=i=N-1), if Chef answered the i-th question incorrectly, his answer to the next question (the (i+1)-th question) is discarded without being graded. If an answer is discarded, Chef gets 0 points for it automatically, but even if it was wrong, the next answer is not discarded. There is no penalty for answering the last question incorrectly or for not answering some questions.

You are given the correct answers to all N questions and Chef's answers. Calculate the total number of points Chef scored on the exam.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains a single string S with length N. For each valid i, the i-th character of this string denotes the correct answer to the i-th question.
The third line contains a single string U with length N. For each valid i, the i-th character of this string is 'N' if Chef did not answer the i-th question; otherwise, it denotes Chef's answer to this question.
Output
For each test case, print a single line containing one integer — Chef's score.

Constraints
1=T=100
1=N=100
S contains only characters 'A', 'B', 'C', 'D'
U contains only characters 'A', 'B', 'C', 'D', 'N'
Example Input
3
6
ABCDAB
ABCDAB
8
DDCABCCA
DNCBBBBA
3
CDD
NDC
Example Output
6
3
1