void horizontal_invert( int a[][100],int n, int m){

    //###INSERT CODE HERE -
	int t;
	for (int i = 0; i <=n/2 ; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int t = a[i][j];
			a[i][j] = a[n - i - 1][j];
			a[n - i - 1][j] = t;
		}
	}


}
void input(int a[][100], int n, int m) {

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}
}
void output(int a[][100], int n, int m) {

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout<< a[i][j]<<" ";
		}
		cout << endl;
	}
}
