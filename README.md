# MSA
Multiple Sequence Alignment

The provided code implements the Needleman-Wunsch algorithm, which is a classic algorithm for multiple sequence alignment. Multiple sequence alignment is the task of aligning multiple biological sequences (such as DNA or protein sequences) to identify regions of similarity. The algorithm calculates an alignment score that reflects the degree of similarity between the sequences.

The code takes a vector of strings seqs, representing the input sequences, and computes the alignment score using the Needleman-Wunsch algorithm. The alignment score is a measure of how well the sequences align to each other, with higher scores indicating higher similarity.

The code demonstrates the basic functionality of the Needleman-Wunsch algorithm by aligning the sequences "AGTACG", "ATGAC", and "AGTCG". It outputs the alignment score to the console.

Keep in mind that this code only calculates the alignment score and does not provide the actual alignment itself. To obtain the alignment, additional code is needed to backtrack through the scoring matrix and trace the optimal alignment path.
