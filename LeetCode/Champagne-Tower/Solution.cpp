    public double ChampagneTower(int poured, int query_row, int query_glass)
    {
        if (query_row == 0) return Math.Min(poured, 1.0);

        double[] prev = new double[101]; // row 0 (2k)
        double[] curr = new double[101]; // row 1 (2k+1)

        prev[0] = poured;
        int row = 0;

        while (row++ < query_row)
        {
            if (row % 2 == 1)
            {
                PropagateToNextRow(row, prev, curr);
            }
            else
            {
                PropagateToNextRow(row, curr, prev);
            }
        }
        var result = query_row % 2 == 1 ? curr[query_glass] : prev[query_glass];
        return Math.Min(result, 1.0);
    }

    public void PropagateToNextRow(int row, double[] a, double[] b)
    {
        for (int i = 0; i < 101; i++)
        {
            b[i] = 0;
        }

        for (int i = 0; i < row; i++)
        {
            if (a[i] > 1.0)
            {
                b[i] += (a[i] - 1) / 2;
                b[i + 1] += (a[i] - 1) / 2;
            }
        }
    }