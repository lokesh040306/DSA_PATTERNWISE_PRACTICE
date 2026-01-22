/*

int ways(vector<int>& arr, int target, int index) {

	// Base case
	if (index == 0) {
        // special case when arr[0] is 0
		if (target == 0 && arr[0] == 0) return 2;  // {} and {0}
		if (target == 0 || target == arr[0]) return 1;
		return 0;
	}

    // not pick the current element
	int notPick = ways(arr, target, index - 1);

    // pick the current element
	int pick = 0;
	if(target >= arr[index]) {
		pick = ways(arr, target - arr[index], index - 1);
	}

	return notPick + pick;
}

int findWays(vector<int>& arr, int k) {

	// Recursion
	int n = arr.size();
	return ways(arr, k, n - 1); 
}

*/