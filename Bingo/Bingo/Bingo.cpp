#include "Framework.h"

// 5x5 빙고판

// 1. 이중배열로 5x5 빙고판 만들기 
// 2. 만들어진 빙고판에 1~25 숫자 넣기
// 3. 넣은 숫자 섞기
// 4. 빙고가 되는 조건 만들기

int main()
{
    BingoBoard* bingo1 = new BingoBoard();
    BingoChar* bingo2 = new BingoChar();
    MultiBingo* bingo3 = new MultiBingo();

    // bingo1->StartBingo();
    bingo2->StartBingo();
    // bingo3->StartBingo();
}
