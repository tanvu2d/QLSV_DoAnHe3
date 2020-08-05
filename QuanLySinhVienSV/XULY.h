﻿#include "doHoa.h" 



NodeSVDK* KhoiTaoNodeSVDK(SinhVienDK x)
{
	NodeSVDK* p = new NodeSVDK;
	if (p == NULL)
	{
		cout << "\nCap phat khong thanh cong";
		return NULL;
	}
	p->data = x;
	p->pNext = NULL;
	return p;
}
void ThemDauSVDK(NodeSVDK*& pHead, NodeSVDK* p)
{

	if (pHead == NULL)
	{
		pHead = p;
	}
	else
	{
		p->pNext = pHead;
		pHead = p;
	}
}




void ThemCuoiSVDK(NodeSVDK*& pHead, NodeSVDK* p)
{

	if (pHead == NULL)
	{
		pHead = p;
	}
	else
	{
		for (NodeSVDK* k = pHead; k != NULL; k = k->pNext)
		{
			if (k->pNext == NULL)
			{
				k->pNext = p;
				break;
			}
		}
	}
}


void XoaDauSVDK(NodeSVDK*& pHead)
{
	if (pHead == NULL)
	{
		return;
	}
	NodeSVDK* k = pHead;
	pHead = pHead->pNext;
	delete k;
}


void XoaCuoiSVDK(NodeSVDK*& pHead)
{
	if (pHead == NULL)
	{
		return;
	}

	for (NodeSVDK* k = pHead; k != NULL; k = k->pNext)
	{
		if (k->pNext->pNext == NULL)
		{
			NodeSVDK* h = k->pNext;
			k->pNext = NULL;
			delete h;
			break;
		}
	}

}



void XuatSVDK(NodeSVDK* pHead)
{
	for (NodeSVDK* k = pHead; k != NULL; k = k->pNext)
	{
		cout << "\n Ma sv : " << k->data.masv;
		cout << "\nTen Sv : " << k->data.diem;

		cout << "--------" << endl;
	}
}


void GiaiPhongSVDK(NodeSVDK*& pHead)
{


	NodeSVDK* k = pHead;
	while (k != NULL)
	{
		pHead = pHead->pNext; // c?p nh?t pHead gi? th?ng ti?p theo
		delete k;
		k = pHead;
	}
}
// node sinh vien
NodeSV* KhoiTaoNode(SinhVien x)
{
	NodeSV* p = new NodeSV;
	if (p == NULL)
	{
		cout << "\nCap phat khong thanh cong";
		return NULL;
	}
	p->data = x;
	p->pNext = NULL;
	return p;
}


void ThemDau(NodeSV*& pHead, NodeSV* p)
{

	if (pHead == NULL)
	{
		pHead = p;
	}
	else
	{
		p->pNext = pHead;
		pHead = p;
	}
}

void ThemCuoi(NodeSV*& pHead, NodeSV* p)
{

	if (pHead == NULL)
	{
		pHead = p;
	}
	else
	{
		for (NodeSV* k = pHead; k != NULL; k = k->pNext)
		{
			if (k->pNext == NULL)
			{
				k->pNext = p;
				break;
			}
		}
	}
}

int SearchMH(DSMonHoc dsMH, string x) {


	for (int i = 0; i < dsMH.n; i++)
	{

		if (dsMH.ds[i]->maMonHoc == x)
			return 1;
	}
	return -1;
}


void Them_NODE_p_Vao_Sau_NODE_q(NodeSV*& pHead, NodeSV* p, NodeSV* q)
{

	for (NodeSV* k = pHead; k != NULL; k = k->pNext)
	{
		if (k->data.mssv == q->data.mssv)
		{


			NodeSV* g = KhoiTaoNode(p->data);
			g->pNext = k->pNext;
			k->pNext = g;
		}
	}
}


void Them_NODE_p_Vao_Truoc_NODE_q(NodeSV*& pHead, NodeSV* p, NodeSV* q)
{
	NodeSV* g = NULL;


	for (NodeSV* k = pHead; k != NULL; k = k->pNext)
	{
		if (k->data.mssv == q->data.mssv)
		{
			NodeSV* h = KhoiTaoNode(p->data);
			h->pNext = k;
			g->pNext = h;
		}
		g = k;
	}
}

