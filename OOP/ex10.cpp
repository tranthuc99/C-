#include <iostream>
#include <string>

using namespace std;

class vanBan
{
private:
	char* content;
	int length;

public:
	vanBan();
	vanBan(string);
	~vanBan();
    void handling();
    int countA() const;
    int numWord() const;
	string getContent() const;

};

vanBan::vanBan()
{
	this->content = nullptr;
	this->length = 0;
}

vanBan::vanBan(string str)
{
	this->length = str.length();
	this->content = new char[str.length()];
	for (int i = 0; i < this->length; i++)
		this->content[i] = str[i];
}

vanBan::~vanBan()
{
	if (this->content != NULL)
	{
        delete[] this->content;
    }
	this->content = nullptr;
	this->length = 0;
}

void vanBan::handling()
{
    // xu ly dau van ban
    int head = -1;
    do
    {
        head += 1;
    } while (this->content[head] == ' ');
    for (int i = 0; i < this->length - head; i++)
    {
        this->content[i] = this->content[i + head];
    }
    this->length -= head;

    // xu ly cuoi van ban
    int tail = this->length;
    int countT = -1;
    do
    {
        countT += 1;
        tail -= 1;
    } while (this->content[tail] == ' ');
    this->length -= countT;

    // xu ly giua van ban
    for (int i = 0; i < this->length; i++)
    {
        if (this->content[i] == ' ')
        {   
            int countB = 0;
            do
            {
                countB += 1;
            } while (this->content[i + countB] == ' ');
            countB -= 1;
            for (int j = i+1; j < this->length - countB; j++)
            {
                this->content[j] = this->content[j + countB];
            }
            this->length -= countB;
        }
        
    }
    
    
}

int vanBan::countA() const
{
    int count = 0;
    if (this->length == 0)
    {
        return count;
    }
    for (int i = 0; i < this->length; i++)
    {
        if ((this->content[i] == 'a') || (this->content[i] == 'A'))
        {
            count += 1;
        }
    }
    return count;
}

int vanBan::numWord() const
{
    int space = 0;
    if (this->length == 0)
    {
        return space;
    }
    for (int i = 0; i < this->length; i++)
    {
        if (this->content[i] == ' ')
        {
            space += 1;
        }
    }
    return space + 1;
}

string vanBan::getContent() const
{
	string str;
	for (int i = 0; i < this->length; i++)
		str.push_back(this->content[i]);
	return str;
}



int main()
{
    vanBan s("   Thuc     Nguyen                Tran,   class 10A2  ");
    cout << "Hien thi van ban:" << s.getContent() << endl;
    s.handling();
    cout << "Hien thi van ban(sau khi xu ly):" << s.getContent() << endl;
    cout << "So tu cua van ban: " << s.numWord() << endl;
    cout << "So ky tu Aa: " << s.countA();

    return 0;
}