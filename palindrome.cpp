bool solution(vector<string> crypt, vector<vector<char> solution>){
    int firstnum = 0;
    bool firstfirstchar = true;
    for(int i = 0; i < crypt[0].size(); i++) {
        char a = crypt[0][i];
        for(int j = 0; j < solution.size(); j++) {
            if(a == solution[j][0]) {
                firstnum = int(firstnum)*10 + int(solution[j][1]) - 48;
                if(firstfirstchar && crypt[0].size() != 1) {
                    if(solution[j][1] == '0') {
                        return false;
                    }
                }
                firstfirstchar = false;
            }
        }
    }
    int secondnum = 0;
    bool secondfirstchar = true;
    for(int i = 0; i < crypt[1].size(); i++) {
        char b = crypt[1][i];
        for(int j = 0; j < solution.size(); j++) {
            if(b == solution[j][0]) {
                secondnum = int(secondnum)*10 + int(solution[j][1]) - 48;
                if(secondfirstchar && crypt[1].size() != 1) {
                    if (solution[j][1] == '0') {
                        return false;
                    }
                }
                secondfirstchar = false;
            }
        }
    }
    int thirdnum = 0;
    bool thirdfirstchar = true;
    for(int i = 0; i < crypt[2].size(); i++) {
        char c = crypt[2][i];
        for(int j = 0; j < solution.size(); j++) {
            if(c == solution[j][0]) {
                thirdnum = int(thirdnum)*10 + int(solution[j][1]) - 48;
                if(thirdfirstchar && crypt[2].size() != 1) {
                    if(solution[j][1] == '0') {
                        return false;
                    }
                }
                thirdfirstchar = false;
            }
        }
    }
    if(firstnum + firstnum == thirdnum) {
        return true;
    } else{
        return false;
    }
}