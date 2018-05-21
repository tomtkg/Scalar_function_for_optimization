//Written by Tomoaki Takagi
//The University of Electro-Communications
//1 - 5 - 1 Chofugaoka, Chofu, Tokyo, 182 - 8585 Japan
//Master's Course, graduate student

#include <vector>
#include <iostream>

using namespace std;

int main() {
	int c = 100;						//number of weight vector
	int k = 50;							//using weight vector number
	int	num = 2;						//number of objectives
	vector <double> w = { 1.0,1.0 };	//reference point
	vector <double> z = { 0.0,0.0 };	//idealpoint
	vector <int> array(num);			//weight vector ratio
	vector <double> namda(num);			//Normalized weight vector ratio
	vector <double> f(num);				//solution position
	for (int i = 1; i <= 100; i++) {
		f[0] = i*0.01;
		for (double j = 1; j <= 100; j++) {
			f[1] = j*0.01;
			array[0] = c - k;
			array[1] = k;
			namda[0] = (double)array[0] / c;
			namda[1] = (double)array[1] / c;

			double max_fun = -1.0e+30;
			for (int n = 0; n < num; n++) {
				double diff = fabs(f[n] - z[n]);
				double feval;
				if (namda[n] == 0)
					feval = 0.00001*diff;
				else
					feval = diff*namda[n];
				if (feval > max_fun) max_fun = feval;
			}

			cout << f[0] << " " << f[1] << " " << max_fun << endl;
		}
	}
}