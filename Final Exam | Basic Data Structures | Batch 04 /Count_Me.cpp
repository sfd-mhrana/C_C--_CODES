#include <bits/stdc++.h>
using namespace std;

#define ll long long

pair<string, int> findMostFrequentWord(const string &sentence)
{
    istringstream iss(sentence);
    vector<pair<string, int>> wordCounts;
    string mostFrequentWord;
    int maxCount = 0;
    string word;
    while (iss >> word)
    {

        auto it = find_if(wordCounts.begin(), wordCounts.end(),
                          [&word](const pair<string, int> &wc)
                          { return wc.first == word; });
       
        if (it != wordCounts.end())
        {
            it->second++;
            if (it->second > maxCount)
            {
                maxCount = it->second;
                mostFrequentWord = it->first;
            }
        }
        else
        {
            wordCounts.push_back({word, 1});
            if (maxCount == 0)
            {
                maxCount = 1;
                mostFrequentWord = word;
            }
        }
    }
    return {mostFrequentWord, maxCount};
}

int main()
{
    ll n;
    cin >> n;
    string sentence;
    getline(cin, sentence);
    while (n--)
    {
        string sentence;
        getline(cin, sentence);
        auto result = findMostFrequentWord(sentence);
        cout << result.first << " " << result.second << endl;
    }
    return 0;
}
