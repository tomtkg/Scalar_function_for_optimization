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
		for (int j = 1; j <= 100; j++) {
			f[1] = j*0.01;
			array[0] = c - k;
			array[1] = k;
			namda[0] = (double)array[0] / c;
			namda[1] = (double)array[1] / c;

			double yd = 0.0;
			for (int n = 0; n < num; n++)
				yd += pow(namda[n], 2);

			for (int n = 0; n < num; n++)
				namda[n] = namda[n] / sqrt(yd);

			vector <double> realA(num);
			vector <double> realB(num);

			for (int n = 0; n<num; n++)
				realA[n] = (w[n] - f[n]);

			double la = 0.0;
			for (int n = 0; n < num; n++)
				la += realA[n] * namda[n];

			double d1 = fabs(la);

			for (int n = 0; n < num; n++)
				realB[n] = ((w[n] - f[n]) - d1*namda[n]);

			double lb = 0.0;
			for (int n = 0; n < num; n++)
				lb += pow(realB[n], 2);

			double d2 = sqrt(lb);

			double max_fun = d1 - 5 * d2;

			cout << f[0] << " " << f[1] << " " << max_fun << endl;
		}
	}
}