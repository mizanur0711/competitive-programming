class Solution {
public:
	vector<int> findAnagrams(string s, string p) {
		int len = s.size();
		int plen = p.size();
		vector<int> shash(26, 0);
		vector<int> phash(26, 0);
		vector<int> ans;
		if (len < plen)
		{
			return ans;
		}
		for (int i = 0; i < plen; i++)
		{
			shash[s[i] - 'a']++;
			phash[p[i] - 'a']++;
		}
		int i = 0;
		int j = plen - 1;
		while (j < len)
		{
			if (phash == shash)
			{
				ans.push_back(i);
			}
			j++;
			if (j != len)
			{
				shash[s[j] - 'a']++;
			}
			shash[s[i] - 'a']--;
			i++;
		}
		return ans;
	}
};