void XoaDau(NodeSV*& pHead)
{
	if (pHead == NULL)
	{
		return;
	}
	NodeSV* k = pHead;
	pHead = pHead->pNext;
	delete k;
}


void XoaCuoi(NodeSV*& pHead)
{
	if (pHead == NULL)
	{
		return;
	}

	for (NodeSV* k = pHead; k != NULL; k = k->pNext)
	{
		if (k->pNext->pNext == NULL)
		{
			NodeSV* h = k->pNext;
			k->pNext = NULL;
			delete h;
			break;
		}
	}

}



void Xuat(NodeSV* pHead)
{
	for (NodeSV* k = pHead; k != NULL; k = k->pNext)
	{
		cout << "\n Lop sv : " << k->data.malop;
		cout << "\n Ma sv : " << k->data.mssv;
		cout << "\nho va ten  Sv : " << k->data.ho << " " << k->data.ten;
		cout << "\nPhai sv :" << k->data.phai;
		cout << "\nSo dien thoai sv : " << k->data.sdt;
		cout << "\nNam nhap hoc :" << k->data.namnhaphoc;

		cout << "--------" << endl;

	}
	getch();
}


void GiaiPhong(NodeSV*& pHead)
{


	NodeSV* k = pHead;
	while (k != NULL)
	{
		pHead = pHead->pNext; // c?p nh?t pHead gi? th?ng ti?p theo
		delete k;
		k = pHead;
	}
}

// ham TREE 

int compareSV(SinhVien x, SinhVien y)
{
	return x.mssv.compare(y.mssv);
}
void ThemNodeVaoCay(NodeLopTC*& t, LopTC x)
{

	if (t == NULL)
	{
		NodeLopTC* p = new NodeLopTC;
		p->data = x;
		p->pLeft = NULL;
		p->pRight = NULL;
		t = p;
	}
	else
	{
		if (x.malopTc > t->data.malopTc)
		{
			ThemNodeVaoCay(t->pRight, x);
		}
		else if (x.malopTc < t->data.malopTc)
		{
			ThemNodeVaoCay(t->pLeft, x);
		}
	}
}

// tim kiem node trong cay 
void hieuChinh(NodeLopTC*& t, int  x)
{

	if (t == NULL)
	{
		cout << "cay rong";
	}
	else
	{

		if (x < t->data.malopTc)
		{
			hieuChinh(t->pLeft, x);
		}
		else if (x > t->data.malopTc)
		{
			hieuChinh(t->pRight, x);
		}
		else
		{
			LopTC x;
			cout << "\nNhap ma lop tin chi : ";
			cin >> x.malopTc;
			fflush(stdin);
			cout << "\nNhap ma mon hoc : ";
			getline(cin, x.mmh);
			cout << "\nNhap nien khoa: ";
			getline(cin, x.nienkhoa);
			cout << "\nNhap hoc ky : ";
			cin >> x.hocki;
			cout << "\nNhap nhom : ";
			cin >> x.nhom;
			cout << "\nNhap so sinh vien max : ";
			cin >> x.so_svmax;
			cout << "\nNhap so sinh vien min : ";
			cin >> x.so_sv_min;
			t->data = x;
		}
	}

}
void TimKiem(NodeLopTC* t, int  x)
{

	if (t == NULL)
	{
		cout << "\nCay rong";
	}
	else
	{

		if (x < t->data.malopTc)
		{
			TimKiem(t->pLeft, x);
		}
		else if (x > t->data.malopTc)
		{
			TimKiem(t->pRight, x);
		}
		else // <=> t->data == x
		{
			gotoXY(50, 9);
			cout << "\n ma lop tin chi " << t->data.malopTc;
			gotoXY(50, 10);
			cout << "\nMa mon hoc " << t->data.mmh;
			gotoXY(50, 11);
			cout << "\nNien khoa " << t->data.nienkhoa;
			gotoXY(50, 12);
			cout << "\nHoc ky : " << t->data.hocki;
			gotoXY(50, 13);
			cout << "\nNhom : " << t->data.nhom;
			gotoXY(50, 14);
			cout << "\nSinh vien max : " << t->data.so_svmax;
			gotoXY(50, 15);
			cout << "\nSinh vien min :" << t->data.so_sv_min;
			gotoXY(50, 16);
			system("pause");

		}
	}

}

