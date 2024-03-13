#include <iostream>
#include <string>
#include <ctime>
#include <vector>
using namespace std;
#define START 0
#define GOOD_GUESS 1
#define BAD_GUESS -1
#define ALREADY_GUESSED -2
string chooseWord(){
    string words[] = {"programming", "hangman", "difficult", "words", "random", "computer", "vietnam", "window", "architecture"};
    srand(time(0));
    int n = sizeof(words) / sizeof(words[0]);
    int index = rand() % n;
    return words[index];
}

struct Hangman{
    string hiddenWord = chooseWord();
    string guessedWord = string(hiddenWord.length(),'_');
    int turn_count = 1;
    int badGuesses = 0;
    int status = START;
    int rightCNT = hiddenWord.size();
    vector <char> prevGuess ={ 's'};
    void init(){
        cout << "Welcome to Hangman!" << endl;
        cout << "The hidden word is:" << guessedWord << endl;
    }
    void turnCounter(int &turn_count){
        cout << "Turn " << turn_count << ")" << endl;
    }
    void update(char dauVao){
        prevGuess.push_back(dauVao);
        if (turn_count != 1){
        for ( int i = 1; i < turn_count ; i++)
        if ( prevGuess[turn_count] == prevGuess[i] ){
            status = ALREADY_GUESSED;
            return;
        }
        }

        status = BAD_GUESS;
        for (int i = 0; i < hiddenWord.size(); i++){
            if (dauVao == hiddenWord[i]){
                status = GOOD_GUESS;
                guessedWord[i] = dauVao;
                rightCNT --;
            }
        }
        if ( status == BAD_GUESS) badGuesses ++;

    }


    void graphic(int badGuesses){
        switch (badGuesses) {
            case 1:
            cout << " o " << endl ;
            break;

            case 2:
            cout << " o " << endl
                 << " |" << endl;
            break;

            case 3:
            cout << " o " << endl
                 << "/|" << endl;
            break;

            case 4:
            cout << " o " << endl
                 << "/|\\" << endl;
            break;

            case 5:
            cout << " o " << endl
                 << "/|\\" << endl
                 << "/ " << endl;
            break;

            case 6:
            cout << " o " << endl
                 << "/|\\" << endl
                 << "/ \\" << endl;
            break;
        }
    }

    bool win(){
        if ( rightCNT == 0 ) return true;
        return false;
    }
    bool lose(){
        if (badGuesses >= 6) return true;
        return false;

    }
    bool isOver(){
        return win() || lose();
    }

};
char input(){
    string dauVao;
    cout << "Type in your guess: " ;
    getline(cin,dauVao);
    return dauVao[0];
}

void gameMaster(Hangman& game){
    if (game.status == GOOD_GUESS) cout << "Good guess!"<< endl;
    else if (game.status == BAD_GUESS){
        cout << "Bad guess!";
        if (game.badGuesses <= 5) cout << " Becareful, you already made "<< game.badGuesses << "/6 mistakes" << endl;
    }
    else if (game.status == ALREADY_GUESSED) cout << "You already guessed that bro!" << endl;
    if (game.status == BAD_GUESS) game.graphic(game.badGuesses);
    if (game.win()){
        cout << "Congratulation, you won!"<< endl;
        cout << "The hidden word is: " << game.hiddenWord << endl;
    }
    else if (game.lose()) {
        cout << "Too bad, try again next time!" << endl;
        cout << "The hidden word is: " << game.hiddenWord << endl;
    }
    else cout << "The hidden word is: " << game.guessedWord << endl << endl;
}

int main(){
struct Hangman game;
game.init();
    do{
        game.turnCounter(game.turn_count);
        char dauVao = input();
        game.update(dauVao);
        gameMaster(game);
        game.turn_count++;
    }
    while(!game.isOver());
    return 0;
}
