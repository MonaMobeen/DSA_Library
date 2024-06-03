public class Solution
{
    public int MinMovesToSeat(int[] seats, int[] students)
    {
        if (seats.Length != students.Length)
        {
            throw new ArgumentException("seats and students arrays must have the same length");
        }

        int n = seats.Length;
        int[] sortedSeats = (int[])seats.Clone();
        int[] sortedStudents = (int[])students.Clone();

        // Sort both seats and students arrays in ascending order
        Array.Sort(sortedSeats);
        Array.Sort(sortedStudents);

        int totalMoves = 0;
        for (int i = 0; i < n; i++)
        {
            // Calculate the absolute difference between corresponding elements
            totalMoves += Math.Abs(sortedSeats[i] - sortedStudents[i]);
        }

        return totalMoves;
    }
}