void DiTimNodeTheMang(NodeLopTC*& X, NodeLopTC*& Y)
{

	if (Y->pLeft != NULL)
	{
		DiTimNodeTheMang(X, Y->pLeft);
	}
	else
	{
		X->data = Y->data;
		X = Y;
		Y = Y->pRight;
	}

}


void XoaNode(NodeLopTC*& t, int  data)
{

	if (t == NULL)
	{
		return;
	}
	else
	{

		if (data < t->data.malopTc)
		{
			XoaNode(t->pLeft, data);
		}
		else if (data > t->data.malopTc)
		{
			XoaNode(t->pRight, data);
		}
		else
		{
			NodeLopTC* X = t;

			if (t->pLeft == NULL)
			{

				t = t->pRight;
			}
			else if (t->pRight == NULL)
			{

				t = t->pLeft;
			}
			else
			{

				DiTimNodeTheMang(X, t->pRight);

			}
			delete X;
		}
	}
}

NodeLopTC* getLopTC(NodeLopTC* root, int maLop)
{
	if (root == NULL)
	{
		return NULL;
	}

	if (root->data.malopTc == maLop)
	{
		return root;
	}
	else if (root->data.malopTc > maLop)
	{
		return getLopTC(root->pLeft, maLop);
	}
	else {
		return getLopTC(root->pRight, maLop);
	}
}
void KhoiTaoCay(DSLopTC& t)
{
	t.root = NULL;
	t.soLuong = 0;
}


void MenuSuaLopTC(NodeLopTC* l)
{
	int toadoY = toadoYMain;
	gotoXY(toadoXBox, toadoY++);
	cout << "Chon Thuoc Tinh Can Sua" << endl;
	gotoXY(toadoXBox, toadoY++);
	cout << "1.Ma Mon Hoc: " << l->data.mmh << endl;
	gotoXY(toadoXBox, toadoY++);
	cout << "2.Niem Khoa: " << l->data.nienkhoa << endl;
	gotoXY(toadoXBox, toadoY++);
	cout << "3.Hoc Ki: " << l->data.hocki << endl;
	gotoXY(toadoXBox, toadoY++);
	cout << "4.Nhom: " << l->data.nhom << endl;
	gotoXY(toadoXBox, toadoY++);
	cout << "5.So Sinh Vien Max: " << l->data.so_svmax << endl;
	gotoXY(toadoXBox, toadoY++);
	cout << "6.So Sinh Vien Min: " << l->data.so_sv_min << endl;
	gotoXY(toadoXBox, toadoY++);
	cout << "7.Luu Va Thoat" << endl;
	gotoXY(toadoXBox, toadoY++);
	cout << "8.Thoat" << endl;
	gotoXY(toadoXBox, toadoY);
	cout << "Chon: " << endl;
	gotoXY(toadoXBox + 5, toadoY);
}
void hieuChinhTC(NodeLopTC* t, DSMonHoc dsMH, int malop)
{
	if (t != NULL)
	{
		if (malop > t->data.malopTc)
		{
			return hieuChinhTC(t->pRight, dsMH, malop);
		}
		else if (malop < t->data.malopTc)
		{
			return hieuChinhTC(t->pLeft, dsMH, malop);
		}
		else
		{
			int chon;
			LopTC x = t->data;
			while (true)
			{
				XoaManHinhChinh();
				MenuSuaLopTC(t);
				XuLyNhapSo(chon, toadoXBox + 5);
				XoaManHinhChinh();


				switch (chon)
				{

				case 1:
				{
					int i;
					cin.ignore();
					gotoXY(toadoXBox, toadoYMain);
					cout << "Nhap Ma Mon Hoc Moi:";
					getline(cin, x.mmh);
					i = SearchMH(dsMH, t->data.mmh);
					if (i == -1)
					{
						gotoXY(toadoXBox, toadoYMain);
						cout << "Ma Mon Hoc Chua Ton Tai. Nhap Lai";
						getch();
						return;
					}

					break;
				}

				case 2:
					gotoXY(toadoXBox, toadoYMain);
					cout << "Nhap Nien Khoa Moi:";
					getline(cin, x.nienkhoa);
					break;
				case 3:
					gotoXY(toadoXBox, toadoYMain);
					cout << "Nhap Hoc Ki Moi:";
					cin >> x.hocki;
					break;
				case 4:
					gotoXY(toadoXBox, toadoYMain);
					cout << "Nhap Nhom Moi:";
					cin >> x.nhom;
					break;
				case 5:
					gotoXY(toadoXBox, toadoYMain);
					cout << "Nhap So Sinh Vien Max Moi:";
					cin >> x.so_svmax;
					break;
				case 6:
					gotoXY(toadoXBox, toadoYMain);
					cout << "Nhap So Sinh Vien Min Moi:";
					cin >> x.so_sv_min;
					break;
				case 7:
					t->data = x;
					return;
				case 8:
					return;
				}
			}
		}
	}
}
void NLR(NodeLopTC* t)
{
	if (t != NULL)
	{

		cout << t->data.malopTc << "   ";
		cout << t->data.hocki << "  ";
		cout << t->data.nienkhoa << "  " << endl;
		XuatSVDK(t->data.dssvdk.pHead);
		NLR(t->pLeft);
		NLR(t->pRight);

	}
}
int KiemTraCoLopTinChi(NodeLopTC* t, int data)
{
	if (t != NULL)
	{
		if (t->data.malopTc == data)
		{
			return -1;
		}
		KiemTraCoLopTinChi(t->pLeft, data);
		KiemTraCoLopTinChi(t->pRight, data);
	}
	return 0;
}


