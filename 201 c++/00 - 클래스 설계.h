class JYP {
public:
	string idol;
	int member_count;
	string position;
private :
	JYP();
	JYP(string idol2, int member_count2);
	void concert();
};

class straykids : public JYP {
public:
	int avg_age;
private:
	straykids();
	straykids(string song);
};


class twice : public JYP {
public:
	int avg_age;
	int avg_height;
private:
	twice();
	twice(string song, int debut);
};
