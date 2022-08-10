#include <bits/stdc++.h>
using namespace std;

struct Node
{
    Node *links[26];

    bool containsKey(char ch)
    {
        return (links[ch - 'a'] != NULL);
    }
    Node *get(char ch)
    {
        return links[ch - 'a'];
    }
    void put(char ch, Node *node)
    {
        links[ch - 'a'] = node;
    }
};

int countDistinctSubstrings(string &word)
{
    int cnt = 0;
    Node *root = new Node();

    for (int i = 0; i < word.size(); i++)
    {
        Node *node = root;
        for (int j = i; j < word.size(); j++)
        {
            if (!node->containsKey(word[j]))
            {
                cnt++;
                node->put(word[j], new Node());
            }
            node = node->get(word[j]);
        }
    }
    return cnt + 1;
}
int main()
{
    string word = "abab";
    cout << countDistinctSubstrings(word);
    return 0;
}