// load cay nhi phan lop tin chi
void LoadTC(DSLopTC& dsTC)
{
	ifstream fileIn;
	fileIn.open("inputLopTC.txt", ios_base::in);
	if (fileIn.fail() == true)
	{
		cout << "\nFile khong ton tai. Xin kiem tra lai";
		system("pause");
		//return 0;
	}
	fileIn >> dsTC.soLuong;
	fileIn.ignore();

	for (int i = 0; i < dsTC.soLuong; i++)
	{
		LopTC tc;
		fileIn >> tc.malopTc;
		fileIn.ignore();

		getline(fileIn, tc.mmh, ',');

		getline(fileIn, tc.nienkhoa, ',');

		fileIn >> tc.hocki;
		fileIn.ignore();

		fileIn >> tc.nhom;
		fileIn.ignore();

		fileIn >> tc.so_svmax;
		fileIn.ignore();

		fileIn >> tc.so_sv_min;
		fileIn.ignore();

		fileIn >> tc.dssvdk.soLg;
		fileIn.ignore();
		for (int i = 0; i < tc.dssvdk.soLg; i++)
		{
			SinhVienDK x;

			getline(fileIn, x.masv, ',');
			fileIn >> x.diem;
			fileIn.ignore();
			NodeSVDK* p = KhoiTaoNodeSVDK(x);
			ThemCuoiSVDK(tc.dssvdk.pHead, p);
		}


		ThemNodeVaoCay(dsTC.root, tc);
	}
	fileIn.close();
}

// load danh sach sinh vien 

void LoadSV(DSSV& dsSV)
{
	ifstream fileIn1("inputSV1.txt", ios::in);
	string tenLot;

	for (int i = 0; i < 30; i++)
	{
		SinhVien x;
		getline(fileIn1, x.malop, ',');
		fileIn1 >> x.namnhaphoc;
		fileIn1.ignore();
		getline(fileIn1, x.mssv, ',');
		getline(fileIn1, x.ho, ',');
		getline(fileIn1, x.ten, ',');
		getline(fileIn1, x.phai, ',');
		getline(fileIn1, x.sdt);
		NodeSV* p = KhoiTaoNode(x);
		ThemCuoi(dsSV.pHead, p);
	}

	fileIn1.close();
}



////===============DOC FILE MON HOC=========================
//https://paste.ubuntu.com/p/T3GCyCt8pH

void DocFileMonHoc(DSMonHoc& dsMH)
{
	ifstream filein;
	filein.open("inputMH.txt", ios_base::in);
	if (filein.fail() == true)
	{
		cout << "\nFile khong ton tai. Xin kiem tra lai";
		system("pause");
		//return 0;
	}
	string temp;
	while (filein.eof() != true)
	{
		dsMH.ds[dsMH.n] = new monHoc;

		getline(filein, dsMH.ds[dsMH.n]->maMonHoc, ',');
		getline(filein, dsMH.ds[dsMH.n]->TenMH, ',');
		//getline(filein, temp, ',');
		filein >> dsMH.ds[dsMH.n]->sotclt;
		getline(filein, temp, ','); // lay dau phay o giua 2 so
		filein >> dsMH.ds[dsMH.n]->sotcth;
		filein.ignore();
		dsMH.n++;
	}
	filein.close();
	//ua sao ko xem dc mon hoc luôn
	//sua lai so moi check dc á
	// do d?nh d?ng chu?i sai á nên check b?ng s?
	// tí tui ch?nh l?i file d?nh d?ng xong qua ch?
	// mà 002 là chu?i mà dâu ph?i s? 
	// acssi sai nên ABCD sai á ch? hàm dúng r?i
	// oki 
	/// vay chieu t xem lai 
	// chi?u s?a l?i d?nh d?ng chu?i là xong
}
//==========GHI FILE MON HOC===============


