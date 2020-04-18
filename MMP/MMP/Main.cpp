#include <iostream>
using namespace std;
//함수 정의
int menu_display(void);


int main(void)
{
    int c;
    while ((c = menu_display()) != 4)
    {
        switch (c)
        {
            case 1: //일정 추가
                cout << "1. 일정추가" << endl;
                break;
            case 2: //일정 확인
                cout << "2. 일정확인" << endl;
                break;
            case 3: //현재 일정 추가
                cout << "3. 일정삭제" << endl;
                break;
            case 4: //종료하기              
                exit(0);
                break;

            default: break;
        }
    }
    return 0;
}
int menu_display(void)
{
    int select;
    //system("cls");
    cout<< "Memo My Project" << endl;
    cout << "1. 일정추가" << endl;
    cout << "2. 일정확인" << endl;
    cout << "3. 일정삭제" << endl;
    cout << "4. 프로그램 종료" << endl;

    cout << "번호 입력 후 ENTER" << endl;
    cin >> select;

    return select;
}