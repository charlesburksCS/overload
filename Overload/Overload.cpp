#include <iostream>
using namespace std;


/*charles burks lab assignment 10/10/23 cis216 Object Overloading*/

class dist {
private:
	int kMeters;
	int mMeters;
	void simplify();

public:
	dist(int k = 0, int m = 0) :kMeters(k), mMeters(m) { }
	void setDist(int k, int m) {
		kMeters = k;
		mMeters = m;
	}

	void print(); int getKmeters() const
	{
		return kMeters;
	}
	int getMmeters() const
	{
		return mMeters;
	}


	// as a friend func



	friend bool operator < (const dist& k1, const dist& m2);
	friend bool operator > (const dist& k1, const dist& m2);
	friend bool operator <= (const dist& k1, const dist& m2);
	friend bool operator >= (const dist& k1, const dist& m2);
	friend bool operator == (const dist& k1, const dist& m2);
	friend bool operator != (const dist& k1, const dist& m2);
};


// as a member func 



//bool operator < (const dist& otherDist) const;
//bool operator > (const dist& otherDist) const;
// bool operator <= (const dist& otherDist) const;
// bool operator >= (const dist& otherDist) const;
//bool operator == (const dist& otherDist) const;
//bool operator != (const dist& otherDist) const;



  // friend dist operators



bool operator < (const dist& m1, const dist& m2) {
	if (m1.kMeters < m2.kMeters)
		return true;
	else if (m1.kMeters == m2.kMeters && m1.mMeters < m2.mMeters)
		return true;
	else
		return false;
}

bool operator > (const dist& m1, const dist& m2) {
	if (m1.kMeters > m2.kMeters)
		return true;
	else if (m1.kMeters == m2.kMeters && m1.mMeters > m2.mMeters)
		return true;
	else
		return false;
}

bool operator <= (const dist& m1, const dist& m2) {
	if (m1.kMeters <= m2.kMeters)
		return true;
	else if (m1.kMeters == m2.kMeters && m1.mMeters >= m2.mMeters)
		return true;
	else
		return false;
}

bool operator >= (const dist& m1, const dist& m2) {
	if (m1.kMeters >= m2.kMeters)
		return true;
	else if (m1.kMeters == m2.kMeters && m1.mMeters >= m2.mMeters)
		return true;
	else
		return false;
}

bool operator == (const dist& m1, const dist& m2) {
	if (m1.kMeters == m2.kMeters && m1.mMeters == m2.mMeters)
		return true;
	else
		return false;


	// member operators

	  //bool dist::operator < (const dist& otherDist) const{
	   // if (kMeters < otherDist.kMeters)  return true; 
	   // else if (kMeters == otherDist.kMeters && mMeters
	  // < otherDist.mMeters) 
	  // return true; 
	  //else  return false;

	  // bool dist::operator > (const dist& otherDist) const{ if
	  //  (kMeters > otherDist.kMeters) return true; 
	  //  else if (kMeters == otherDist.kMeters && mMeters > otherDist.mMeters)
	  // return true; else return false;

	  //  bool measure::operator <= (const measure& otherMeasure) const
	  //  { if (kMeters <= otherMeasure.kMeters) return true;
	  //  else if (cMeters == otherDist.kMeters && mMeters <= otherDist.mMeters)
	  //  return true; return false;

	  //  bool dist::operator >= (const measure& otherDist) const
	  // { if (kMeters >= otherDist.kMeters) return true;
	  // else if (kMeters == otherDist.kMeters && mMeters >= otherDist.mMeters) 
	  // return true; } void dist::simplify(){ }
	  //  mMeters = 10* kMeters + mMeters; kMeters = mMeters / 10; mMeters = mMeters % 10;
	  // int main() { dist m1( 10, 55); measure m2( 14, 43);
	  //  string result = (m1 > m2) ? "true" : "false"; cout << "m1 > m2 is "
	  // << result << endl; result = (m1 < m2) ? "true" : "false"; cout << "m1 < m2 is "
	  // << result << endl; = result (m1 >= m2)? "true" : "false"; cout << "m1 >= m2 is ".
	  // << result << endl; result = (m1 <= m2) ? "true" : "false"; cout << "m1 <= m2 is "
	  //  result << endl; == result = (m1 m2) ? "true" : "false"; cout << "m1 == m2 is"
	  //  << result << endl; result == (m1 != m2) ? "true" : "false"; 
	//cout << "m1 != m2 is"
	  //  << result << endl; return 0; }

};


bool operator != (const dist& m1, const dist& m2) {
	if (m1.kMeters != m2.kMeters && m1.mMeters != m2.mMeters)
		return true;
	else
		return false;
}












void dist::print() {
	cout << kMeters << " kilometers and " << mMeters << "millimeters" << endl;
}




void dist::simplify() {
	mMeters = 10 *
		kMeters + mMeters; kMeters = mMeters / 10;
	mMeters = mMeters % 10;
}



int main() {
	dist m1(10, 55);
	dist m2(14, 43);

	string result = (m1 > m2) ? "true" : "false";


	cout << "m1 > m2 is " << result << endl;

	result = (m1 < m2) ? "true" : "false";
	cout << "m1 < m2 is " << result << endl;
	result = (m1 >= m2) ? "true" : "false";
	cout << "m1 >= m2 is " << result << endl;
	result = (m1 <= m2) ? "true" : "false";
	cout << "m1 <= m2 is " << result << endl;
	result = (m1 == m2) ? "true" : "false";
	cout << "m1 == m2 is " << result << endl;
	result = (m1 != m2) ? "true" : "false";
	cout << "m1 != m2 is " << result << endl;

	return 0;
}