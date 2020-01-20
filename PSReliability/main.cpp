
#include "PSReliablity.Model.h"
#include "PSReliablity.Kernel.h"




int main()
{
	// // 测试表达式树
	//ExprTree<double> test;

	//std::string input = " ( a + b * c ) + ( ( d * e + f ) * g ) ";
	//std::map<std::string, double*> data;
	//data["a"] = new double(1);
	//data["b"] = new double(2);
	//data["c"] = new double(3);
	//data["d"] = new double(4);
	//data["e"] = new double(5);
	//data["f"] = new double(6);
	//data["g"] = new double(7);
	//std::map<std::string, std::function<double(const double&, const double&)> > ops;
	//ops["+"] = [&](const double& a, const double& b)->double {return a + b; };
	//ops["*"] = [&](const double& a, const double& b)->double {return a * b; };
	//auto comp = [](std::string a, std::string b)->bool {
	//	if (a == "+")
	//	{
	//		if (b == "*")
	//		{
	//			return false;
	//		}
	//		else
	//		{
	//			return true;
	//		}
	//	}
	//	else if(a=="*")
	//	{
	//		return true;
	//	}
	//	else
	//	{
	//		return false;
	//	}
	//};
	//test.AddComp(comp);
	//test.AddData(data);
	//test.AddOperator(ops);
	//std::stringstream ss;
	//ss << input;
	//test.BuildFromInfixExpr(ss);
	//test.PrintToInfixExpr(std::cout);
	//std::cout << "值：" << test.Calcute() << std::endl;
	//std::cout << "正确值：" << 1 + 2 * 3 + (4 * 5 + 6) * 7;


	// 读取文件
	std::ifstream input("input.txt");
	std::ofstream output("output.txt");
	// 计算
	GenerationSystemEvaluate(input, output);
	std::cout << "计算完毕" << std::endl;
	system("pause");
}
