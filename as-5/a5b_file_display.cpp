// Part B

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream file("ai.txt");
    string line;
    int count = 0;
    while (getline(file, line))
    {
        cout << line << endl;
        if (count != 0 && count % 24 == 0)
        {
            cout << "...Press ENTER to continue..." << endl;
            system("pause > nul");    
        }
        count++;
    }
}

/*
No.
he said.
"no," he said.
"no," i said.
"i know," she said.
"thank you," she said.
"come with me," she said.
"talk to me," she said.
"don't worry about it," she said.
it made me want to cry.
no one had seen him since.
it made me feel uneasy.
no one had seen him.
the thought made me smile.
the pain was unbearable.
the crowd was silent.
the man called out.
the old man said.
the man asked.
he was silent for a long moment.
he was silent for a moment.
it was quiet for a moment.
it was dark and cold.
there was a pause.
it was my turn.
...Press ENTER to continue...
there is no one else in the world.
there is no one else in sight.
they were the only ones who mattered.
they were the only ones left.
he had to be with me.
she had to be with him.
i had to do this.
i wanted to kill him.
i started to cry.
i turned to him.
*/