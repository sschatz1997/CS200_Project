//Media.h

#ifndef MEDIA_H
#define MEDIA_H

#include <string>
using namespace std;

class Media{
	public:
		Media();
		void setName(string);
		void setCost(float);
		
		string getName() const;
		float getCost() const;
		
		virtual string print() const = 0;
	
	protected:
		string name;
		float unitCost;
};

#endif