#include "File.h"
#include "Image.h"
#include "Text.h"
#include "Folder.h"
#include <memory>
using namespace std;
int main()
{
	shared_ptr<File> f1 = make_shared<Text>("text1");
	shared_ptr<File> f2 = make_shared<Text>("text2");
	f1->View();
	f2->View();

	shared_ptr<File> f3 = make_shared<Image>("image1");
	shared_ptr<File> f4 = make_shared<Image>("image2");
	f3->View();
	f4->View();

	
	shared_ptr<File> folder1 = make_shared<Folder>("folder1");
	shared_ptr<File> folder2 = make_shared<Folder>("folder2");
	shared_ptr<File> folder = make_shared<Folder>("folder");

	folder->Add(folder1);
	folder->Add(folder2);
	folder->View();
	cout << endl;

	folder1->Add(f1);
	folder1->Add(f2);

	folder2->Add(f3);
	folder2->Add(f4);
	folder->View();

}