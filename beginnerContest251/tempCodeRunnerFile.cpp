  // Select 2 weights.
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 1; j < N; j++)
        {
            int sum{A[i] + A[j]};
            if (sum <= W)
                ++good_int_count;
        }
    }