void XuLyNhapSo(int& n)
{
	string x = "";
	char c;
	while (true)
	{
		c = getch();
		if ((c >= 48 && c <= 57))// náº¿u lÃ  sá»‘ thÃ¬
		{
			x.insert(x.begin() + x.length(), c);
			cout << c;
		}
		else if (c == 8 && x.length() > 0)
		{
			x.erase(x.begin() + x.length() - 1);
			cout << "\b";
			cout << " ";
			cout << "\b";
		}
		else if (c == 13 && x.length() > 0)// náº¿u lÃ  phÃ­m enter
		{

			n = atoi(x.c_str());
			return;
		}
	}
}

int ChuyenStringSangSo(string x) {
	int a = 0;
	for (int i = 0; i < x.length(); i++) {
		a = a + (int)(x[i] - '0') * pow(10, x.length() - i - 1);
	}
	return a;
}



bool XetNienKhoa(string NK) {
	string str1, str2;
	str1 = NK.substr(0, 4);
	str2 = NK.substr(5, 9);
	int so1, so2;
	so1 = ChuyenStringSangSo(str1);
	so2 = ChuyenStringSangSo(str2);
	if (so2 - so1 == 1 && so1 <= 2020)
	{
		return true;
	}
	return false;
}


void XuLyNhapNienKhoa(string& InPut)
{
	int lengthMax = 9;

	ShowCur(1);
	int nam1;
	int nam2;
	string stringNam2 = "";
	while (true)
	{
		char c = getch();

		if (c >= 48 && c <= 57 && InPut.length() < lengthMax)
		{


			InPut.insert(InPut.begin() + InPut.length(), c);

			cout << c;

			if (InPut.length() == 4)
			{
				nam1 = ChuyenStringSangSo(InPut);
				nam2 = nam1 + 1;
				stringNam2 = ChuyenSoSangString(nam2);
				InPut.push_back('-');


				InPut = InPut + stringNam2;

				//cout << InPut;
				cout << "-" << stringNam2;
			}

		}
		else if (c == 8 && InPut.length() > 0) //beckspace
		{
			InPut.erase(InPut.begin() + InPut.length() - 1);
			cout << "\b";
			cout << " ";
			cout << "\b";
		}
		else if (c == 27) // esc
		{
			InPut.clear();
			return;
		}
		else if (c == 13 && InPut.length() > 0 && InPut.length() ==9)//enter
		{
			break;
		}
	}


}


///MON HOC



void hoanviMH(monHoc* a, monHoc* b) {
	monHoc* tam = new monHoc;

	tam->maMonHoc = a->maMonHoc;
	tam->TenMH = a->TenMH;
	tam->sotclt = a->sotclt;
	tam->sotcth = a->sotcth;
	//---------
	a->maMonHoc = b->maMonHoc;
	a->TenMH = b->TenMH;
	a->sotclt = b->sotclt;
	a->sotcth = b->sotcth;
	//-----------
	b->maMonHoc = tam->maMonHoc;
	b->TenMH = tam->TenMH;
	b->sotclt = tam->sotclt;
	b->sotcth = tam->sotcth;
	delete tam;
}
void sort(DSMonHoc& dsMH)
{
	for (int i = 0; i < dsMH.n - 1; i++)
	{
		for (int j = i + 1; j < dsMH.n; j++)
		{

			if (dsMH.ds[i]->TenMH > dsMH.ds[j]->TenMH)
			{
				//hoanviMH(ds[i], ds[j]);
//				monHoc temp = dsMH.ds[i];
//				dsMH.ds[i] = dsMH.ds[j];
//				dsMH.ds[j] = temp;
				hoanviMH(dsMH.ds[i], dsMH.ds[j]);
			}
		}
	}
}

