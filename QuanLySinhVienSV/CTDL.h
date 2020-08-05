#include<iostream>
#include<fstream>
#include<Windows.h>
#include<time.h>
#include<conio.h>
#include<string>
#include<string.h>
#include<iomanip>


#pragma warning(disable : 4996)
using namespace std;
#define MAXMH 300
#define SoLuongID 9000

int pointer = 7; // con tro dieu khien menu main
int toadoXBox = 15;
int toadoYBox = 9;
int toadoYMain = 10;
/// danh sach sinh vien : ds lien ket don  .v 
struct SinhVien {
	string mssv; 	//ma sinh vien 
	string ho; 	//ho sinh vien
	string ten;	//ten sinh vien
	string phai; 	// gioi tinh
	string sdt; 	// so dien thoai
	string malop;
	int namnhaphoc;
};
struct NodeSV {
	SinhVien data;
	NodeSV* pNext;
};
typedef NodeSV* PTRSV;
struct DSSV {
	NodeSV* pHead = NULL;
	int solg = 0;
};


// Danh sach dang ki (Danh sach lien ket don)
struct SinhVienDK {
	string masv;
	float diem;
};

struct NodeSVDK
{
	SinhVienDK data;
	struct NodeSVDK* pNext;
};

struct DSSVDK {
	NodeSVDK* pHead = NULL;
	int soLg = 0;
};
// danh sach mon hoc  1 mang con tro 300 mon 

struct monHoc {
	string maMonHoc;
	string TenMH;
	float sotclt;
	float sotcth;
};


struct DSMonHoc {
	int n = 0;
	monHoc* ds[MAXMH];
};

// danh sach lop tin chi theo cay nhi phan 

struct LopTC {
	int  malopTc; 		//ma lop
	string mmh;		//ma mon hoc
	string nienkhoa;		// nien khoa
	int hocki;		// hoc ki
	int nhom;			//nhom
	int so_svmax;
	int so_sv_min;
	DSSVDK dssvdk;
	//	PTRDK DSSVDK = NULL; // con tro tro den danh sach sv dang ki lop tin chi 
};
struct NodeLopTC {
	LopTC data;
	NodeLopTC* pLeft;
	NodeLopTC* pRight;
};
//typedef struct NodeLopTC NODE;
//typedef NODE* TREE;

struct DSLopTC {
	NodeLopTC* root = NULL;
	int soLuong = 0;
};

