#include <iostream>
#include <filesystem>//c++17支持
#include <string>

using std::cout;
using std::cin;
using std::endl;
using path_ = std::filesystem::path;
namespace fs = std::filesystem;

//判断路径类型并分解路径
int judgePath(path_ p) {
	//如果是常规文件，输出文件大小;
	if (p.empty()) {//路径为空
		cout << "Path " << p << " is empty." << endl;
	}
	else if (fs::is_regular_file(p)) {
		cout << "Path " << p << " is a regular file,its size is:" << fs::file_size(p) << " Bytes." << endl;
	}
	//如果是路径，列出子目录；
	else if (fs::is_directory(p))
	{
		cout << "Path " << p << " is a directory,includes:" << endl;
		for (auto& e : fs::directory_iterator(p)) {
			cout << e.path() << endl;
		}
	}
	//不是文件也不是路径但存在，则为特殊文件；
	else if (fs::exists(p)) {
		cout << "Path " << p << " is a special file." << endl;
	}
	else {
		cout << "Path " << p << " does not exsit." << endl;
	}
	//决定要不要分解路径，按回车确定；
	cout << "Do you want to query path?  ——Press 'Y' to query; Press 'N'to continue; Press any other key to end the program. " << endl;
	char c;
	cin >> c;

	if (c == 'Y' || c == 'y') {
		//输出根名，根路径，相对路径，父路径，文件名，文件名主干，扩展名；
		cout << "root name: " << p.root_name() << endl;
		cout << "root path: " << p.root_path() << endl;
		cout << "relative path: " << p.relative_path() << endl;
		cout << "parent path: " << p.parent_path() << endl;
		cout << "filename: " << p.filename() << endl;
		cout << "stem of filename:" << p.stem() << endl;
		cout << "extension: " << p.extension() << endl;
		cout << endl;
	}
	else if (c == 'N' || c == 'n')
	{
		return 0;
	}
	else {
		std::exit(0);//退出整个程序的执行；
	}
}

int main() {
	path_ p1{ "./hello.txt" };
	path_ p2{ ".\\CheckPath.cpp" };
	path_ p3{ R"(E:\vs2019\MOOC\Unit06)" };

	//输出默认文件分隔符
	cout << "file separator is:" << path_::preferred_separator << endl << endl;

	//判断路径类型并分解
	//judgePath(p1);
	//judgePath(p2);
	//judgePath(p3);

	//测试运算符: append & /= （追加）
	p3.append(R"(CheckPath)");
	p3 /= R"(checkpath.cpp)";
	cout << p3 << endl;

	//测试运算符: concat & += （连接）
	path_ p4{ R"(E:\vs2019\MOOC\Unit06)" };
	p4.concat(R"(CheckPath)");
	p4 += R"(checkpath.cpp)";
	cout << p4 << endl;

	//测试运算符：/ (拼凑路径)
	path_ p5{ "" };
	judgePath(p5);
	p5 = p3 / R"(E:\vs2019)" / R"(MOOC)" / R"(Unit06)";
	cout << p5 << endl;


	//展示磁盘
	path_ p6{ "D:\\" };
	cout << "D::total space" << fs::space(p6).capacity << " Bytes." << endl;
	cout << "D::free space" << fs::space(p6).free << " Bytes." << endl;

	return 0;
}
