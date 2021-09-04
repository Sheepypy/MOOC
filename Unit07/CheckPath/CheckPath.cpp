#include <iostream>
#include <filesystem>//c++17֧��
#include <string>

using std::cout;
using std::cin;
using std::endl;
using path_ = std::filesystem::path;
namespace fs = std::filesystem;

//�ж�·�����Ͳ��ֽ�·��
int judgePath(path_ p) {
	//����ǳ����ļ�������ļ���С;
	if (p.empty()) {//·��Ϊ��
		cout << "Path " << p << " is empty." << endl;
	}
	else if (fs::is_regular_file(p)) {
		cout << "Path " << p << " is a regular file,its size is:" << fs::file_size(p) << " Bytes." << endl;
	}
	//�����·�����г���Ŀ¼��
	else if (fs::is_directory(p))
	{
		cout << "Path " << p << " is a directory,includes:" << endl;
		for (auto& e : fs::directory_iterator(p)) {
			cout << e.path() << endl;
		}
	}
	//�����ļ�Ҳ����·�������ڣ���Ϊ�����ļ���
	else if (fs::exists(p)) {
		cout << "Path " << p << " is a special file." << endl;
	}
	else {
		cout << "Path " << p << " does not exsit." << endl;
	}
	//����Ҫ��Ҫ�ֽ�·�������س�ȷ����
	cout << "Do you want to query path?  ����Press 'Y' to query; Press 'N'to continue; Press any other key to end the program. " << endl;
	char c;
	cin >> c;

	if (c == 'Y' || c == 'y') {
		//�����������·�������·������·�����ļ������ļ������ɣ���չ����
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
		std::exit(0);//�˳����������ִ�У�
	}
}

int main() {
	path_ p1{ "./hello.txt" };
	path_ p2{ ".\\CheckPath.cpp" };
	path_ p3{ R"(E:\vs2019\MOOC\Unit06)" };

	//���Ĭ���ļ��ָ���
	cout << "file separator is:" << path_::preferred_separator << endl << endl;

	//�ж�·�����Ͳ��ֽ�
	//judgePath(p1);
	//judgePath(p2);
	//judgePath(p3);

	//���������: append & /= ��׷�ӣ�
	p3.append(R"(CheckPath)");
	p3 /= R"(checkpath.cpp)";
	cout << p3 << endl;

	//���������: concat & += �����ӣ�
	path_ p4{ R"(E:\vs2019\MOOC\Unit06)" };
	p4.concat(R"(CheckPath)");
	p4 += R"(checkpath.cpp)";
	cout << p4 << endl;

	//�����������/ (ƴ��·��)
	path_ p5{ "" };
	judgePath(p5);
	p5 = p3 / R"(E:\vs2019)" / R"(MOOC)" / R"(Unit06)";
	cout << p5 << endl;


	//չʾ����
	path_ p6{ "D:\\" };
	cout << "D::total space" << fs::space(p6).capacity << " Bytes." << endl;
	cout << "D::free space" << fs::space(p6).free << " Bytes." << endl;

	return 0;
}
