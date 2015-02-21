class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        //solution: loop from the first element, substracted from the target,
        //then compare the differene to the rest of the array. If find a match,
        //return the result, if not, continue the looping.
        //exceptions to track: first element is larger than the target, then pass
        //      no pair found at the end of the looping, not possible as defined in the question
        int differ;
        vector<int> result;
        int i,j;
        for(i=0; i < numbers.size()-1; i++){
            result[0] = i;
            if((target - numbers[i]) >= 0){
                differ = target - numbers[i];
            }
            else continue;
            for(j=i; j<numbers.size(); j++){
                //the target pair identified, return the index vector.
                if(differ == numbers[j]){
                    result[1] = j;
                    return result;
                }
            }
        }
    }
};
int main(){
}
