class Solution {
public:
    string toGoatLatin(string sentence) {
        string result = "";
        int wordIndex = 1;  // Keeps track of word index for adding 'a's

        // Split the sentence into words
        vector<string> words;
        stringstream ss(sentence);
        string word;
        while (getline(ss, word, ' ')) {
            words.push_back(word);
        }

        for (string& word : words) {
            char firstLetter = tolower(word[0]);
            string suffix;

            if (isVowel(firstLetter)) {
                suffix = "ma";
            } else {
                suffix = word.substr(0, 1) + "ma";
                word = word.substr(1);  // Remove first letter for consonant words
            }

            word += suffix;
            word += string(wordIndex, 'a');  // Append 'a's based on word index

            result += word;
            result += " ";
            wordIndex++;
        }

        return result.substr(0, result.length() - 1);  // Remove trailing space
    }

private:
    bool isVowel(char c) {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
};
