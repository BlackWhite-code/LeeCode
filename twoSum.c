// 在一个数组中找到两个数字相加得到target的值，然后返回下标

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
	for (int i = 0; i < numsSize; ++i){
		for(in j = i+1; j < numsSize; ++j){
			if(nums[i] + nums[j] == target){
				int* ret = malloc(sizeof(int)*2);
        		        ret[0] = i;
				ret[1] = j;
				*returnSize = 2;
				return ret;

			}
		}
	}
	*returnSize = 0;
	return NULL;
}
