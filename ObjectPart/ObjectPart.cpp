// ObjectPart.cpp : Defines the entry point for the console application.
//

#include <iostream>

class Part //define class
{
private:
	int modelNumber; // ID number of widget
	int partNumber; // ID number of widget part
	double cost; // cost of part

public:
	void setPart(int modelNumer_, int partNumber_, double cost_) // set data
	{
		modelNumber = modelNumer_;
		partNumber = partNumber_;
		cost = cost_;
	}
	void showPart()
	{
		std::cout << "Model " << modelNumber << std::endl;
		std::cout << "Part " << partNumber << std::endl;
		std::cout << "Cost " << cost << std::endl;
	}
};


int main()
{
	Part Part1; //defining object
				//of class part
	Part1.setPart(6244, 373, 217.55); // call member function
	Part1.showPart(); // call member function


	system("pause");
    return 0;
}

