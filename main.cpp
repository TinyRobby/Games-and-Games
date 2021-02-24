#iclude <iostream>
#iclude <fstream>

using namespace std;

int main()
{
     cout << "Welcome to the game hub" << endl;
     string hubstrng;
     bool game = true;
     while(game == true)
     {  
            cout << "Game hub. options:\nhelp:help\nstart:start a game\nexit:leave" << endl;
            cin >> hubstrng;
            bool start;
            if(hubstrng == "exit")
            {
                break;
            }
            if(hubstrng == "start")
            {
                string hubstrngstart;
                cout << "Welcome to the game start hub\nstart by typing list" << endl;
                cin >> hubstrngstart;
                if(hubstrngstart == "list")
                {
                    cout << "1 = buckz\n2 = CF sim 1.0\nRT-FOS fake operating system\nenter the number of the game you want" << endl;
                     
                }
            }
              
     }
  return 0;
}  
