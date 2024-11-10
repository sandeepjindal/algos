private void buildSuffixArray(String s, String[] suffixes) {
        int l = s.length();
        for(int i=0; i<l; ++i){
            suffixes[i] = s.substring(i);
        }
        Arrays.sort(suffixes);
    }

    public int longestRepeatingSubstring(String s) {
        int l = s.length();
        String[] suffixes = new String[l];
        buildSuffixArray(s, suffixes);
        int maxLength = 0;
        for(int i=1; i<l; ++i){
            int j=0;
            while(j < Math.min(suffixes[i].length(), suffixes[i-1].length()) 
            && suffixes[i].charAt(j) == suffixes[i-1].charAt(j)
            ){
                j++;
            }
            maxLength = Math.max(j, maxLength);
        }

        return maxLength;

    }

// TC: O(n2logn) -> O(n)