void themMonHoc(DSMonHoc& dsMH) {
	ShowCur(1);
	int toadoY = toadoYMain;
	string monHocss = "";
	string tenMHss = "";

	monHoc* p = new monHoc;

	gotoXY(toadoXBox, toadoY);
	cout << "Nhap ma mon hoc: ";
	gotoXY(toadoXBox + 18, toadoY);
	XuLyNhapMa(monHocss);
	p->maMonHoc = monHocss;

	gotoXY(toadoXBox, toadoY++);
	cout << "Nhap ten mon hoc: ";
	gotoXY(toadoXBox + 20, toadoY);
	XuLyNhapMa(tenMHss);
	p->TenMH = tenMHss;

	gotoXY(toadoXBox, toadoY++);
	cout << "Nhap so tin chi ly thuyet: ";
	gotoXY(toadoXBox + 29, toadoY);
	cin >> p->sotclt;
	gotoXY(toadoXBox, toadoY++);
	cout << "Nhap so tin chi thuc hanh: ";
	cin >> p->sotcth;

	//sua
	dsMH.ds[dsMH.n] = new monHoc;
	dsMH.ds[dsMH.n] = p;
	dsMH.n++;

	ShowCur(0);
	GiaoDienThongBao("     Them Thanh Cong");
}

void NhapDSSV(DSMonHoc& dsMH) {
	monHoc mh;


	cout << "Nhap ma mon hoc: ";
	cin.ignore();
	getline(cin, mh.maMonHoc);
	//if (mh.maMonHoc== '') return 0;
	getline(cin, mh.maMonHoc);
	cout << "Nhap ten mon hoc: ";
	getline(cin, mh.TenMH);
	cout << "Nhap stclt: ";
	cin >> mh.sotclt;
	cout << "Nhap stcth: ";
	cin >> mh.sotcth;
	dsMH.ds[dsMH.n] = new monHoc;
	*dsMH.ds[dsMH.n] = mh;
	dsMH.n++;
	//	}
	if (dsMH.n == MAXMH) {
		cout << "Danh sach day!";
	}
}

int InsertOrder(DSMonHoc& dsMH, monHoc mh) {
	int j, k;
	if (dsMH.n == MAXMH) return 0;
	for (j = 0; j < dsMH.n && dsMH.ds[j]->TenMH < mh.TenMH; j++);
	for (k = dsMH.n - 1; k >= j; k--)
		dsMH.ds[k + 1] = dsMH.ds[k];
	dsMH.ds[j] = new monHoc;
	*dsMH.ds[j] = mh;
	dsMH.n++;
	return 1;
}
//
void sapxep(monHoc* ds[], int& nds) {
	for (int i = 0; i < nds - 1; i++) {
		for (int j = i + 1; j < nds; j++) {
			if (ds[i]->TenMH > ds[j]->TenMH) {
				hoanviMH(ds[i], ds[j]);
			}
		}
	}

}
void xuatMonHoc(DSMonHoc dsMH) {
	sort(dsMH);
	//cout << "da xep!";
	for (int i = 0; i < dsMH.n; i++) {
		cout << "\t\t========MON HOC " << i << "========" << endl;
		cout << "Ma mon hoc: " << dsMH.ds[i]->maMonHoc << endl;
		cout << "Ten Mon Hoc: " << dsMH.ds[i]->TenMH << endl;
		cout << "So tin chi ly thuyet: " << dsMH.ds[i]->sotclt << endl;
		cout << "So tin chi thuc hanh: " << dsMH.ds[i]->sotcth << endl;
	}
	/*if (dsMH.ds[i]->maMonHoc == "INTATTT001")
	{
		cout << "co1" ;
	}
	else if (dsMH.ds[i]->maMonHoc == "INTCNTT001")
	{
		cout << "co2" ;
	}
	else if (dsMH.ds[i]->maMonHoc == "INTCNTT002")
	{
		cout << "co3" << endl;
	}*/

	_getch();
}
void xuat(monHoc* ds[], int& nds) {

	for (int i = 0; i < nds; i++) {
		cout << "============moc hoc " << i << "=============";
		cout << "ma mon hoc: " << ds[i]->maMonHoc << endl;
		cout << "ten mon hoc: " << ds[i]->TenMH << endl;
	}
}

