#include <iostream>
#include <vector>

using namespace std;

class Person
{
protected:
    string firstName;
    string lastName;
    int id;

public:
    Person(string firstName, string lastName, int identification)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = identification;
    }
    void printPerson()
    {
        cout << "Name: " << lastName << ", " << firstName << "\nID: " << id << "\n";
    }
};

class Student : public Person
{
private:
    vector<int> testScores;

public:
    /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
    // Write your constructor here
    Student(string firstName, string lastName, int id, vector<int> scores) : Person(firstName, lastName, id)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = id;
        this->testScores = scores;
    }
    /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
    // Write your function here
    char calculate()
    {
        int prom = 0;
        for (int i = 0; i < testScores.size(); i++)
        {
            prom += testScores.at(i);
        }
        prom = prom / testScores.size();
        if (90 <= prom & prom <= 100)
        {
            return '0';
        }
        else if (80 <= prom & prom <= 90)
        {
            return 'E';
        }
        else if (70 <= prom & prom <= 80)
        {
            return 'A';
        }
        else if (55 <= prom & prom <= 70)
        {
            return 'P';
        }
        else if (40 <= prom & prom <= 55)
        {
            return 'D';
        }
        else
        {
            return 'T';
        }
        return prom;
    }
};

int main()
{
    string firstName;
    string lastName;
    int id;
    int numScores;
    cin >> firstName >> lastName >> id >> numScores;
    vector<int> scores;
    for (int i = 0; i < numScores; i++)
    {
        int tmpScore;
        cin >> tmpScore;
        scores.push_back(tmpScore);
    }
    Student *s = new Student(firstName, lastName, id, scores);
    s->printPerson();
    cout << "Grade: " << s->calculate() << "\n";
    return 0;
}