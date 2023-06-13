#include <iostream>
#include <vector>

using namespace std;

int gap_penalty = -1;  // Penalty for introducing a gap

int max(int a, int b, int c) {
    return max(max(a, b), c);
}

int needleman_wunsch(vector<string>& seqs) {
    // Initialization
    int n = seqs.size();
    int m = seqs[0].length();
    vector<vector<int>> scores(n + 1, vector<int>(m + 1, 0));
    
    // Fill the first row and column with gap penalties
    for (int i = 1; i <= n; i++) {
        scores[i][0] = scores[i-1][0] + gap_penalty;
    }
    
    for (int j = 1; j <= m; j++) {
        scores[0][j] = scores[0][j-1] + gap_penalty;
    }
    
    // Fill the scoring matrix
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            int match = (seqs[i-1][j-1] == seqs[0][j-1]) ? 1 : -1;  // Score for matching or mismatching
            
            int diagonal_score = scores[i-1][j-1] + match;
            int left_score = scores[i][j-1] + gap_penalty;
            int up_score = scores[i-1][j] + gap_penalty;
            
            scores[i][j] = max(diagonal_score, left_score, up_score);
        }
    }
    
    // Return the alignment score of the last element in the scoring matrix
    return scores[n][m];
}

int main() {
    vector<string> seqs = {"AGTACG", "ATGAC", "AGTCG"};
    int alignment_score = needleman_wunsch(seqs);
    
    cout << "Alignment Score: " << alignment_score << endl;
    
    return 0;
}
