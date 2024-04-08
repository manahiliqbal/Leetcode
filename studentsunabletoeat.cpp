class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue <int> studentsq;
        int count = 0;
        
        for (int i=0;i<students.size(); i++)
        {
            studentsq.push(students[i]);
        }
        int i = 0;
        while (studentsq.size()>0 && count!=studentsq.size())
        {
            if (studentsq.front()==sandwiches[i])
            {
                studentsq.pop();
                i++;
                count=0;
            }
            else
            {
                studentsq.push(studentsq.front());
                studentsq.pop();
                count++;
            }
        }
        return studentsq.size();
    }
};