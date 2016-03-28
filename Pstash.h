#ifndef PSTASH_H
#define  PSTASH_H
class pstash
{
	int quantity;
	int next;
	void **storage;
	void inflate(int increase);
public:
	pstash():quantity(0),storage(0),next(0){}
	~pstash();
	int add(void *element);
	void*operator[](int index) const ;
	void *remove(int index);
	int count()const {return next;}

};
#endif