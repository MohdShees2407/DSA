class Solution {
public:
    int NoOfDay(string d)
    {
        int month=stoi(d.substr(0,2));
        int day=stoi(d.substr(3));
        int sum=0;
        for(int i=1;i<month;i++)
        {
            if(i==1 || i==3 ||i==5 || i==7||i==8||i==10||i==12)sum+=31;
            else if(i==2)sum+=28;
            else sum+=30;
        }
        return sum+day;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) 
    {
        int ArriveAlice = NoOfDay(arriveAlice);
        int LeaveAlice = NoOfDay(leaveAlice);
        int ArriveBob = NoOfDay(arriveBob);
        int LeaveBob = NoOfDay(leaveBob);
        int lastarrive = max(ArriveAlice,ArriveBob);
        int firstleave = min(LeaveAlice,LeaveBob);
        if(firstleave<lastarrive)return 0;
        return firstleave-lastarrive+1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna