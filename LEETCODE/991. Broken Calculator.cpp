class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int c = 0;
        while (startValue != target)
        {
            if (target % 2 == 0  && target > startValue)
            {
                target = target / 2;
            }
            else if (target > startValue)
            {
                target++;
            }
            else {
                c += abs(target - startValue) - 1;
                target = startValue;
            }
            cout << startValue << " ";
            c++;
        }

        return c;

    }
};