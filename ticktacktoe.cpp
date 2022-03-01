#include <iostream>
#include <stdlib.h>
using namespace std;
void printer(float p){
    if (p == 0){
            cout << "| |";
        }
        else if (p == 1){
            cout << "|X|";
        }
        else {
            cout << "|O|";
        }
}
void printer_end(float p){
    if (p == 0){
            cout << "| |\n";
        }
        else if (p == 1){
            cout << "|X|\n";
        }
        else {
            cout << "|O|\n";
        }
}
float checker(float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float player, string name){
    if (p1 == player){
        if (p2 == player){
            if (p3 == player){
                cout << "Player "+name+ " wins!";
                cout << "\n Insert any character and press enter to end!";
                cin >> name;
                return 1;
            }
        }
        else if (p5 == player){
            if (p9 == player){
                cout << "Player "+name+ " wins!";
                cout << "\n Insert any character and press enter to end!";
                cin >> name;
                return 1;
            }
        }
        else if (p4 == player){
            if (p7 == player){
                cout << "Player "+name+ " wins!";
                cout << "\n Insert any character and press enter to end!";
                cin >> name;
                return 1;
            }
        }
    }
    if (p4 == player){
        if (p5 == player){
            if (p6 == player){
                cout << "Player "+name+ " wins!";
                cout << "\n Insert any character and press enter to end!";
                cin >> name;
                return 1;
            }
        }
    }
    if (p7 == player){
        if (p8 == player){
            if (p9 == player){
                cout << "Player "+name+ " wins!";
                cout << "\n Insert any character and press enter to end!";
                cin >> name;
                return 1;
            }
        }
    }
    if (p2 == player){
        if (p5 == player){
            if (p8 == player){
                cout << "Player "+name+ " wins!";
                cout << "\n Insert any character and press enter to end!";
                cin >> name;
                return 1;
            }
        }
    }
    if (p3 == player){
        if (p6 == player){
            if (p9 == player){
                cout << "Player "+name+ " wins!";
                cout << "\n Insert any character and press enter to end!";
                cin >> name;
                return 1;
            }
        }
        else if (p5 == player){
            if (p7 == player){
                cout << "Player "+name+ " wins!";
                cout << "\n Insert any character and press enter to end!";
                cin >> name;
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    float p1;
    float p2;
    float p3;
    float p4;
    float p5;
    float p6;
    float p7;
    float p8;
    float p9;
    float temp;
    float playera = 1;
    float playerb = 2;
    float check;
    float win = 0;
    float turn = 1;
    float checking = 0;
    string playeraname;
    string playerbname;
    p1 = 0;
    p2 = 0;
    p3 = 0;
    p4 = 0;
    p5 = 0;
    p6 = 0;
    p7 = 0;
    p8 = 0;
    p9 = 0;
    check = 0;

    string result;
    cout << "Tick tack toe\n";
    cout << "Play with your numpad!\n";
    cout << "Insert player a name: ";
    cin >> playeraname;
    cout << "Insert player b name: ";
    cin >> playerbname;
    while (true){
        if (turn == 1){
            printer(p1);
            printer(p2);
            printer_end(p3);
            printer(p4);
            printer(p5);
            printer_end(p6);
            printer(p7);
            printer(p8);
            printer_end(p9);
            cout << "Player "+playeraname+"\n";
            cin >> temp;
            turn = 2;
            if (temp == 1){
                if (p7 == 0){
                    p7 = playera;
                    checking = 1;
                }
            }
            if (temp == 2){
                if (p8 == 0){
                    p8 = playera;
                    checking = 1;
                }
            }
            if (temp == 3){
                if (p9 == 0){
                    p9 = playera;
                    checking = 1;
                }
            }
            if (temp == 4){
                if (p4 == 0){
                    p4 = playera;
                    checking = 1;
                }
            }
            if (temp == 5){
                if (p5 == 0){
                    p5 = playera;
                    checking = 1;
                }
            }
            if (temp == 6){
                if (p6 == 0){
                    p6 = playera;
                    checking = 1;
                }
            }
            if (temp == 7){
                if (p1 == 0){
                    p1 = playera;
                    checking = 1;
                }
            }
            if (temp == 8){
                if (p2 == 0){
                    p2 = playera;
                    checking = 1;
                }
            }
            if (temp == 9){
                if (p3 == 0){
                    p3 = playera;
                    checking = 1;
                }
            }
            check = check + 1;
            win = checker(p1, p2, p3, p4, p5, p6, p7, p8, p9, playera,playeraname);
            if (check == 9){
                cout <<"Draw! ";
                break;
            }
            if (win == 1){
                break;
            }
            if (checking == 0){
                cout << "\nTry again!\n";
                turn = 1;
            }
            else{
                turn = 2;
            }
            checking = 0;
        }
        if (turn == 2){
            printer(p1);
            printer(p2);
            printer_end(p3);
            printer(p4);
            printer(p5);
            printer_end(p6);
            printer(p7);
            printer(p8);
            printer_end(p9);
            cout << "Player "+playerbname+" \n";
            cin >> temp;
            check = check +1;
            if (temp == 1){
                if (p7 == 0){
                    p7 = playerb;
                    checking = 1;
                }
            }
            if (temp == 2){
                if (p8 == 0){
                    p8 = playerb;
                    checking = 1;
                }
            }
            if (temp == 3){
                if (p9 == 0){
                    p9 = playerb;
                    checking = 1;
                }
            }
            if (temp == 4){
                if (p4 == 0){
                    p4 = playerb;
                    checking = 1;
                }
            }
            if (temp == 5){
                if (p5 == 0){
                    p5 = playerb;
                    checking = 1;
                }
            }
            if (temp == 6){
                if (p6 == 0){
                    p6 = playerb;
                    checking = 1;
                }
            }
            if (temp == 7){
                if (p1 == 0){
                    p1 = playerb;
                    checking = 1;
                    
                }
            }
            if (temp == 8){
                if (p2 == 0){
                    p2 = playerb;
                    checking = 1;
                }
            }
            if (temp == 9){
                if (p3 == 0){
                    p3 = playerb;
                    checking = 1;
                }
            }
            win = checker(p1, p2, p3, p4, p5, p6, p7, p8, p9, playerb,playerbname);
            if (win == 1){
                break;
            }
            if (checking == 0){
                cout << "\nTry again! \n";
                turn = 2;
            }
            else{
                turn = 1;
            }
            checking = 0;
        }
    }
        
    
    cout << result;
    return 0;
}