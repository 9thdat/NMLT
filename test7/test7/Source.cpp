void inputMatrix(int a[100][100], int& n, int& m)
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
}
int findRow(int a[100][100], int n, int m)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 1)
                count++;
        }
        if (count == m)
            return i + 1;
    }
}