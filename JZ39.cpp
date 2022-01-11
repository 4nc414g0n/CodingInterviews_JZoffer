
//JZ39 数组中出现次数超过一半的数字

//思路一：排序中间的那个就是
class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        sort(numbers.begin(),numbers.end());
        int mid=numbers.size()/2;
        return numbers[mid];
    }
};
//思路二：哈希

//map

//思路三:抵消
class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        int out;
        int count=0;
        for(int i;i<numbers.size();i++)
        {
            if(count==0)
            {
                out=numbers[i];
                count++;
                continue;
            }
            if(out==numbers[i])
                count++;
            else
                count--;
        }
        return out;
    }
};