void LoadMH(DSMonHoc& dsMH) {
	ifstream filein;
	string temp;
	filein.open("inputMH.txt", ios_base::in);
	if (filein.fail() == true)
	{
		cout << "\nFile khong ton tai. Xin kiem tra lai";
		system("pause");
		//return 0;
	}
	filein >> dsMH.n;
	filein.ignore();
	while (filein.eof() != true)
	{
		dsMH.ds[dsMH.n] = new monHoc;
		getline(filein, dsMH.ds[dsMH.n]->maMonHoc, ',');
		getline(filein, dsMH.ds[dsMH.n]->TenMH, ',');
		filein >> dsMH.ds[dsMH.n]->sotclt;
		getline(filein, temp, ',');
		filein >> dsMH.ds[dsMH.n]->sotcth;
		filein.ignore();
		dsMH.n++;
	}
	filein.close();
}



///XOA MON HOC
int ktMonHoc(string a, DSMonHoc dsMH)
{
	for (int i = 0; i < dsMH.n; i++)
	{
		//kt ma vt a ton tai
		if (dsMH.ds[i]->maMonHoc == a)
		{
			return i;
		}
	}
	return -1;
}
void xoaMonHoc(DSMonHoc& dsMH)
{
	string a;
	cout << "Nhap ma mon hoc can xoa "; cin >> a;
	DinhDangChuoi(a);
	//=======================
	int mh = ktMonHoc(a, dsMH);
	//======== xoa ========
	//d?i
	if (mh < 0)
	{
		cout << "Mon hoc khong ton tai!" << endl;
		system("pause");
	}
	else
	{
		for (int i = mh; i < dsMH.n - 1; i++)
		{
			dsMH.ds[i]->maMonHoc = dsMH.ds[i + 1]->maMonHoc;
			dsMH.ds[i]->TenMH = dsMH.ds[i + 1]->TenMH;
			dsMH.ds[i]->sotclt = dsMH.ds[i + 1]->sotclt;
			dsMH.ds[i]->sotcth = dsMH.ds[i + 1]->sotcth;
		}
		//gi?m sl
		monHoc* tam = dsMH.ds[dsMH.n - 1];
		dsMH.n--;
		cout << "Da xoa thanh cong !" << endl;
		system("pause");
	}
}

void chinhsuaMH(DSMonHoc& dsMH) {
	string a;
	cout << "Nhap ma mon hoc can hieu chinh: "; cin >> a;
	DinhDangChuoi(a);
	//=======================
	int mh = ktMonHoc(a, dsMH);
	//======== xoa ========
	//d?i
	if (mh < 0)
	{
		cout << "Mon hoc khong ton tai!" << endl;
		system("pause");
	}
	else {
		cin.ignore();
		cout << "Nhap ten mon hoc hieu chinh: ";
		getline(cin, dsMH.ds[mh]->TenMH);
		DinhDangChuoi(dsMH.ds[mh]->TenMH);
		cout << "Nhap so tin chi ly thuyet hieu chinh: ";
		cin >> dsMH.ds[mh]->sotclt;
		cout << "Nhap so tin chi thuc hanh hieu chinh: ";
		cin >> dsMH.ds[mh]->sotcth;
		cout << "===================" << endl;
		cout << "Da thay doi thong tin vat tu !" << endl;
		system("pause");
	}

}


bool CheckTrungLopTinChi(NodeLopTC* t, string nienKhoa, int hocKi, int nhom, string maMH )
{
	if (t == NULL)
	{

		return false;
	}
	else
	{
		if (t->data.mmh == maMH && t->data.hocki == hocKi && t->data.nhom == nhom && t->data.nienkhoa == nienKhoa)
		{
			GiaoDienThongBao("Du Lieu Lop Da Ton Tai");
			
			return true ;
		}
		return  CheckTrungLopTinChi(t->pLeft, nienKhoa, hocKi, nhom, maMH);
		return  CheckTrungLopTinChi(t->pRight, nienKhoa, hocKi, nhom, maMH);
	}
}


void loadIdLopTC(int a[], int& n)
{
	ifstream fileIn;
	fileIn.open("IDLopTC.txt", ios_base::in);
	if (fileIn.fail() == true)
	{
		cout << "\nFile khong ton tai. Xin kiem tra lai";
		system("pause");
		//return 0;
	}
	fileIn >> n;
	fileIn.ignore();
	for (int i = 0; i < n; i++)
	{
		fileIn >> a[i];

	}
	fileIn.close();
}