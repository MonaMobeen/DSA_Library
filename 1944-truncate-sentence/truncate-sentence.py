class Solution:
    def truncateSentence(self, s: str, k: int) -> str:
        """
        Truncates a sentence to include only the first k words.

        Args:
            s: The input sentence.
            k: The number of words to keep.

        Returns:
            The truncated sentence.
        """

        words = s.split()  # Split sentence into words
        return " ".join(words[:k])  # Join first k words with spaces
