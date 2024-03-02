#include <iostream>
#include <string>
#include <ctime>
using namespace std;
#define START 0
#define GOOD_GUESS 1
#define BAD_GUESS -1

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
    int badGuesses = 0;
    int status = START;
    int rightCNT = hiddenWord.size();

    void init(){
        cout << "Welcome to Hangman!" << endl;
        cout << "The hidden word is:" << guessedWord << endl;
    }
    void update(char dauVao){
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
    if (game.status == BAD_GUESS){
        cout << "Bad guess!"<< endl;
        if (game.badGuesses <= 5) cout << "Becareful, you already made "<< game.badGuesses << "/6 mistakes" << endl;
        else ;
    }

    if (game.win()){
        cout << "Congratulation, you won!"<< endl;
        cout << "The hidden word is: " << game.hiddenWord << endl;
    }
    else if (game.lose()) {
        cout << "Too bad, try again next time!" << endl;
        cout << "The hidden word is: " << game.hiddenWord << endl;

    }
    else cout << "The hidden word is: " << game.guessedWord << endl;
}

int main(){
// tạo struct, tạo init, lấy input
// render game
// update game;
struct Hangman game;
game.init();
    do{
        char dauVao = input();
        game.update(dauVao);
        gameMaster(game);
    }
    while(!game.isOver());
    return 0;
}
