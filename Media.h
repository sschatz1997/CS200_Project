//Media.h
#include <string>
#ifndef MEDIA_H
#define MEDIA_H

using namespace std;

class Media{
	public:
		Media();
		void setName(string);
		void setCost(string);
		
		string getName() const;
		string getCost() const;
		
		virtual string toString() const = 0;
	
	protected:
		string name;
		string unitCost;
};

#endif
