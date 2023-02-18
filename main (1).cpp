#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
/* №4 Составить алгоритм, исключающий из текста “лишние” пробелы. (В тексте должен быть один пробел для разделения слов).
int main()
{
    string text;
    string bword = "  ";
    getline(cin, text);
    int pos =0;
    for (int i = 0; i < text.length(); i++) {
        pos = text.find(bword);
        if(pos == string::npos)
            break;
        text.erase(pos, 1);
    }
    cout<<text;
    return 0;
}*/
/* №8 Составить алгоритм, исключающий из строки А символы строки Б.
int main(){
    string text;
    string chars;
    getline(cin, text);
    getline(cin, chars);
    for(char c: chars){
        text.erase(remove(text.begin(), text.end(), c), text.end());
    }
    cout<<text<<endl;
}*/
/* №17 Дан массив строк. Упорядочить массив по длине строк
int main(){
    const int size = 5;
        array<string, size> arr;
           // заполнение массива
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }

        string temp; // временная переменная для обмена элементов местами

        // Сортировка массива пузырьком
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j].length() > arr[j + 1].length()) {
                    // меняем элементы местами
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        // Вывод отсортированного массива на экран
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
}*/
/* №22 Исключить из строки группы символов, расположенные между символами «/*» и «*/ // включая границы. Предполагается, что нет вложенных скобок.
/*void data_out(bool *check)
{
switch (*check) {
case true:
    std::cout;  "\nEverything matches\n";
break;
case false:
    std::cout;  "\nEverything don't matches\n";
break;
default:
break;
}


}

bool check_func(std::vector<char> &if_closed, std::vector<char> &if_opened)
{

if(if_closed.size() == if_opened.size())
{
return true;
}
else
{
return false;
}


}

void save_if_close_open (std::string str, std::vector<char> &if_closed, std::vector<char> &if_opened)
{


for(char c: str)
{
if(c == '{')
{
if_opened.push_back(c);
}
if(c == '}')
{
if_closed.push_back(c);
}
}
}

int main()
{


std::string some_str = "{123} {123} {123} {}";
bool check = NULL;

std::vector<char> if_closed;
std::vector<char> if_opened;

save_if_close_open(some_str, if_closed, if_opened);
check = check_func(if_closed, if_opened);
data_out(&check);
}
*/
