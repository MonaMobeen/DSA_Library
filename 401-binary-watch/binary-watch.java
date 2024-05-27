class Solution {
    public List<String> readBinaryWatch(int turnedOn) {
        List<String> result = new ArrayList<>();
        
        // Check for valid turnedOn values (0 to number of LEDs)
        if (turnedOn < 0 || turnedOn > 4 + 6) {
            return result;
        }
        
        // Iterate through possible hours (0 to 11)
        for (int hour = 0; hour <= 11; hour++) {
            int hourBits = countBits(hour);
            
            // Check if remaining LEDs (turnedOn - hourBits) can represent minutes
            for (int minute = 0; minute < 60; minute++) {
                int minuteBits = countBits(minute);
                if (hourBits + minuteBits == turnedOn) {
                    result.add(formatTime(hour, minute));
                }
            }
        }
        
        return result;
    }
    
    // Helper function to count the number of set bits (1s) in a binary number
    private int countBits(int num) {
        int count = 0;
        while (num > 0) {
            count += num & 1;
            num >>= 1;
        }
        return count;
    }
    
    // Helper function to format time string with leading zero for minutes if needed
    private String formatTime(int hour, int minute) {
        return String.format("%d:%02d", hour, minute);
    }
}
