class Solution {
public:
  int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
    int arr[] = {tops[0], bottoms[0]};
    for (int j = 0; j < 2; j++)
    {
      int a = arr[j];
      int missing_t = 0;
      int missing_b = 0;
      for (int i = 0; i < tops.size(); i++)
      {
        if ((a != tops[i] && a != bottoms[i]))
        {
          break;
        }
        if (a != tops[i])
        {
          missing_t++;
        }
        if (a != bottoms[i])
        {
          missing_b++;
        }
        if (i == tops.size() - 1)
        {
          return min(missing_t, missing_b);
        }
      }
    }

    return -1;


  }
};