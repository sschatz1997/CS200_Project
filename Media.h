//Media.h

#ifndef MEDIA_H
#define MEDIA_H

#include <string>
using namespace std;

class Media{
	public:
		Media();
		void setName(string);
		void setCost(string);
		
		string getName() const;
		string getCost() const;
		
		virtual string print() const = 0;
	
	protected:
		string name;
		string unitCost;
};

#endif
