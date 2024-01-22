#include "iostream"

using namespace std;




int main(){


    string questions[] = {"1. What year was C++ created?: ",
                          "2. Who invented C++?: ",
                          "3. What is the predecessor of C++?: ",
                          "4. Is the Earth flat?"};


    string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                          {"A. Guido van Rossum", "B. Bjarne Stroustrup","C. John Carmack", "D. Mark Zuckerberg"},
                          {"A. C", "B. Java", "C. Racket", "D. Python"},
                          {"A. yes", "B. no", "C. sometimes", "D. what's Earth?"}};



    char answerKey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score;


    for(int i = 0; i < size; i++){
        cout << "****************************\n";
        cout << questions[i] << "\n";
        cout << "****************************\n";

        for(int j = 0; j < sizeof(options[i])/sizeof(options)[i][0]; j++){
            cout << options[i][j] << "\n";
        }

        cin >> guess;
        guess = toupper(guess);    // input olarak girilen harfi otomatik buyuk karakter yapar

        if(guess == answerKey[i]){
            cout << "CORRECT\n";
            score++;
        }
        else{
            cout << "WRONG!\n";
            cout << "Answer: " << answerKey[i] << "\n";
        }

    }

    cout << "******************************\n";
    cout << "*            RESULTS         *\n";
    cout << "******************************\n";
    cout << "CORRECT GUESSES: " << score << "\n";
    cout << "# of QUESTIONS: " << size << "\n";
    cout << "SCORE: " << (score/(double)size)*100 << "%";


    return 0;

    }


