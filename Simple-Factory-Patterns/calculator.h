

class Operation
{
public:
	double Num1;
	double Num2;
	double result;
	void setNum(double& num1,double& num2)
	{
		Num1 = num1;
		Num2 = num2;
	}

	virtual void getResult() {};
};

class Add : public Operation
{
	void getResult()
	{
		result = Num1 + Num2;
	}
};

class Sub : public Operation
{
	void getResult()
	{
		result = Num1 - Num2;
	}
};

class Multi : public Operation
{
	void getResult()
	{
		result = Num1 * Num2;
	}
};


class Div : public Operation
{
	void getResult()
	{
		try
		{
			result = Num1 / Num2;
		}
		catch (...)
		{
			throw "Invalid input!";
		}
	}
};


class OperationFactory
{
public:
	Operation* op(char& o)
	{
		Operation* operation;
		switch (o)
		{
		case '+':
			operation = new Add();
			break;
		case '-':
			operation = new Sub();
			break;
		case '*':
			operation = new Multi();
			break;
		case '/':
			operation = new Div();
			break;
		default:
			throw "The operation is invalid!";
			break;
		}
		return operation;
	}
};
