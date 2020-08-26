#include "XULY.h"

//  cau a  
void GiaoDienXOAMonHoc(int toadoX, int toadoY, int n)
{
	int chieucao = 3 + 2 * n;
	//int chieucao = 3 + 2 * n;

	int chieudai = 40;

	int toadoX1 = toadoX + 70;
	int toadoY1 = toadoY + chieucao + 2;
	// gach ngang tren cung
	for (int i = toadoX; i <= chieudai + toadoX; i++)
	{
		gotoXY(i, toadoY);
		if (i == toadoX)
			cout << (char)218;
		else if (i == chieudai + toadoX)
			cout << (char)191;
		else
			cout << (char)196;
	}
	// gach ngang duoi cung
	for (int i = toadoX; i <= chieudai + toadoX; i++)
	{
		gotoXY(i, chieucao + toadoY);
		if (i == toadoX)
			cout << (char)192;
		else if (i == chieudai + toadoX)
			cout << (char)217;
		else
			cout << char(196);
	}
	//
	for (int i = toadoY + 1; i < chieucao + toadoY; i++)
	{
		gotoXY(toadoX, i);
		cout << (char)179;
	}
	for (int i = toadoY + 1; i < chieucao + toadoY; i++)
	{
		gotoXY(chieudai + toadoX, i);
		cout << (char)179;
	}

	// gach ngang ben trong
	for (int j = 3; j < chieucao; j = j + 2)
	{
		for (int i = toadoX; i <= chieudai + toadoX; i++)
		{
			gotoXY(i, toadoY + j);
			if (i == toadoX)
				cout << (char)195;
			else if (i == chieudai + toadoX)
				cout << (char)180;
			else if (i == toadoX + 40)
				cout << (char)197;
			else
				cout << (char)196;
		}
	}
	///  bang2


	//gotoXY(toadoX + 4, toadoY + 1);
	//cout << CanDeuChuoi("NHAP MA MON HOC CAN XOA", 10);
}
void GiaoDienInDSLop(int toadoX, int toadoY, int n)
{
	int chieucao = 3 + 2 * n;
	int chieudai = 115;
	for (int i = toadoX; i <= chieudai + toadoX; i++)
	{
		gotoXY(i, toadoY);
		if (i == toadoX)
			cout << (char)218;
		else if (i == chieudai + toadoX)
			cout << (char)191;
		else
			cout << (char)196;
	}
	for (int i = toadoX; i <= chieudai + toadoX; i++)
	{
		gotoXY(i, chieucao + toadoY);
		if (i == toadoX)
			cout << (char)192;
		else if (i == chieudai + toadoX)
			cout << (char)217;
		else
			cout << char(196);
	}
	for (int i = toadoY + 1; i < chieucao + toadoY; i++)
	{
		gotoXY(toadoX, i);
		cout << (char)179;
	}
	for (int i = toadoY + 1; i < chieucao + toadoY; i++)
	{
		gotoXY(chieudai + toadoX, i);
		cout << (char)179;
	}


	// gach xuong
	for (int i = toadoX + 1; i < chieudai + toadoX; i++)
	{
		if (i == toadoX + 10 || i == toadoX + 30 || i == toadoX + 50 || i == toadoX + 80 || i == toadoX + 85 || i == toadoX + 100)
		{
			for (int j = toadoY; j < chieucao + toadoY + 1; j++)
			{
				gotoXY(i, j);
				if (j == toadoY)
					cout << char(194);
				else if (j == chieucao + toadoY)
					cout << char(193);
				else
					cout << (char)179;
			}
		}
	}


	// gach ngang
	for (int j = 3; j < chieucao; j = j + 2)
	{
		for (int i = toadoX; i <= chieudai + toadoX; i++)
		{
			gotoXY(i, toadoY + j);
			if (i == toadoX)
				cout << (char)195;
			else if (i == chieudai + toadoX)
				cout << (char)180;
			else if (i == toadoX + 10 || i == toadoX + 30 || i == toadoX + 50 || i == toadoX + 80 || i == toadoX + 85 || i == toadoX + 100)
				cout << (char)197;
			else
				cout << (char)196;
		}
	}

	gotoXY(toadoX + 1, toadoY + 1);
	cout << CanDeuChuoi("Ma Lop TC", 9);
	gotoXY(toadoX + 11, toadoY + 1);
	cout << CanDeuChuoi("Ma Lop", 19);
	gotoXY(toadoX + 31, toadoY + 1);
	cout << CanDeuChuoi("Ma SV", 19);
	gotoXY(toadoX + 51, toadoY + 1);
	cout << CanDeuChuoi("Ho Ten", 29);
	gotoXY(toadoX + 81, toadoY + 1);
	cout << CanDeuChuoi("Phai", 4);
	gotoXY(toadoX + 86, toadoY + 1);
	cout << CanDeuChuoi("SDT", 14);
	gotoXY(toadoX + 101, toadoY + 1);
	cout << CanDeuChuoi("Nam nhap hoc", 14);
}
void GiaoDienNHAPLTC(int toadoX, int toadoY, int n)
{
	int chieucao = 3 + 2 * n;
	int chieudai = 115;
	for (int i = toadoX; i <= chieudai + toadoX; i++)
	{
		gotoXY(i, toadoY);
		if (i == toadoX)
			cout << (char)218;
		else if (i == chieudai + toadoX)
			cout << (char)191;
		else
			cout << (char)196;
	}
	for (int i = toadoX; i <= chieudai + toadoX; i++)
	{
		gotoXY(i, chieucao + toadoY);
		if (i == toadoX)
			cout << (char)192;
		else if (i == chieudai + toadoX)
			cout << (char)217;
		else
			cout << char(196);
	}
	for (int i = toadoY + 1; i < chieucao + toadoY; i++)
	{
		gotoXY(toadoX, i);
		cout << (char)179;
	}
	for (int i = toadoY + 1; i < chieucao + toadoY; i++)
	{
		gotoXY(chieudai + toadoX, i);
		cout << (char)179;
	}


	// gach xuong
	for (int i = toadoX + 1; i < chieudai + toadoX; i++)
	{
		if (i == toadoX + 10 || i == toadoX + 30 || i == toadoX + 50 || i == toadoX + 80 || i == toadoX + 85 || i == toadoX + 100)
		{
			for (int j = toadoY; j < chieucao + toadoY + 1; j++)
			{
				gotoXY(i, j);
				if (j == toadoY)
					cout << char(194);
				else if (j == chieucao + toadoY)
					cout << char(193);
				else
					cout << (char)179;
			}
		}
	}


	// gach ngang
	for (int j = 3; j < chieucao; j = j + 2)
	{
		for (int i = toadoX; i <= chieudai + toadoX; i++)
		{
			gotoXY(i, toadoY + j);
			if (i == toadoX)
				cout << (char)195;
			else if (i == chieudai + toadoX)
				cout << (char)180;
			else if (i == toadoX + 10 || i == toadoX + 30 || i == toadoX + 50 || i == toadoX + 80 || i == toadoX + 85 || i == toadoX + 100)
				cout << (char)197;
			else
				cout << (char)196;
		}
	}
	textcolor(11);

	gotoXY(toadoX + 1, toadoY + 1);
	cout << CanDeuChuoi("Ma Lop TC", 9);
	gotoXY(toadoX + 11, toadoY + 1);
	cout << CanDeuChuoi("Ma Mon Hoc", 19);
	gotoXY(toadoX + 31, toadoY + 1);
	cout << CanDeuChuoi("Nien Khoa", 19);
	gotoXY(toadoX + 51, toadoY + 1);
	cout << CanDeuChuoi("Hoc ki", 29);
	gotoXY(toadoX + 81, toadoY + 1);
	cout << CanDeuChuoi("Nhom", 4);
	gotoXY(toadoX + 86, toadoY + 1);
	cout << CanDeuChuoi("SV MAX", 14);
	gotoXY(toadoX + 101, toadoY + 1);
	cout << CanDeuChuoi("SV MIN", 14);
}
void themLopTC(DSLopTC& t, DSMonHoc dsMH , int a[] , int &soLuong)
{
	string maMH;
	string nienKhoa;

	int toadoY = toadoYMain;
	LopTC x;
	gotoXY(toadoXBox, toadoY);
	textcolor(12);
	cout << "Ma lop TC : ";
	gotoXY(toadoXBox + 13, toadoY++);
	
	x.malopTc = a[soLuong-1];
	soLuong--;
	gotoXY(toadoXBox+3, toadoY+2);
	cout << x.malopTc;
	ShowCur(1);
	int i;
	textcolor(15);
	GiaoDienNHAPLTC(toadoXBox, toadoYBox, 1);
	textcolor(15);

		do {
			i = 0;
			maMH = "";
			gotoXY(toadoXBox, toadoY);
			gotoXY(toadoXBox + 15, toadoY + 2);
			cout << "          ";
			gotoXY(toadoXBox + 15, toadoY + 2);
			XuLyNhapMaMon(maMH, 10);
			if (maMH == "0")
			{
				ShowCur(0);
				return;
			}

			i = SearchMH(dsMH, maMH);
			if (i == -1)
			{
				GiaoDienThongBao("Ma Mon Hoc khong ton tai! Nhap lai!");
			}
		} while (i == -1);

		x.mmh = maMH;
		do
		{
			nienKhoa = "";
			gotoXY(toadoXBox + 34, toadoY + 2);
			cout << "          ";
			gotoXY(toadoXBox + 34, toadoY + 2);
			XuLyNhapNienKhoa(nienKhoa);
			if (nienKhoa == "0")
			{
				ShowCur(0);
				return;
			}
			if (!XetNienKhoa(nienKhoa))
			{
				GiaoDienThongBao("Khong duoc mo lop o nien khoa truoc!");
			}

		} while (XetNienKhoa(nienKhoa) == false);
		x.nienkhoa = nienKhoa;
		gotoXY(toadoXBox + 60, toadoY + 2);
		XuLyNhapSoHK(x.hocki, toadoXBox + 17);
		gotoXY(toadoXBox + 82, toadoY + 2);
		XuLyNhapSo(x.nhom, toadoXBox + 17);
		bool check = false;
		CheckTrungLopTinChi(t.root, nienKhoa, x.hocki, x.nhom, maMH, check);
		if (check == true)
		{
			
			return;
		}
		int max;
		do {
			gotoXY(toadoXBox + 92, toadoY + 2);
			cout << "    ";
			gotoXY(toadoXBox + 92, toadoY + 2);

			XuLyNhapSo(max, toadoXBox + 17);
			if (max < 50) {
				GiaoDienThongBao("Khong the mo lop duoi 50 sinh vien!");
			}
		}while(max < 50);
		x.so_svmax = max;
		int min;
		do {
			gotoXY(toadoXBox + 105, toadoY + 2);
			cout << "    ";
			gotoXY(toadoXBox + 105, toadoY + 2);
			XuLyNhapSo(min, toadoXBox + 17);
			if (min > x.so_svmax) {
				GiaoDienThongBao("So sinh vien min khong lon hon So Sinh Vien Max!");
			}
		} while (min > x.so_svmax);
		x.so_sv_min = min;
	
	x.dssvdk.pHead = NULL;

	ThemNodeVaoCay(t.root, x);
	t.soLuong++;
	ShowCur(0);
	GiaoDienThongBao("Them Thanh Cong");


}

void themLopTCa(DSLopTC& t, DSMonHoc dsMH, int a[], int& soLuong) {
	ShowCur(1);
	int toadoY = toadoYMain;
	string nk;
	int hk;
	int i;
	HCNText(toadoXBox + 27, toadoYBox, 55, 7);

	do
	{
		nk = "";
		gotoXY(toadoXBox + 38, toadoYBox + 2);
		textcolor(11);
		cout << "Nhap Nien Khoa: ";
		gotoXY(toadoXBox + 55, toadoYBox + 2);
		cout << "                ";
		gotoXY(toadoXBox + 55, toadoYBox + 2);
		textcolor(12);
		XuLyNhapNienKhoa(nk);
		if (nk == "0")
		{
			ShowCur(0);
			return;
		}
		if (!XetNienKhoa(nk))
		{
			
			GiaoDienThongBao( "Nien khoa be hon nam hien tai ! Nhap lai ");
		}

	} while (XetNienKhoa(nk) == false);
	textcolor(11);
	gotoXY(toadoXBox + 38, toadoYBox + 3);
	cout << "Nhap hoc ki: "; textcolor(12);

	XuLyNhapSoHK(hk, toadoXBox);
	if (nk == "0") {
		return;
	}
	do {
		LopTC x;
		string maMH;
		x.nienkhoa = nk;
		x.hocki = hk;
		//gotoXY(toadoXBox, toadoY);
		textcolor(12);
		//cout << "Ma lop TC : ";
		//gotoXY(toadoXBox + 13, toadoY++);
		x.malopTc = a[soLuong - 1];
		soLuong--;

		XoaManHinhChinh();
		HCNText(toadoXBox, toadoYBox, 25, 7);
		gotoXY(toadoXBox + 3, toadoY);
		cout << "Nien khoa: "; textcolor(12); cout << nk;
		gotoXY(toadoXBox + 3, toadoY + 1);
		textcolor(0xE);
		cout << "Hoc ki: "; textcolor(12); cout << hk;
		gotoXY(toadoXBox + 3, toadoY + 2);  textcolor(0xE);
		cout << "Ma lop: "; textcolor(12); cout << x.malopTc;

		HCNText(toadoXBox + 27, toadoYBox, 55, 12);
		gotoXY(toadoXBox + 42, toadoYBox + 2);
		textcolor(12);
		cout << "NHAP THONG TIN LOP TIN CHI";
		gotoXY(toadoXBox + 35, toadoYBox + 4);
		textcolor(11);
		cout << "Ma mon hoc:";
		gotoXY(toadoXBox + 35, toadoYBox + 5);
		cout << "Nhom: ";
		gotoXY(toadoXBox + 35, toadoYBox + 6);
		cout << "So Sinh Vien Toi Da:";
		gotoXY(toadoXBox + 35, toadoYBox + 7);
		cout << "So Sinh Vien Toi Thieu:";

		ShowCur(1);
		textcolor(0xE);
		do {
			i = 0;
			maMH = "";
			gotoXY(toadoXBox, toadoY);
			//cout << "Nhap Ma Mon Hoc(0:De Thoat):";
			//gotoXY(toadoXBox + 30, toadoY++);
			gotoXY(toadoXBox + 48, toadoYBox + 4);
			cout << "          ";
			gotoXY(toadoXBox + 48, toadoYBox + 4);
			XuLyNhapMaMon(maMH, 10);
			if (maMH == "0")
			{
				ShowCur(0);
				return;
			}

			i = SearchMH(dsMH, maMH);
			if (i == -1)
			{
				GiaoDienThongBao("Ma Mon Hoc khong ton tai! Nhap lai!");
			}
		} while (i == -1);
		int j;
		x.mmh = maMH;
		int nhom;
	VongLap:
		j = 0;
		nhom = 0;
		gotoXY(toadoXBox + 40, toadoYBox + 5);
		cout << "      ";
		gotoXY(toadoXBox + 40, toadoYBox + 5);
		XuLyNhapSo(nhom, toadoXBox + 17);
		bool check = false;
		CheckTrungLopTinChi(t.root, nk, x.hocki, nhom, maMH, check);
				if (check == true)
				{
					//return;
					goto VongLap;
				}
		x.nhom = nhom;
		int max;
		do {
			gotoXY(toadoXBox + 58, toadoYBox + 6);
			cout << "    ";
			gotoXY(toadoXBox + 58, toadoYBox + 6);

			XuLyNhapSo(max, toadoXBox + 17);
			if (max < 50) {
				GiaoDienThongBao("Khong the mo lop duoi 50 sinh vien!");
			}
		} while (max < 50);
		x.so_svmax = max;
		int min;
		do {
			gotoXY(toadoXBox + 58, toadoYBox + 7);
			cout << "    ";
			gotoXY(toadoXBox + 58, toadoYBox + 7);
			XuLyNhapSo(min, toadoXBox + 17);
			if (min > x.so_svmax) {
				GiaoDienThongBao("So sinh vien min khong lon hon So Sinh Vien Max!");
			}
		} while (min > x.so_svmax);
		x.so_sv_min = min;
		x.dssvdk.pHead = NULL;

		ThemNodeVaoCay(t.root, x);
		t.soLuong++;
		

		ShowCur(0);
		GiaoDienThongBao("Them Thanh Cong");


	} while (true);
	ShowCur(0);
}
void XoaLopTC(DSLopTC& t)
{
	/*int x;
	gotoXY(50, 8);
	cout << "Nhap gia tri can xoa: ";
	cin >> x;
	XoaNode(t.root, x);
	t.soLuong--;*/

	ShowCur(1);
	int malop = 0;
	XoaManHinhChinh();
	ShowCur(1);
	HCNText(toadoXBox + 27, toadoYBox, 55, 5);
	gotoXY(toadoXBox + 32, toadoYBox + 2);
	textcolor(11);
	//cout << "Nhap Ma Mon Hoc Can Chinh: ";
	cout << CanDeuChuoi("NHAP MA LOP TIN CHI CAN XOA: ", 10);
	textcolor(15);
	XuLyNhapSo(malop, toadoXBox + 25);
	ShowCur(0);
	if (malop == 0)
	{
		return;
	}

	NodeLopTC* p = NULL;
	p = getLopTC(t.root, malop); // tra ve Null hoặc con trỏ p
	if (p == NULL)
	{
		GiaoDienThongBao("Lop tin chi khong ton tai");
	}
	else
	{
		GiaoDienThongBao("Xoa thanh cong lop ");
		XoaNode(t.root, malop);
		t.soLuong--;
		return;

	}
}



void SuaLopTC(DSLopTC& t, DSMonHoc dsMH)
{
	ShowCur(1);
	int malop = 0;

	XoaManHinhChinh();
	ShowCur(1);
	HCNText(toadoXBox + 27, toadoYBox, 55, 5);
	gotoXY(toadoXBox + 32, toadoYBox + 2);
	textcolor(11);
	cout << CanDeuChuoi("NHAP MA LOP TIN CHI CAN CHINH: ",10);
	textcolor(15);
	XuLyNhapSo(malop, toadoXBox + 25);
	if (malop == 0)
	{
		ShowCur(0);
		return;
	}


	NodeLopTC* p = NULL;
	p = getLopTC(t.root, malop);
	if (p == NULL)
	{
		GiaoDienThongBao("Lop tin chi khong ton tai");
	}
	else
	{
		//HCNText(toadoXBox+40, toadoYBox, 55, 25);
		//LRN
		hieuChinhTC(t.root, dsMH, malop);
	}
}


// cau b 

NodeSV* getSV(DSSV t, string maSV)
{
	for (NodeSV* k = t.pHead; k != NULL; k = k->pNext)
	{
		if (k->data.mssv == maSV)
		{
			return k;
		}
	}

	return NULL;
}



// xuat dssv da dk lop TC 
void XuatSVDKtheoNK(DSSV dsSV, NodeLopTC* t, int toadoX, int toadoY, int hocKi, int nhom, string nienKhoa, string maMH, int& dem)
{
	if (t == NULL)
	{
		return;
	}
	else
	{
		if (t->data.hocki == hocKi && t->data.mmh == maMH && t->data.nhom == nhom && t->data.nienkhoa == nienKhoa)

		{
			for (NodeSVDK* k = t->data.dssvdk.pHead; k != NULL; k = k->pNext)
			{
				NodeSV* temp = getSV(dsSV, k->data.masv);
				if (temp == NULL)
				{
					continue;
				}
			//	cout << dem; dem tăng lên thì số dòng tang len
				gotoXY(toadoX + 1, toadoY + 4 + (dem * 2));
				cout << CanDeuChuoi(ChuyenSoSangString(t->data.malopTc), 9);
				gotoXY(toadoX + 11, toadoY + 4 + (dem * 2));
				cout << CanDeuChuoi(temp->data.malop, 19);
				gotoXY(toadoX + 31, toadoY + 4 + (dem * 2));
				cout << CanDeuChuoi(temp->data.mssv, 19);
				gotoXY(toadoX + 51, toadoY + 4 + (dem * 2));
				cout << CanDeuChuoi(temp->data.ho + " " + temp->data.ten, 29);
				gotoXY(toadoX + 81, toadoY + 4 + (dem * 2));
				cout << CanDeuChuoi(temp->data.phai, 4);
				gotoXY(toadoX + 86, toadoY + 4 + (dem * 2));
				cout << CanDeuChuoi(temp->data.sdt, 14);
				gotoXY(toadoX + 101, toadoY + 4 + (dem * 2));
				cout << CanDeuChuoi(ChuyenSoSangString(temp->data.namnhaphoc), 14);
				dem++;
				temp = NULL;
			}
			//cout << dem;
		}
		XuatSVDKtheoNK(dsSV, t->pLeft, toadoX, toadoY, hocKi, nhom, nienKhoa, maMH, dem);
		XuatSVDKtheoNK(dsSV, t->pRight, toadoX, toadoY, hocKi, nhom, nienKhoa, maMH, dem);
	}
}
void XuatDSSV(DSSV dsSV, DSLopTC& dsLopTC, int toadoX, int toadoY, int hocKi, int nhom, string nienKhoa, string maMH, int& dem)
{
	XoaManHinhChinh();
	XuatSVDKtheoNK(dsSV, dsLopTC.root, toadoX, toadoY, hocKi, nhom, nienKhoa, maMH, dem);


}
void InDSSV(DSSV dsSV, DSLopTC& dslop, DSMonHoc dsMH, int toadoX, int toadoY)
{
	/*int  HK, nhom, i;

	string maMH, nienKhoa;

	int toadoYtemp = toadoYMain;
	ShowCur(1);
	do
	{
		nienKhoa = "";
		gotoXY(toadoXBox, toadoYtemp);
		cout << "Nhap Nien Khoa : ";
		gotoXY(toadoXBox + 17, toadoYtemp);
		XuLyNhapNienKhoa(nienKhoa);
		if (nienKhoa == "0")
		{
			ShowCur(0);
			return;
		}
		if (!XetNienKhoa(nienKhoa))
		{
			gotoXY(toadoXBox, toadoYtemp++);
			cout << "Nhap nien khoa sai ! Nhap lai ";
		}

	} while (XetNienKhoa(nienKhoa) == false);
	gotoXY(toadoXBox, toadoYtemp++);
	cout << nienKhoa;

	gotoXY(toadoXBox, toadoYtemp);
	cout << "Nhap Hoc Ki(0:De Thoat): ";
	gotoXY(toadoXBox + 27, toadoYtemp++);
	XuLyNhapSoHK(HK, toadoXBox + 17);
	if (HK == 0)
	{
		ShowCur(0);
		return;
	}
	gotoXY(toadoXBox, toadoYtemp);
	cout << "Nhap Nhom(0:De Thoat): ";
	gotoXY(toadoXBox + 27, toadoYtemp++);
	XuLyNhapSo(nhom, toadoXBox + 17);
	if (nhom == 0)
	{
		ShowCur(0);
		return;
	}
	do {
		i = 0;
		maMH = "";
		gotoXY(toadoXBox, toadoYtemp);
		cout << "Nhap Ma Mon Hoc(0:De Thoat):";
		gotoXY(toadoXBox + 30, toadoYtemp++);
		XuLyNhapMa(maMH);
		if (maMH == "0")
		{
			ShowCur(0);
			return;
		}

		i = SearchMH(dsMH, maMH);
		if (i == -1)
		{
			gotoXY(toadoXBox, toadoYtemp++);
			cout << "Ma Mon Hoc Chua Ton Tai. Nhap Lai";

		}


	} while (i == -1);*/
	
	int HK, nhom;
	string maMH, nienKhoa;

	int toadoYtemp = toadoYMain;
	ShowCur(1);

	do
	{
		nienKhoa = "";
		HCNText(toadoXBox + 27, toadoYBox, 55, 8);
		gotoXY(toadoXBox + 45, toadoYBox + 1);
		textcolor(12);
		cout << "NHAP THONG TIN";
		textcolor(11);
		gotoXY(toadoXBox + 35, toadoYBox + 2);
		//gotoXY(toadoXBox, toadoYtemp);
		cout << "Nhap Nien Khoa : ";
		gotoXY(toadoXBox + 35, toadoYBox + 3);
		cout << "Nhap Hoc Ki:";
		gotoXY(toadoXBox + 35, toadoYBox + 4);
		cout << "Nhap Nhom: ";
		gotoXY(toadoXBox + 35, toadoYBox + 5);
		cout << "Nhap Ma Mon Hoc: ";
		//gotoXY(toadoXBox + 17, toadoYtemp++);
		textcolor(15);
		gotoXY(toadoXBox + 52, toadoYBox + 2);
		XuLyNhapNienKhoa(nienKhoa);
		if (nienKhoa == "0")
		{
			ShowCur(0);
			return;
		}
		if (!XetNienKhoa(nienKhoa))
		{
			//gotoXY(toadoXBox, toadoYtemp++);
			//cout << "Nhap nien khoa sai ! Nhap lai ";
			gotoXY(toadoXBox + 52, toadoYBox + 2);
			cout << "                ";
			GiaoDienThongBao("Nhap nien khoa sai ! Nhap lai ");

		}

	} while (XetNienKhoa(nienKhoa) == false);

	gotoXY(toadoXBox + 50, toadoYBox + 3);
	XuLyNhapSoHK(HK, toadoXBox);
	if (HK == 0)
	{
		ShowCur(0);
		return;
	}
	gotoXY(toadoXBox + 48, toadoYBox + 4);
	XuLyNhapSo(nhom, toadoXBox + 17);
	if (nhom == 0)
	{
		ShowCur(0);
		return;
	}
	int i;
	string monHocss;
	gotoXY(toadoXBox + 55, toadoYBox + 5);
	do {
		i = 0;
		monHocss = "";
		gotoXY(toadoXBox + 55, toadoYBox + 5);
		cout << "          ";
		gotoXY(toadoXBox + 55, toadoYBox + 5);
		XuLyNhapMaMon(monHocss, 10);
		i = SearchMH(dsMH, monHocss);
		if (i == -1)
		{
			gotoXY(toadoXBox, toadoY + 1);
			GiaoDienThongBao("Ma Mon hoc khong ton tai! Nhap Lai!");

		}
	} while (i == -1);


	maMH = monHocss;
	ShowCur(0);

	int n = 0;
	//XuatDSSV(dsSV, dslop, toadoX, toadoY, HK, nhom, nienKhoa, maMH, n);
	XoaManHinhChinh();
	XuatSVDKtheoNK(dsSV, dslop.root , toadoX, toadoY, HK, nhom, nienKhoa, maMH, n);
	GiaoDienInDSLop(toadoX, toadoY, n);
	getch();
}


void XuatSVDKTest(DSSV dsSV, int toadoX, int toadoY)
{
	XoaManHinhChinh();
	int dem = 0;
	for (NodeSV* k = dsSV.pHead; k != NULL; k = k->pNext)
	{

		gotoXY(toadoX + 11, toadoY + 4 + (dem * 2));
		cout << CanDeuChuoi(k->data.malop, 19);
		gotoXY(toadoX + 31, toadoY + 4 + (dem * 2));
		cout << CanDeuChuoi(k->data.mssv, 19);
		gotoXY(toadoX + 51, toadoY + 4 + (dem * 2));
		cout << CanDeuChuoi(k->data.ho + " " + k->data.ten, 29);
		gotoXY(toadoX + 81, toadoY + 4 + (dem * 2));
		cout << CanDeuChuoi(k->data.phai, 4);
		gotoXY(toadoX + 86, toadoY + 4 + (dem * 2));
		cout << CanDeuChuoi(k->data.sdt, 14);
		dem++;
	}

	getch();

}
//cau
// cau c 
bool checkMaSV(DSSV dsSV, string maSV)
{

	for (NodeSV* k = dsSV.pHead; k != NULL; k = k->pNext)
	{
		if (maSV < k->data.mssv)
		{
			return true;
		}
		if (k->data.mssv == maSV)
		{
			return false;
		}
	}

	return true;
}
int checkMaSVa(DSSV dsSV, string maSV)
{
	for (NodeSV* k = dsSV.pHead; k != NULL; k = k->pNext)
	{
		if (maSV < k->data.mssv)
		{
			return -1;
		}
		if (k->data.mssv == maSV)
		{
			return 1;
		}
	}

	return -1;
}
int checkMaLop(DSSV dsSV, string maLop)
{
	for (NodeSV* k = dsSV.pHead; k != NULL; k = k->pNext)
	{
		if (maLop < k->data.malop)
		{
			return -1;
		}
		if (k->data.malop == maLop)
		{
			return 1;
		}
	}

	return -1;
}




void NhapSVLop(DSSV& dsSV)
{
	ShowCur(1);
	int toadoY = toadoYMain;
	string maLop;
	string ml;
	int k;
	HCNText(toadoXBox + 27, toadoYBox, 55, 5);
	do {
		k = 0;
		ml = "";
		textcolor(11);
		gotoXY(toadoXBox + 40, toadoYBox + 2);
		cout << "Nhap Ma Lop: ";
		gotoXY(toadoXBox + 55, toadoYBox + 2);
		cout << "             ";
		gotoXY(toadoXBox + 55, toadoYBox + 2);

		textcolor(15);
		XuLyNhapMaMon(ml , 15);

		if (ml == "0")
		{
			return;
		}
		k = checkMaLop(dsSV, ml);
		if (k == -1) {
			GiaoDienThongBao("Ma lop khong ton tai!");
		}
	} while (k == -1);
	maLop = ml;
	int i=0;
	while (true)
	{
		SinhVien sv;
		sv.malop = maLop;
		toadoY = toadoYMain;
		XoaManHinhChinh();
		
		HCNText(toadoXBox, toadoYBox, 25, 4);
		gotoXY(toadoXBox + 3, toadoY++);
		cout << "Ma Lop: "; textcolor(12); cout << maLop;
		gotoXY(toadoXBox + 3, toadoY++);
		textcolor(0xE);
		cout << "Nhap Vao SV Thu: "; textcolor(12); cout << i++;
		


		HCNText(toadoXBox + 27, toadoYBox, 55, 12);
		gotoXY(toadoXBox + 42, toadoYBox+2);
		textcolor(12);
		cout << "NHAP THONG TIN SINH VIEN";
		gotoXY(toadoXBox + 35, toadoYBox + 4);
		textcolor(11);
		cout << "Ma Sinh Vien :";
		gotoXY(toadoXBox + 35, toadoYBox + 5);
		cout << "Ho & Ten Lot: "; 
		gotoXY(toadoXBox + 65, toadoYBox + 5);
		cout << "Ten:";
		gotoXY(toadoXBox + 35, toadoYBox + 6);
		cout << "Phai (1:nam 2:nu):";
		gotoXY(toadoXBox + 35, toadoYBox + 7);
		cout << "SDT:";
		gotoXY(toadoXBox + 35, toadoYBox + 8);
		cout << "Nam nhap hoc: ";

		ShowCur(1);
		textcolor(0xE);
		//gotoXY(toadoXBox, toadoY);
		//cout << "Nhap Vao Ma SV(0:De Thoat):";
		//gotoXY(toadoXBox + 27, toadoY++);
		int i;
		string msv;
		do {
			msv = "";
			i = 0;
			textcolor(0xE);

			gotoXY(toadoXBox + 50, toadoYBox + 4);
			cout << "               ";
			gotoXY(toadoXBox + 50, toadoYBox + 4);
			bool check = true;
			//XuLyNhapMaMon(msv, 10);
			XuLyNhapMaSV(msv, 12);
			if (checkMaSVNhapVao(msv)==true)
			{
				return;
			}
			//else if (!checkMaSV(dsSV, sv.mssv))
			i = checkMaSVa(dsSV, msv);
			if (i == 1)
			{
				GiaoDienThongBao("Ma Sinh Vien trung! Nhap lai");
			}
		} while (i == 1);
		sv.mssv = msv;
		int phai = 0;
		//gotoXY(toadoXBox, toadoY++);
		gotoXY(toadoXBox + 50, toadoYBox + 5);
		XuLyNhapten(sv.ho, 15);

		gotoXY(toadoXBox + 70, toadoYBox + 5);
		XuLyNhapMaMon(sv.ten, 6);

		gotoXY(toadoXBox + 55, toadoYBox + 6);
		XuLyNhapSo(phai, toadoXBox + 27);
		if (phai == 1)
		{
			sv.phai = "Nam";
		}
		sv.phai = "Nu";

		gotoXY(toadoXBox + 40, toadoYBox + 7);
		XuLyNhapSDT(sv.sdt);

		gotoXY(toadoXBox + 50, toadoYBox + 8);
		XuLyNhapSo(sv.namnhaphoc);

		//Phan Xu Ly
		NodeSV* p = KhoiTaoNode(sv);
	 	ThemSinhVienTheoThuTu(dsSV, p);
		dsSV.solg++;
	}

	ShowCur(0);

}

void XoaSVLop(DSSV& dsSV)
{
	ShowCur(1);
	string maSV;
	//gotoXY(toadoXBox, toadoYMain);
	//cout << "Nhap Vao Ma SV(0:Thoat):";
	//gotoXY(toadoXBox + 30, toadoYMain);
	//XuLyNhapMa(maSV);
	HCNText(toadoXBox + 27, toadoYBox, 55, 5);


	gotoXY(toadoXBox + 38, toadoYBox + 2);
	textcolor(11);
	cout << "Nhap Ma Sinh Vien: ";
	gotoXY(toadoXBox + 58, toadoYBox + 2);
	textcolor(15);
	XuLyNhapMaMon(maSV, 10);
	ShowCur(0);

	if (maSV == "0")
	{
		return;
	}
	/*else if (checkMaSV(dsSV, maSV))
	{
		GiaoDienThongBao("Ma Sinh Vien Khong Ton Tai");
	}*/
	ShowCur(1);
	do {
		maSV = "";
		int i = 0;
		gotoXY(toadoXBox + 58, toadoYBox + 2);
		cout << "             ";
		gotoXY(toadoXBox + 58, toadoYBox + 2);
		textcolor(15);
		XuLyNhapMaMon(maSV, 12);
		if (checkMaSV(dsSV, maSV))
		{
			GiaoDienThongBao("Ma Sinh Vien Khong Ton Tai");
		}
	} while (checkMaSV(dsSV, maSV));

	if (dsSV.pHead->data.mssv == maSV)
	{
		NodeSV* temp = dsSV.pHead;
		dsSV.pHead = dsSV.pHead->pNext;
		delete temp;
		//GiaoDienThongBao("Xoa Thanh Cong sinh vien");
		//Sleep(3000);
		return;
	}

	NodeSV* temp = dsSV.pHead;
	for (NodeSV* k = dsSV.pHead->pNext; k != NULL; k = k->pNext)
	{
		if (k->data.mssv == maSV)
		{
			temp->pNext = k->pNext;
			delete k;
			dsSV.solg--;
			return;
		}
		temp = k;
	}



}

void MenuSua(SinhVien sv)
{
	HCNText(toadoXBox + 27, toadoYBox, 55, 20);

	int toadoY = toadoYMain+5;
	gotoXY(toadoXBox + 41, toadoYMain+3);
	textcolor(0xE);
	cout << "CHON THUOC TINH CAN CHIN SUA" << endl;
	textcolor(11);
	gotoXY(toadoXBox + 42, toadoY++); textcolor(11);
	cout << "1.Ho: "; textcolor(12); cout << sv.ho << endl;
	gotoXY(toadoXBox + 42, toadoY++); textcolor(11);
	cout << "2.Ten: "; textcolor(12); cout << sv.ten << endl;
	gotoXY(toadoXBox + 42, toadoY++); textcolor(11);
	cout << "3.Phai:"; textcolor(12); cout << sv.phai << endl;
	gotoXY(toadoXBox + 42, toadoY++); textcolor(11);
	cout << "4.SDT: "; textcolor(12); cout << sv.sdt << endl;
	gotoXY(toadoXBox + 42, toadoY++); textcolor(11);
	cout << "5.Nam nhap hoc : "; textcolor(12); cout << sv.namnhaphoc << endl;
	gotoXY(toadoXBox + 42, toadoY++); textcolor(11);
	cout << "6.Luu va Thoat"; textcolor(12); cout << endl;
	gotoXY(toadoXBox + 42, toadoY++); textcolor(11);
	cout << "7.Thoat"; textcolor(12); cout << endl;
	gotoXY(toadoXBox + 42, toadoY); textcolor(11);
	textcolor(224);
	cout << "Chon:";
	textcolor(12);
	gotoXY(toadoXBox + 47, toadoY);
}


void SuaSVLop(DSSV& dsSV)
{
	string maSV;
vonglap:
	maSV = "";
	XoaManHinhChinh();

	ShowCur(1);
	HCNText(toadoXBox + 27, toadoYBox, 55, 5);


	gotoXY(toadoXBox + 35, toadoYBox + 2);
	textcolor(11);
	cout << "Nhap Ma Sinh Vien Can Chinh: ";
	textcolor(15);
	XuLyNhapMaMon(maSV,10);
	if (maSV == "0")
	{
		ShowCur(0);
		return;
	}

	bool kt = false;

	NodeSV* temp = NULL;

	for (NodeSV* k = dsSV.pHead; k != NULL; k = k->pNext)
	{
		if (k->data.mssv == maSV)
		{
			temp = k;
			break;
		}
	}


	if (temp == NULL)
	{
		GiaoDienThongBao("MA SINH VIEN KHONG TON TAI");
		//return;
		goto vonglap;
	}

	int chon = 0;
	SinhVien sv = temp->data;
	while (true)
	{
		XoaManHinhChinh();
		MenuSua(sv);
		XuLyNhapSo(chon, toadoXBox + 5);
		XoaManHinhChinh();
		switch (chon)
		{
		case 1:
			gotoXY(toadoXBox, toadoYMain);
			cout << "Nhap Ho Moi:";
			getline(cin, sv.ho);
			break;
		case 2:
			gotoXY(toadoXBox, toadoYMain);
			cout << "Nhap Ten Moi:";
			getline(cin, sv.ten);
			break;
		case 3:
		{
			gotoXY(toadoXBox, toadoYMain);
			int phai = 0;
			cout << "Nhap Vao Phai Moi (1:nam 2:nu):";
			gotoXY(toadoXBox + 32, toadoYMain);
			XuLyNhapSo(phai, toadoXBox + 32);
			if (phai == 1)
			{
				sv.phai = "Nam";
			}
			sv.phai = "Nu";
			break;
		}

		case 4:
			gotoXY(toadoXBox, toadoYMain);
			cout << "Nhap SDT Moi:";
			getline(cin, sv.sdt);
			break;

		case 5:
			gotoXY(toadoXBox, toadoYMain);
			cout << "Nhap nam nhap hoc";
			cin >> sv.namnhaphoc;
			break;
		case 6:
			temp->data = sv;
			ShowCur(0);
			return;
		case 7:
			ShowCur(0);
			return;
		}
	}
	ShowCur(0);
	return;
}

// cau d

void GiaoDienInDSSVTheoLop(int toadoX, int toadoY, int n)
{
	int chieucao = 3 + 2 * n;
	int chieudai = 115;
	for (int i = toadoX; i <= chieudai + toadoX; i++)
	{
		gotoXY(i, toadoY);
		if (i == toadoX)
			cout << (char)218;
		else if (i == chieudai + toadoX)
			cout << (char)191;
		else
			cout << (char)196;
	}
	for (int i = toadoX; i <= chieudai + toadoX; i++)
	{
		gotoXY(i, chieucao + toadoY);
		if (i == toadoX)
			cout << (char)192;
		else if (i == chieudai + toadoX)
			cout << (char)217;
		else
			cout << char(196);
	}
	for (int i = toadoY + 1; i < chieucao + toadoY; i++)
	{
		gotoXY(toadoX, i);
		cout << (char)179;
	}
	for (int i = toadoY + 1; i < chieucao + toadoY; i++)
	{
		gotoXY(chieudai + toadoX, i);
		cout << (char)179;
	}


	// gach xuong
	for (int i = toadoX + 1; i < chieudai + toadoX; i++)
	{
		if (i == toadoX + 25 || i == toadoX + 50 || i == toadoX + 75 || i == toadoX + 85 || i == toadoX + 100)
		{
			for (int j = toadoY; j < chieucao + toadoY + 1; j++)
			{
				gotoXY(i, j);
				if (j == toadoY)
					cout << char(194);
				else if (j == chieucao + toadoY)
					cout << char(193);
				else
					cout << (char)179;
			}
		}
	}


	// gach ngang
	for (int j = 3; j < chieucao; j = j + 2)
	{
		for (int i = toadoX; i <= chieudai + toadoX; i++)
		{
			gotoXY(i, toadoY + j);
			if (i == toadoX)
				cout << (char)195;
			else if (i == chieudai + toadoX)
				cout << (char)180;
			else if (i == toadoX + 25 || i == toadoX + 50 || i == toadoX + 75 || i == toadoX + 85 || i == toadoX + 100)
				cout << (char)197;
			else
				cout << (char)196;
		}
	}

	gotoXY(toadoX + 1, toadoY + 1);
	cout << CanDeuChuoi("Ma lop", 24);

	gotoXY(toadoX + 26, toadoY + 1);
	cout << CanDeuChuoi("Ma sv", 24);

	gotoXY(toadoX + 51, toadoY + 1);
	cout << CanDeuChuoi("Ho va ten", 24);

	gotoXY(toadoX + 76, toadoY + 1);
	cout << CanDeuChuoi("Phai", 10);
	gotoXY(toadoX + 86, toadoY + 1);
	cout << CanDeuChuoi("SDT", 19);
	gotoXY(toadoX + 101, toadoY + 1);
	cout << CanDeuChuoi("Nam nhap hoc", 14);


}
void SortArr(SinhVien sv[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (sv[i].ten + sv[i].ho < sv[j].ten + sv[j].ho)
			{
				SinhVien temp = sv[i];
				sv[i] = sv[j];
				sv[j] = temp;
			}
		}
	}
}
void XuatDSSV(SinhVien sv[500], int n, int toadoX, int toadoY)
{

	int dem = 0;
	XoaManHinhChinh();
	//SortArr(sv, n);
	for (int i = 0; i < n; i++)
	{
		gotoXY(toadoX + 1, toadoY + 4 + (dem * 2));
		cout << CanDeuChuoi(sv[i].malop, 24);

		gotoXY(toadoX + 26, toadoY + 4 + (dem * 2));
		cout << CanDeuChuoi(sv[i].mssv, 24);

		gotoXY(toadoX + 51, toadoY + 4 + (dem * 2));
		cout << CanDeuChuoi(sv[i].ho + " " + sv[i].ten, 24);

		gotoXY(toadoX + 76, toadoY + 4 + (dem * 2));
		cout << CanDeuChuoi(sv[i].phai, 9);

		gotoXY(toadoX + 86, toadoY + 4 + (dem * 2));
		cout << CanDeuChuoi(sv[i].sdt, 14);

		gotoXY(toadoX + 101, toadoY + 4 + (dem * 2));
		cout << CanDeuChuoi(ChuyenSoSangString(sv[i].namnhaphoc), 14);

		dem++;
	}
	GiaoDienInDSSVTheoLop(toadoX, toadoY, dem);
	getch();
}
void XuatDSSV1Lop(DSSV dsSV, int toadoX, int toadoY)
{
	ShowCur(1);
	string maLop;
	XoaManHinhChinh();
	GiaoDienXOAMonHoc(toadoXBox + 35, toadoYBox, 1);
	gotoXY(toadoXBox + 50, toadoYBox + 1);
	cout << CanDeuChuoi("NHAP MA LOP", 10);
	gotoXY(toadoXBox + 50, toadoYBox + 4);
	ShowCur(1);
	XuLyNhapMaMon(maLop,9);
	ShowCur(0);
	if (maLop == "0")
	{
		return;
	}

	SinhVien sv[500];
	int n = 0;

	for (NodeSV* k = dsSV.pHead; k != NULL; k = k->pNext)
	{
		if (maLop < k->data.malop)
		{
			break;
		}
		if (k->data.malop == maLop)
		{
			sv[n++] = k->data;
		}
	}

	if (n == 0)
	{
		GiaoDienThongBao("MA LOP KHONG TON TAI");
		return;
	}

	XuatDSSV(sv, n, toadoX, toadoY);

}


// cau g 

string stringLuaChon[] = {
	"1.Dang ky lop tin chi            ",
	"2.Huy Lop tin chi da dang ky     ",
	"0.Thoat                     "
};

void MenuLuaChon(int toadoX, int toadoY)
{
	//textcolor(240);;
	int j = toadoY;
	for (int i = 0; i < sizeof(stringLuaChon) / sizeof(*stringLuaChon); i++)
	{
		gotoXY(toadoX, j++);
		cout << stringLuaChon[i];
	}
}

string getMaMonHoc(NodeLopTC* t, int maLopTC)
{
	if (t == NULL)
	{
		return "";
	}
	else
	{
		if (t->data.malopTc == maLopTC)
		{
			return t->data.mmh;
		}
		getMaMonHoc(t->pLeft, maLopTC);
		getMaMonHoc(t->pRight, maLopTC);
	}
}


bool CheckMonHocDaDK(NodeLopTC* t, string maSV, string nienKhoa, int hocKy, string maMH)
{
	if (t == NULL)
	{
		return true;
	}
	else
	{
		if (t->data.nienkhoa == nienKhoa && t->data.hocki == hocKy)
		{
			for (NodeSVDK* k = t->data.dssvdk.pHead; k != NULL; k = k->pNext)
			{
				if (k->data.masv == maSV)
				{
					if (t->data.mmh == maMH)
					{
						return false;
					}
				}
			}
		}
		CheckMonHocDaDK(t->pLeft, maSV, nienKhoa, hocKy, maMH);
		CheckMonHocDaDK(t->pRight, maSV, nienKhoa, hocKy, maMH);
	}

}


bool CheckLopSVDaDK(NodeLopTC* t, string maSV, int maLopTC)
{
	if (t == NULL)
	{
		return true;
	}
	else
	{
		if (t->data.malopTc == maLopTC)
		{
			for (NodeSVDK* k = t->data.dssvdk.pHead; k != NULL; k = k->pNext)
			{
				if (k->data.masv == maSV)
				{
					return false;
				}
			}
		}
		CheckLopSVDaDK(t->pLeft, maSV, maLopTC);
		CheckLopSVDaDK(t->pRight, maSV, maLopTC);

	}
}


void GiaoDienInLopDK(int toadoX, int toadoY, int n, int soLuonglopHuy)
{
	int chieucao = 3 + 2 * n;
	int chieucao1 = 3 + 2 * soLuonglopHuy;
	int chieudai = 100;
	int chieudai1 = 30;

	int toadoX1 = toadoX + 70;
	int toadoY1 = toadoY + chieucao + 2;
	for (int i = toadoX; i <= chieudai + toadoX; i++)
	{
		gotoXY(i, toadoY);
		if (i == toadoX)
			cout << (char)218;
		else if (i == chieudai + toadoX)
			cout << (char)191;
		else
			cout << (char)196;
	}
	for (int i = toadoX; i <= chieudai + toadoX; i++)
	{
		gotoXY(i, chieucao + toadoY);
		if (i == toadoX)
			cout << (char)192;
		else if (i == chieudai + toadoX)
			cout << (char)217;
		else
			cout << char(196);
	}
	for (int i = toadoY + 1; i < chieucao + toadoY; i++)
	{
		gotoXY(toadoX, i);
		cout << (char)179;
	}
	for (int i = toadoY + 1; i < chieucao + toadoY; i++)
	{
		gotoXY(chieudai + toadoX, i);
		cout << (char)179;
	}


	// gach xuong
	for (int i = toadoX + 1; i < chieudai + toadoX; i++)
	{
		if (i == toadoX + 10 || i == toadoX + 30 || i == toadoX + 70 || i == toadoX + 80 || i == toadoX + 90)
		{
			for (int j = toadoY; j < chieucao + toadoY + 1; j++)
			{
				gotoXY(i, j);
				if (j == toadoY)
					cout << char(194);
				else if (j == chieucao + toadoY)
					cout << char(193);
				else
					cout << (char)179;
			}
		}
	}


	// gach ngang
	for (int j = 3; j < chieucao; j = j + 2)
	{
		for (int i = toadoX; i <= chieudai + toadoX; i++)
		{
			gotoXY(i, toadoY + j);
			if (i == toadoX)
				cout << (char)195;
			else if (i == chieudai + toadoX)
				cout << (char)180;
			else if (i == toadoX + 10 || i == toadoX + 30 || i == toadoX + 70 || i == toadoX + 80 || i == toadoX + 90)
				cout << (char)197;
			else
				cout << (char)196;
		}
	}
	///  bang2

	for (int i = toadoX1; i <= chieudai1 + toadoX1; i++)
	{
		gotoXY(i, toadoY1);
		if (i == toadoX1)
			cout << (char)218;
		else if (i == chieudai1 + toadoX1)
			cout << (char)191;
		else
			cout << (char)196;
	}
	for (int i = toadoX1; i <= chieudai1 + toadoX1; i++)
	{
		gotoXY(i, chieucao1 + toadoY1);
		if (i == toadoX1)
			cout << (char)192;
		else if (i == chieudai1 + toadoX1)
			cout << (char)217;
		else
			cout << char(196);
	}
	for (int i = toadoY1 + 1; i < chieucao1 + toadoY1; i++)
	{
		gotoXY(toadoX1, i);
		cout << (char)179;
	}
	for (int i = toadoY1 + 1; i < chieucao1 + toadoY1; i++)
	{
		gotoXY(chieudai1 + toadoX1, i);
		cout << (char)179;
	}


	// gach xuong
	for (int i = toadoX1 + 1; i < chieudai1 + toadoX1; i++)
	{
		if (i == toadoX1 + 10)
		{
			for (int j = toadoY1; j < chieucao1 + toadoY1 + 1; j++)
			{
				gotoXY(i, j);
				if (j == toadoY1)
					cout << char(194);
				else if (j == chieucao1 + toadoY1)
					cout << char(193);
				else
					cout << (char)179;
			}
		}
	}


	// gach ngang
	for (int j = 3; j < chieucao1; j = j + 2)
	{
		for (int i = toadoX1; i <= chieudai1 + toadoX1; i++)
		{
			gotoXY(i, toadoY1 + j);
			if (i == toadoX1)
				cout << (char)195;
			else if (i == chieudai1 + toadoX1)
				cout << (char)180;
			else if (i == toadoX1 + 10)
				cout << (char)197;
			else
				cout << (char)196;
		}
	}

	gotoXY(toadoX + 1, toadoY + 1);
	cout << CanDeuChuoi("STT", 9);
	gotoXY(toadoX + 11, toadoY + 1);
	cout << CanDeuChuoi("Ma Mon Hoc", 19);
	gotoXY(toadoX + 31, toadoY + 1);
	cout << CanDeuChuoi("Ten Mon Hoc", 39);
	gotoXY(toadoX + 71, toadoY + 1);
	cout << CanDeuChuoi("Nhom", 9);
	gotoXY(toadoX + 81, toadoY + 1);
	cout << CanDeuChuoi("Si So", 9);
	gotoXY(toadoX + 91, toadoY + 1);
	cout << CanDeuChuoi("Con Lai", 9);

	gotoXY(toadoX1, toadoY1 - 1);
	cout << CanDeuChuoi("Danh sach lop TC da DK", 25);
	gotoXY(toadoX1 + 1, toadoY1 + 1);
	cout << CanDeuChuoi("STT", 9);
	gotoXY(toadoX1 + 11, toadoY1 + 1);
	cout << CanDeuChuoi("Ma Mon Hoc", 19);
}


string getTeMonHoc(DSMonHoc dsMH, string maMH)
{
	for (int i = 0; i < dsMH.n; i++)
	{
		if (dsMH.ds[i]->maMonHoc == maMH)
		{
			return dsMH.ds[i]->TenMH;
		}
	}
	return "";
}


int XuatDSLTCDK(LopTC a[], DSMonHoc dsMH, int n, int toadoX, int toadoY, LopTC b[], int soLuongLopTCdaDK, bool& kiemTraThem, bool& thoat)
{
	XoaManHinhChinh();
	int dem = 0;
	int chose = 0;

	gotoXY(toadoXBox, toadoY);
	cout << "DS Lop Tin Chi" << endl;

	for (int i = 0; i < n; i++)
	{
		gotoXY(toadoX + 1, toadoY + 4 + (dem * 2));
		cout << CanDeuChuoi(ChuyenSoSangString(i + 1), 9);
		gotoXY(toadoX + 11, toadoY + 4 + (dem * 2));
		cout << CanDeuChuoi(a[i].mmh, 19);
		gotoXY(toadoX + 31, toadoY + 4 + (dem * 2));
		cout << CanDeuChuoi(getTeMonHoc(dsMH, a[i].mmh), 39);
		gotoXY(toadoX + 71, toadoY + 4 + (dem * 2));
		cout << CanDeuChuoi(ChuyenSoSangString(a[i].nhom), 9);
		gotoXY(toadoX + 81, toadoY + 4 + (dem * 2));
		cout << CanDeuChuoi(ChuyenSoSangString(a[i].dssvdk.soLg), 9);
		gotoXY(toadoX + 91, toadoY + 4 + (dem * 2));
		cout << CanDeuChuoi(ChuyenSoSangString(a[i].so_svmax - a[i].dssvdk.soLg), 9);
		dem++;
	}

	int toadoX1 = toadoX + 70;
	int toadoY1 = toadoY + 3 + 2 * dem + 2;
	int dem1 = 0;
	for (int i = 0; i < soLuongLopTCdaDK; i++)
	{
		gotoXY(toadoX1 + 1, toadoY1 + 4 + (dem1 * 2));
		cout << CanDeuChuoi(ChuyenSoSangString(i + 1), 9);

		gotoXY(toadoX1 + 11, toadoY1 + 4 + (dem1 * 2));
		cout << CanDeuChuoi(b[i].mmh, 19);
		dem1++;
	}

	GiaoDienInLopDK(toadoX, toadoY, dem, dem1);
	int pointer1 = toadoY + 4 + (dem * 2);
	int  dongLenh = pointer1;
	//gotoXY(toadoXBox, toadoY + 4 + (dem * 2));
	MenuLuaChon(toadoXBox, dongLenh);
	while (true)
	{

		if (kbhit())
		{
			char c = getch();
			if (c == -32)
			{
				c = getch();
				if (c == 72)//len
				{
					if (pointer1 == dongLenh)
					{
						MenuLuaChon(toadoXBox, dongLenh);
						pointer1 = dongLenh - 1 + sizeof(stringLuaChon) / sizeof(*stringLuaChon);
					}
					else
					{
						MenuLuaChon(toadoXBox, dongLenh);
						pointer1--;
					}
				}
				else if (c == 80) // mÃƒÂ£ ascii mui tÃƒÂªn xu?ng
				{
					if (pointer1 == dongLenh - 1 + sizeof(stringLuaChon) / sizeof(*stringLuaChon))
					{
						MenuLuaChon(toadoXBox, dongLenh);
						pointer1 = dongLenh;
					}
					else
					{
						MenuLuaChon(toadoXBox, dongLenh);
						pointer1++;
					}
				}
			}
			else if (c == 13)
			{
			

				if (pointer1 == dongLenh)
				{
					kiemTraThem = true;
					goto VongLap;
				}
				else if (pointer1 == dongLenh + 1)
				{
					kiemTraThem = false;
					goto VongLap;
				}
				else if (pointer1 == dongLenh + 2)
				{
					thoat = true;
					goto VongLap1;
				}
				

				MenuLuaChon(toadoXBox, dongLenh);
			}
		}


		ShowCur(0);
		// to mau 
		textcolor(180);
		gotoXY(toadoXBox, pointer1);
		cout << stringLuaChon[pointer1 - dongLenh];
		textcolor(7);
	}

VongLap:
	if (kiemTraThem == true)
	{
		XoaManHinhTuyChon(toadoXBox, dongLenh, 65, 20);
		gotoXY(toadoXBox, toadoY + 4 + (dem * 2));
		ShowCur(1);
		cout << "Chon Them Lop Bang STT(0:De Thoat):";
		cin >> chose;
		ShowCur(0);

		if (chose == 0)
		{
			return 0;
		}
		else if (chose > n)
		{
			return -1;
		}
		return a[chose - 1].malopTc;
	}
	else if (kiemTraThem == false)
	{
		XoaManHinhTuyChon(toadoXBox, dongLenh, 65, 20);
		gotoXY(toadoXBox, toadoY + 4 + (dem * 2));
		ShowCur(1);
		if (soLuongLopTCdaDK == 0)
		{
			return -2;
		}
		cout << "Chon Xoa Lop Bang STT(0:De Thoat):";
		cin >> chose;
		ShowCur(0);

		if (chose == 0)
		{
			return 0;
		}
		else if (chose > n)
		{
			return -1;
		}
		return b[chose - 1].malopTc;
	}
VongLap1 : 
	if (thoat == true)
	{
		return 0;
	}
}

void DSlopTCTrong(NodeLopTC* t, DSLopTC dsLopTC, LopTC  a[], string nienKhoa, int hocKy, string maSV, int& soLuong)
{
	if (t == NULL)
	{
		return;
	}
	else
	{
		if (t->data.nienkhoa == nienKhoa && t->data.hocki == hocKy && dsLopTC.soLuong < t->data.so_svmax &&
			CheckLopSVDaDK(t, maSV, t->data.malopTc))
		{
			a[soLuong++] = t->data;
		}

		DSlopTCTrong(t->pLeft, dsLopTC, a, nienKhoa, hocKy, maSV, soLuong);
		DSlopTCTrong(t->pRight, dsLopTC, a, nienKhoa, hocKy, maSV, soLuong);

	}
}

void SinhVienDKLopTC(NodeLopTC* t, DSLopTC dsLTC, int maLopTC, string maSV, string nienKhoa, int hocki )

{
	if (t == NULL)
	{
		return;
	}
	else
	{
		if (t->data.malopTc == maLopTC)
		{
			if (!CheckMonHocDaDK(t, maSV, nienKhoa, hocki, getMaMonHoc(t, maLopTC)))
			{
				GiaoDienThongBao("Mon Nay Da DK Trong Ki Nay");
				return;
			}
			NodeSVDK* p = new NodeSVDK();
			p->pNext = NULL;
			p->data.masv = maSV;
			p->data.diem = -1;

			ThemCuoiSVDK(t->data.dssvdk.pHead, p);
			t->data.dssvdk.soLg++;
			return;

		}
		SinhVienDKLopTC(t->pLeft, dsLTC, maLopTC, maSV, nienKhoa, hocki);
		SinhVienDKLopTC(t->pRight, dsLTC, maLopTC, maSV, nienKhoa, hocki);
	}
}

void HuySVDKLopTC(NodeLopTC* t, int maLTC, string maSV)
{
	if (t == NULL)
	{
		return;
	}
	else
	{
		if (t->data.malopTc)
		{

			NodeSVDK* temp = t->data.dssvdk.pHead;
			for (NodeSVDK* k = t->data.dssvdk.pHead->pNext; k != NULL; k = k->pNext)
			{
				if (k->data.masv == maSV)
				{
					temp->pNext = k->pNext;
					delete k;
					t->data.dssvdk.soLg--;
					return;
				}
				temp = k;
			}
		}
	}
}
int TimViTriLopCanXoa(LopTC a[], int n, int maLTC)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i].malopTc == maLTC)
		{
			return i;
		}
	}
	return 0;
}
void XoaLopTCDaDK(LopTC a[], int& n, int vt)
{

	for (int i = vt + 1; i < n; i++)
	{
		a[i - 1] = a[i];
	}
	n--;
}
void DangKiLopTC(DSSV dsSV, DSLopTC& dsLTC, DSMonHoc dsMH, int toadoX, int toadoY)
{
	ShowCur(1);
	int  hocki;
	string maSV, nienKhoa;
	NodeSV* k;
	int toadoYTemp;

	do {
		maSV = "";
		toadoYTemp = toadoYMain;
		//gotoXY(toadoXBox, toadoYTemp);
		//cout << "Nhap Vao Ma SV (0: De Thoat):";
		//gotoXY(toadoXBox + 30, toadoYTemp++);
		XoaManHinhChinh();
		GiaoDienXOAMonHoc(toadoXBox + 35, toadoYBox, 1);
		gotoXY(toadoXBox + 40, toadoYBox + 1);
		cout << CanDeuChuoi("NHAP MA SINH VIEN (0 = THOAT)", 10);
		gotoXY(toadoXBox + 50, toadoYBox + 4);
		ShowCur(1);
		XuLyNhapMaMon(maSV, 10);
		if (maSV == "0")
		{
			return;
		}

		k = getSV(dsSV, maSV);
		if (k == NULL)
		{
			GiaoDienThongBao("Ma SV Khong Ton Tai");
			XoaManHinhChinh();
		}
	} while (k == NULL);

	ShowCur(0);
	toadoYTemp += 2;
	HCNText(toadoXBox + 27, toadoYBox+10, 55, 15);
	gotoXY(toadoXBox + 42, toadoYBox + 13);
//	gotoXY(toadoXBox + 10, toadoYTemp++);
	textcolor(11);
	cout << "Thong Tin Sinh Vien";
	//gotoXY(toadoXBox, toadoYTemp++);
	gotoXY(toadoXBox + 42, toadoYBox + 14);
	cout << "Ma Sinh Vien :" << maSV;
	//gotoXY(toadoXBox, toadoYTemp++);
	gotoXY(toadoXBox + 42, toadoYBox + 15);
	cout << "Ho Va Ten Sinh Vien :" << k->data.ho + " " + k->data.ten;
	//gotoXY(toadoXBox, toadoYTemp++);
	gotoXY(toadoXBox + 42, toadoYBox + 16);
	cout << "Phai :" << k->data.phai;
	//gotoXY(toadoXBox, toadoYTemp++);
	gotoXY(toadoXBox + 42, toadoYBox + 17);
	cout << "SDT :" << k->data.sdt;
//	gotoXY(toadoXBox, toadoYTemp++);
	gotoXY(toadoXBox + 40, toadoYBox + 20);
	textcolor(9);
	cout << "Vui Long Kiem Tra Thong Tin!";
	getch();

	ShowCur(1);
	XoaManHinhChinh();
	toadoYTemp = toadoYMain;
	toadoYTemp = toadoYTemp + 2;
	do
	{
		nienKhoa = "";
		HCNText(toadoXBox + 27, toadoYBox, 55, 8);
		gotoXY(toadoXBox + 35, toadoYBox + 2);
		cout << "Nhap Nien Khoa : ";
		//gotoXY(toadoXBox + 17, toadoYTemp++);
		gotoXY(toadoXBox + 52, toadoYBox + 2);
		XuLyNhapNienKhoa(nienKhoa);

		if (nienKhoa == "0")
		{
			ShowCur(0);
			return;
		}
		if (!XetNienKhoa(nienKhoa))
		{
			//gotoXY(toadoXBox, toadoYTemp++);
			//cout << "Nhap nien khoa sai ! Nhap lai ";
			GiaoDienThongBao("Nhap nien khoa sai ! Nhap lai");
		}

	} while (XetNienKhoa(nienKhoa) == false);

	//gotoXY(toadoXBox, toadoYTemp);
	gotoXY(toadoXBox+35, toadoYBox + 3);
	cout << "Nhap Vao Hoc Ki:";
	//gotoXY(toadoXBox + 35, toadoYTemp);
	gotoXY(toadoXBox + 55, toadoYBox + 3);
	//XuLyNhapSo(hocki, toadoXBox + 35);
	XuLyNhapSoHK(hocki, toadoXBox);

	ShowCur(0);
	if (hocki == 0)
	{
		return;
	}
	LopTC lopTCsvDaDK[100];
	int soLuongLopTCDK = 0;
	while (true)
	{

		XoaManHinhChinh();

		LopTC a[100];
		int n = 0;
		bool kiemtraThem = true;
		bool thoat = false;
		DSlopTCTrong(dsLTC.root, dsLTC, a, nienKhoa, hocki, maSV, n);

		if (n == 0 && soLuongLopTCDK == 0)
		{
			GiaoDienThongBao("Chua Co Lop Nao De Dang Ki");
			return;
		}

		int maLTC = XuatDSLTCDK(a, dsMH, n, toadoX, toadoY, lopTCsvDaDK, soLuongLopTCDK, kiemtraThem, thoat);


		if (kiemtraThem == true && thoat == false )
		{
			if (maLTC == 0)
			{
				return;
			}
			else if (maLTC == -1)
			{
				GiaoDienThongBao("Invalid");
				return;
			}

			NodeLopTC* p = getLopTC(dsLTC.root, maLTC);
			lopTCsvDaDK[soLuongLopTCDK++] = p->data;
			SinhVienDKLopTC(dsLTC.root, dsLTC, maLTC, maSV, nienKhoa, hocki);
			GiaoDienThongBao("Dang Ki Thanh Cong");
		}
		else if (kiemtraThem == false && thoat == false)
		{
			if (maLTC == 0)
			{
				return;
			}
			else if (maLTC == -2)
			{
				GiaoDienThongBao("Invalid");
				return;
			}
			else if (maLTC == -1)
			{
				GiaoDienThongBao("Ban chua dang ky lop nao");
			}

			HuySVDKLopTC(dsLTC.root, maLTC, maSV);
			GiaoDienThongBao("Huy Dang Ki Thanh Cong");
			int vt = TimViTriLopCanXoa(lopTCsvDaDK, soLuongLopTCDK, maLTC);
			XoaLopTCDaDK(lopTCsvDaDK, soLuongLopTCDK, vt);

		}
		else if (thoat == true)
		{
			return;
		}

	}
}


/// cau h 
void GiaoDienNhapDiem(int toadoX, int toadoY, int n)
{
	int chieucao = 3 + 2 * n;
	int chieudai = 100;
	for (int i = toadoX; i <= chieudai + toadoX; i++)
	{
		gotoXY(i, toadoY);
		if (i == toadoX)
			cout << (char)218;
		else if (i == chieudai + toadoX)
			cout << (char)191;
		else
			cout << (char)196;
	}
	for (int i = toadoX; i <= chieudai + toadoX; i++)
	{
		gotoXY(i, chieucao + toadoY);
		if (i == toadoX)
			cout << (char)192;
		else if (i == chieudai + toadoX)
			cout << (char)217;
		else
			cout << char(196);
	}
	for (int i = toadoY + 1; i < chieucao + toadoY; i++)
	{
		gotoXY(toadoX, i);
		cout << (char)179;
	}
	for (int i = toadoY + 1; i < chieucao + toadoY; i++)
	{
		gotoXY(chieudai + toadoX, i);
		cout << (char)179;
	}


	// gach xuong
	for (int i = toadoX + 1; i < chieudai + toadoX; i++)
	{
		if (i == toadoX + 10 || i == toadoX + 40 || i == toadoX + 70 || i == toadoX + 90)
		{
			for (int j = toadoY; j < chieucao + toadoY + 1; j++)
			{
				gotoXY(i, j);
				if (j == toadoY)
					cout << char(194);
				else if (j == chieucao + toadoY)
					cout << char(193);
				else
					cout << (char)179;
			}
		}
	}


	// gach ngang
	for (int j = 3; j < chieucao; j = j + 2)
	{
		for (int i = toadoX; i <= chieudai + toadoX; i++)
		{
			gotoXY(i, toadoY + j);
			if (i == toadoX)
				cout << (char)195;
			else if (i == chieudai + toadoX)
				cout << (char)180;
			else if (i == toadoX + 10 || i == toadoX + 40 || i == toadoX + 70 || i == toadoX + 90)
				cout << (char)197;
			else
				cout << (char)196;
		}
	}

	gotoXY(toadoX + 1, toadoY + 1);
	cout << CanDeuChuoi("STT", 9);
	gotoXY(toadoX + 11, toadoY + 1);
	cout << CanDeuChuoi("MSSV", 29);
	gotoXY(toadoX + 41, toadoY + 1);
	cout << CanDeuChuoi("Ho", 29);
	gotoXY(toadoX + 71, toadoY + 1);
	cout << CanDeuChuoi("Ten", 19);
	gotoXY(toadoX + 91, toadoY + 1);
	cout << CanDeuChuoi("Diem", 9);
}

void XuatDSDiem(DSSV dsSV, NodeSVDK* a[], int n, int toadoX, int toadoY, int kt = 1)
{

	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		NodeSV* temp = getSV(dsSV, a[i]->data.masv);
		gotoXY(toadoX + 1, toadoY + 4 + (dem * 2));
		cout << CanDeuChuoi(ChuyenSoSangString(i + 1), 9);
		gotoXY(toadoX + 11, toadoY + 4 + (dem * 2));
		cout << CanDeuChuoi(a[i]->data.masv, 29);
		gotoXY(toadoX + 41, toadoY + 4 + (dem * 2));
		cout << CanDeuChuoi(temp->data.ho, 29);
		gotoXY(toadoX + 71, toadoY + 4 + (dem * 2));
		cout << CanDeuChuoi(temp->data.ten, 19);
		gotoXY(toadoX + 91, toadoY + 4 + (dem * 2));
		if (kt == 1)
		{
			if (a[i]->data.diem != -1)
				cout << showpoint << setprecision(3) << a[i]->data.diem;
		}
		else {
			if (a[i]->data.diem == -1)
			{
				cout << CanDeuChuoi("Chua Co", 9); 
			}
			else
				cout << showpoint << setprecision(3) << a[i]->data.diem;;
		}
		dem++;
	}
	GiaoDienNhapDiem(toadoX, toadoY, n);
}

void RunNhapDiem(NodeSVDK* a[], int n, int toadoX, int toadoY)
{
	gotoXY(1, 6);
	cout << "Nhan ESC: Ket Thuc Qua Trinh Nhap";
	int length = 0;
	ShowCur(1);
	int pointer1 = toadoY;
	while (true)
	{
		if (a[(pointer1 - toadoY) / 2]->data.diem == -1)
		{
			gotoXY(toadoX, pointer1);
		}
		else
			gotoXY(toadoX + 4, pointer1);
		if (!XuLyNhapDiem(a[(pointer1 - toadoY) / 2]->data.diem, toadoX, pointer1)) {
			return;
		}

		if (pointer1 < toadoY)
		{
			pointer1 = toadoY;
		}
		else if (pointer1 > toadoY + (2 * n) - 2)
		{
			pointer1 = toadoY + (2 * n) - 2;
		}
	}
	ShowCur(0);
}

void getDSSVTrongLopTC(NodeLopTC* t, NodeSVDK* a[], string nienKhoa, int hocKi, int nhom, string maMH, int& n)
{
	if (t == NULL)
	{
		return;
	}
	else
	{
		if (t->data.mmh == maMH && t->data.hocki == hocKi && t->data.nhom == nhom && t->data.nienkhoa == nienKhoa)
		{
			for (NodeSVDK* k = t->data.dssvdk.pHead; k != NULL; k = k->pNext)
			{
				a[n++] = k;
			}
		}
		getDSSVTrongLopTC(t->pLeft, a, nienKhoa, hocKi, nhom, maMH, n);
		getDSSVTrongLopTC(t->pRight, a, nienKhoa, hocKi, nhom, maMH, n);
	}
}
void NhapDiem(DSSV dsSV, DSLopTC& dsLopTC, DSMonHoc dsMH, int toadoX, int toadoY)
{
	int  HK, nhom;
	string maMonHoc, nienKhoa;

	int toadoYtemp = toadoYMain;
	ShowCur(1);

	do
	{
		nienKhoa = "";
		HCNText(toadoXBox + 27, toadoYBox, 55, 8);
		gotoXY(toadoXBox + 45, toadoYBox + 1);
		textcolor(12);
		cout << "NHAP THONG TIN";
		textcolor(11);
		gotoXY(toadoXBox + 35, toadoYBox + 2);
		//gotoXY(toadoXBox, toadoYtemp);
		cout << "Nhap Nien Khoa : ";
		gotoXY(toadoXBox + 35, toadoYBox + 3);
		cout << "Nhap Hoc Ki:";
		gotoXY(toadoXBox + 35, toadoYBox + 4);
		cout << "Nhap Nhom: ";
		gotoXY(toadoXBox + 35, toadoYBox + 5);
		cout << "Nhap Ma Mon Hoc: ";
		//gotoXY(toadoXBox + 17, toadoYtemp++);
		textcolor(15);
		gotoXY(toadoXBox + 52, toadoYBox +2);
		XuLyNhapNienKhoa(nienKhoa);
		if (nienKhoa == "0")
		{
			ShowCur(0);
			return;
		}
		if (!XetNienKhoa(nienKhoa))
		{
			//gotoXY(toadoXBox, toadoYtemp++);
			//cout << "Nhap nien khoa sai ! Nhap lai ";
			gotoXY(toadoXBox + 52, toadoYBox + 2);
			cout << "                ";
			GiaoDienThongBao("Nhap nien khoa sai ! Nhap lai ");
			
		}

	} while (XetNienKhoa(nienKhoa) == false);


	


	gotoXY(toadoXBox + 50, toadoYBox + 3);
	XuLyNhapSoHK(HK, toadoXBox);
	if (HK == 0)
	{
		ShowCur(0);
		return;
	}
	gotoXY(toadoXBox + 48, toadoYBox + 4);
	XuLyNhapSo(nhom, toadoXBox + 17);
	if (nhom == 0)
	{
		ShowCur(0);
		return;
	}
	int i;
	string monHocss;
	gotoXY(toadoXBox + 55, toadoYBox + 5);
	do {
		i = 0;
		monHocss = "";
		gotoXY(toadoXBox + 55, toadoYBox + 5);
		cout << "          ";
		gotoXY(toadoXBox + 55, toadoYBox + 5);
		XuLyNhapMaMon(monHocss, 10);
		i = SearchMH(dsMH, monHocss);
		if (i == -1)
		{
			gotoXY(toadoXBox, toadoY + 1);
			GiaoDienThongBao("Ma Mon hoc khong ton tai! Nhap Lai!");

		}
	} while (i == -1);


	maMonHoc = monHocss;
	if (maMonHoc == "0")
	{
		ShowCur(0);
		return;
	}
	ShowCur(0);
	int n = 0; 
	NodeSVDK* a[2000];
	getDSSVTrongLopTC(dsLopTC.root, a, nienKhoa, HK, nhom, maMonHoc, n);

	if (n == 0)
	{
		GiaoDienThongBao("Lop Tin Chi Khong Ton Tai");
		return;
	}
	XoaManHinhChinh();
	XuatDSDiem(dsSV, a, n, toadoX, toadoY);
	RunNhapDiem(a, n, toadoX + 91, toadoY + 4);
}


// cau 
void InBangDiemCuaLopTC(DSSV dsSV, DSLopTC& dsLopTC, DSMonHoc dsMH, int toadoX, int toadoY)
{
	int HK, nhom;
	string maMH, nienKhoa;

	int toadoYtemp = toadoYMain;
	ShowCur(1);

	do
	{
		nienKhoa = "";
		HCNText(toadoXBox + 27, toadoYBox, 55, 8);
		gotoXY(toadoXBox + 45, toadoYBox + 1);
		textcolor(12);
		cout << "NHAP THONG TIN";
		textcolor(11);
		gotoXY(toadoXBox + 35, toadoYBox + 2);
		//gotoXY(toadoXBox, toadoYtemp);
		cout << "Nhap Nien Khoa : ";
		gotoXY(toadoXBox + 35, toadoYBox + 3);
		cout << "Nhap Hoc Ki:";
		gotoXY(toadoXBox + 35, toadoYBox + 4);
		cout << "Nhap Nhom: ";
		gotoXY(toadoXBox + 35, toadoYBox + 5);
		cout << "Nhap Ma Mon Hoc: ";
		//gotoXY(toadoXBox + 17, toadoYtemp++);
		textcolor(15);
		gotoXY(toadoXBox + 52, toadoYBox + 2);
		XuLyNhapNienKhoa(nienKhoa);
		if (nienKhoa == "0")
		{
			ShowCur(0);
			return;
		}
		if (!XetNienKhoa(nienKhoa))
		{
			//gotoXY(toadoXBox, toadoYtemp++);
			//cout << "Nhap nien khoa sai ! Nhap lai ";
			gotoXY(toadoXBox + 52, toadoYBox + 2);
			cout << "                ";
			GiaoDienThongBao("Nhap nien khoa sai ! Nhap lai ");

		}

	} while (XetNienKhoa(nienKhoa) == false);

	gotoXY(toadoXBox + 50, toadoYBox + 3);
	XuLyNhapSoHK(HK, toadoXBox);
	if (HK == 0)
	{
		ShowCur(0);
		return;
	}
	gotoXY(toadoXBox + 48, toadoYBox + 4);
	XuLyNhapSo(nhom, toadoXBox + 17);
	if (nhom == 0)
	{
		ShowCur(0);
		return;
	}
	int i;
	string monHocss;
	gotoXY(toadoXBox + 55, toadoYBox + 5);
	do {
		i = 0;
		monHocss = "";
		gotoXY(toadoXBox + 55, toadoYBox + 5);
		cout << "          ";
		gotoXY(toadoXBox + 55, toadoYBox + 5);
		XuLyNhapMaMon(monHocss, 10);
		i = SearchMH(dsMH, monHocss);
		if (i == -1)
		{
			gotoXY(toadoXBox, toadoY + 1);
			GiaoDienThongBao("Ma Mon hoc khong ton tai! Nhap Lai!");

		}
	} while (i == -1);


	maMH = monHocss;
	if (maMH == "0")
	{
		ShowCur(0);
		return;
	}
	ShowCur(0);

	int n = 0;
	NodeSVDK* a[2000];
	getDSSVTrongLopTC(dsLopTC.root, a, nienKhoa, HK, nhom, maMH, n);

	if (n == 0)
	{
		GiaoDienThongBao("Lop Tin Chi Khong Ton Tai");
		return;
	}

	XoaManHinhChinh();
	gotoXY(toadoX + 40, toadoY);
	cout << "BANG DIEM MON HOC " << getTeMonHoc(dsMH, maMH);
	gotoXY(toadoX + 40, toadoY + 1);
	cout << "Nien Khoa :" << nienKhoa << " Hoc Ki :" << HK << " Nhom :" << nhom;
	XuatDSDiem(dsSV, a, n, toadoX, toadoY + 3, 0);
	getch();
}
// cau cuoi 
/*void InBangDiemCuaLopTC(DSSV dsSV, DSLopTC& dsLopTC, DSMonHoc dsMH, int toadoX, int toadoY)
{
	int HK, nhom;
	string maMH, nienKhoa;

	int toadoYtemp = toadoYMain;
	ShowCur(1);
	do
	{
		nienKhoa = "";
		gotoXY(toadoXBox, toadoYtemp);
		cout << "Nhap Nien Khoa : ";
		gotoXY(toadoXBox + 17, toadoYtemp++);
		XuLyNhapNienKhoa(nienKhoa);
		if (nienKhoa == "0")
		{
			ShowCur(0);
			return;
		}
		if (!XetNienKhoa(nienKhoa))
		{
			gotoXY(toadoXBox, toadoYtemp++);
			cout << "Nhap nien khoa sai ! Nhap lai ";
		}

	} while (XetNienKhoa(nienKhoa) == false);

	gotoXY(toadoXBox, toadoYtemp);
	cout << "Nhap Hoc Ki(0:De Thoat)    :";
	gotoXY(toadoXBox + 30, toadoYtemp++);
	XuLyNhapSo(HK, toadoXBox + 30);
	if (HK == 0)
	{
		ShowCur(0);
		return;
	}
	gotoXY(toadoXBox, toadoYtemp);
	cout << "Nhap Nhom(0:De Thoat)      :";
	gotoXY(toadoXBox + 30, toadoYtemp++);
	XuLyNhapSo(nhom, toadoXBox + 30);
	if (nhom == 0)
	{
		ShowCur(0);
		return;
	}

	gotoXY(toadoXBox, toadoYtemp);
	cout << "Nhap Ma Mon Hoc(0:De Thoat):  ";
	gotoXY(toadoXBox + 30, toadoYtemp++);
	XuLyNhapMa(maMH);
	if (maMH == "0")
	{
		ShowCur(0);
		return;
	}
	ShowCur(0);

	int n = 0;
	NodeSVDK* a[2000];
	getDSSVTrongLopTC(dsLopTC.root, a, nienKhoa, HK, nhom, maMH, n);

	if (n == 0)
	{
		GiaoDienThongBao("Lop Tin Chi Khong Ton Tai");
		return;
	}

	XoaManHinhChinh();
	gotoXY(toadoX + 40, toadoY);
	cout << "BANG DIEM MON HOC " << getTeMonHoc(dsMH, maMH);
	gotoXY(toadoX + 40, toadoY + 1);
	cout << "Nien Khoa :" << nienKhoa << " Hoc Ki :" << HK << " Nhom :" << nhom;
	XuatDSDiem(dsSV, a, n, toadoX, toadoY + 3, 0);
	getch();
}
*/
int getSoTCMH(DSMonHoc dsMH, string maMH)
{
	for (int i = 0; i < dsMH.n; i++)
	{
		if (dsMH.ds[i]->maMonHoc == maMH)
		{
			return dsMH.ds[i]->sotclt + dsMH.ds[i]->sotcth;
		}
	}
	return 0;
}

  void diemTBCua1SVLTC(NodeLopTC* t, DSMonHoc dsMH, string maSV, int& soLuongTC, float& diem)
{
	  int soLgTemp = 0;
	if (t == NULL)
	{
		return;
	}
	else
	{
		for (NodeSVDK* k = t->data.dssvdk.pHead; k != NULL; k = k->pNext)
		{
			if (k->data.masv == maSV)
			{
				soLgTemp = getSoTCMH(dsMH , t->data.mmh);
				if (k->data.diem != -1)
				{
					diem += k->data.diem * soLgTemp;
					soLuongTC += soLgTemp;
				}
				else if (k->data.diem == -1)
				{
					soLuongTC += soLgTemp; 
				}
				break;
			}
		}

		diemTBCua1SVLTC(t->pLeft, dsMH, maSV, soLuongTC, diem);
		diemTBCua1SVLTC(t->pRight, dsMH, maSV, soLuongTC, diem);
	}
}

float DiemTBCua1SV(DSLopTC & dsLopTC, DSMonHoc dsMH, string maSV )
{
	int soLgTC = 0;
	float diem = 0;
	int soLgTemp = 0;
	diemTBCua1SVLTC(dsLopTC.root, dsMH,maSV , soLgTC, diem);
	
	if (soLgTC == 0)
	{
		return -1;
	}
	return diem / soLgTC;
}
void InDiemTBCuaLopTheoTC(DSSV dsSV, DSLopTC& dsLopTC, DSMonHoc dsMH, int toadoX, int toadoY)
{
	string maLop;
	int toadoYtemp = toadoYMain;
	ShowCur(1);
	HCNText(toadoXBox + 27, toadoYBox, 55, 5);


	gotoXY(toadoXBox + 40, toadoYBox + 2);
	textcolor(11);
	cout << "Nhap Ma Lop: ";
	gotoXY(toadoXBox + 55, toadoYBox + 2);
	textcolor(15);
	XuLyNhapMaMon(maLop,15);
	if (maLop == "0")
	{
		ShowCur(0);
		return;
	}
	ShowCur(0);

	int stt = 1;
	int dem = 0;
	XoaManHinhChinh();
	gotoXY(toadoX + 40, toadoY);
	cout << "BANG THONG KE DIEM TRUNG BINH KHOA HOC ";
	gotoXY(toadoX + 50, toadoY + 1);
	cout << "Lop :" << maLop;

	toadoY += 3;

	for (NodeSV* k = dsSV.pHead; k != NULL; k = k->pNext)
	{
		if (k->data.malop == maLop)
		{
			gotoXY(toadoX + 1, toadoY + 4 + (dem * 2));
			cout << CanDeuChuoi(ChuyenSoSangString(stt++), 9);
			gotoXY(toadoX + 11, toadoY + 4 + (dem * 2));
			cout << CanDeuChuoi(k->data.mssv, 29);
			gotoXY(toadoX + 41, toadoY + 4 + (dem * 2));
			cout << CanDeuChuoi(k->data.ho, 29);
			gotoXY(toadoX + 71, toadoY + 4 + (dem * 2));
			cout << CanDeuChuoi(k->data.ten, 19);
			gotoXY(toadoX + 91, toadoY + 4 + (dem * 2));
			float tempTB = DiemTBCua1SV(dsLopTC, dsMH, k->data.mssv);
			if (tempTB != -1)
			{
				cout << tempTB;
			}
			else
				cout << "Chua Co";

			dem++;
		}

	}


	GiaoDienNhapDiem(toadoX, toadoY, dem);
	getch();
}
void GiaoDienMonHoc(int toadoX, int toadoY, int n)
{
	int chieucao = 3 + 2 * n;
	//int chieucao = 3 + 2 * n;

	int chieudai = 90;

	int toadoX1 = toadoX + 70;
	int toadoY1 = toadoY + chieucao + 2;
	// gach ngang tren cung
	for (int i = toadoX; i <= chieudai + toadoX; i++)
	{
		gotoXY(i, toadoY);
		if (i == toadoX)
			cout << (char)218;
		else if (i == chieudai + toadoX)
			cout << (char)191;
		else
			cout << (char)196;
	}
	// gach ngang duoi cung
	for (int i = toadoX; i <= chieudai + toadoX; i++)
	{
		gotoXY(i, chieucao + toadoY);
		if (i == toadoX)
			cout << (char)192;
		else if (i == chieudai + toadoX)
			cout << (char)217;
		else
			cout << char(196);
	}
	//
	for (int i = toadoY + 1; i < chieucao + toadoY; i++)
	{
		gotoXY(toadoX, i);
		cout << (char)179;
	}
	for (int i = toadoY + 1; i < chieucao + toadoY; i++)
	{
		gotoXY(chieudai + toadoX, i);
		cout << (char)179;
	}

	// gach xuong ben trong
	for (int i = toadoX + 1; i < chieudai + toadoX; i++)
	{
		if (i == toadoX + 10 || i == toadoX + 30 || i == toadoX + 70 || i == toadoX + 80)
		{
			for (int j = toadoY; j < chieucao + toadoY + 1; j++)
			{
				gotoXY(i, j);
				if (j == toadoY)
					cout << char(194);
				else if (j == chieucao + toadoY)
					cout << char(193);
				else
					cout << (char)179;
			}
		}
	}
	// gach ngang ben trong
	for (int j = 3; j < chieucao; j = j + 2)
	{
		for (int i = toadoX; i <= chieudai + toadoX; i++)
		{
			gotoXY(i, toadoY + j);
			if (i == toadoX)
				cout << (char)195;
			else if (i == chieudai + toadoX)
				cout << (char)180;
			else if (i == toadoX + 10 || i == toadoX + 30 || i == toadoX + 70 || i == toadoX + 80 || i == toadoX + 90)
				cout << (char)197;
			else
				cout << (char)196;
		}
	}
	///  bang2

	textcolor(12);
	gotoXY(toadoX + 1, toadoY + 1);
	cout << CanDeuChuoi("STT", 9);
	gotoXY(toadoX + 11, toadoY + 1);
	cout << CanDeuChuoi("Ma Mon Hoc", 19);
	gotoXY(toadoX + 31, toadoY + 1);
	cout << CanDeuChuoi("Ten Mon Hoc", 39);
	gotoXY(toadoX + 71, toadoY + 1);
	cout << CanDeuChuoi("STC LT", 9);
	gotoXY(toadoX + 81, toadoY + 1);
	cout << CanDeuChuoi("STC TH", 9);

}
void GiaoDienCHINHMonHoc(int toadoX, int toadoY, int n)
{
	int chieucao = 3 + 2 * n;
	//int chieucao = 3 + 2 * n;

	int chieudai = 90;

	int toadoX1 = toadoX + 70;
	int toadoY1 = toadoY + chieucao + 2;
	// gach ngang tren cung
	for (int i = toadoX; i <= chieudai + toadoX; i++)
	{
		gotoXY(i, toadoY);
		if (i == toadoX)
			cout << (char)218;
		else if (i == chieudai + toadoX)
			cout << (char)191;
		else
			cout << (char)196;
	}
	// gach ngang duoi cung
	for (int i = toadoX; i <= chieudai + toadoX; i++)
	{
		gotoXY(i, chieucao + toadoY);
		if (i == toadoX)
			cout << (char)192;
		else if (i == chieudai + toadoX)
			cout << (char)217;
		else
			cout << char(196);
	}
	//
	for (int i = toadoY + 1; i < chieucao + toadoY; i++)
	{
		gotoXY(toadoX, i);
		cout << (char)179;
	}
	for (int i = toadoY + 1; i < chieucao + toadoY; i++)
	{
		gotoXY(chieudai + toadoX, i);
		cout << (char)179;
	}

	// gach xuong ben trong
	for (int i = toadoX + 1; i < chieudai + toadoX; i++)
	{
		if (i == toadoX + 30 || i == toadoX + 70 || i == toadoX + 80)
		{
			for (int j = toadoY; j < chieucao + toadoY + 1; j++)
			{
				gotoXY(i, j);
				if (j == toadoY)
					cout << char(194);
				else if (j == chieucao + toadoY)
					cout << char(193);
				else
					cout << (char)179;
			}
		}
	}
	// gach ngang ben trong
	for (int j = 3; j < chieucao; j = j + 2)
	{
		for (int i = toadoX; i <= chieudai + toadoX; i++)
		{
			gotoXY(i, toadoY + j);
			if (i == toadoX)
				cout << (char)195;
			else if (i == chieudai + toadoX)
				cout << (char)180;
			else if (i == toadoX + 70 || i == toadoX + 80 || i == toadoX + 90)
				cout << (char)197;
			else
				cout << (char)196;
		}
	}
	///  bang2
	gotoXY(toadoX + 8, toadoY + 1);
	cout << CanDeuChuoi("Ma Mon Hoc", 19);
	gotoXY(toadoX + 31, toadoY + 1);
	cout << CanDeuChuoi("Ten Mon Hoc", 39);
	gotoXY(toadoX + 71, toadoY + 1);
	cout << CanDeuChuoi("STC LT", 9);
	gotoXY(toadoX + 81, toadoY + 1);
	cout << CanDeuChuoi("STC TH", 9);

}

void xuatMonHoc(DSMonHoc dsMH, int toadoX, int toadoY) {
	int dem = 0;
	sort(dsMH);
	XoaManHinhChinh();
	textcolor(11);
	GiaoDienMonHoc(toadoXBox + 15, toadoYBox, dsMH.n);
	textcolor(15);
	for (int i = 0; i < dsMH.n; i++) {
		
		gotoXY(toadoX + 6, toadoY + 4 + (dem * 2));
		cout << CanDeuChuoi(ChuyenSoSangString(i + 1), 9);

		gotoXY(toadoX + 16, toadoY + 4 + (dem * 2));
		cout << CanDeuChuoi(dsMH.ds[i]->maMonHoc, 19);
		gotoXY(toadoX + 38, toadoY + 4 + (dem * 2));
		cout << dsMH.ds[i]->TenMH << endl;
		gotoXY(toadoX + 79, toadoY + 4 + (dem * 2));
		cout << dsMH.ds[i]->sotclt;
		gotoXY(toadoX + 89, toadoY + 4 + (dem * 2));
		cout << dsMH.ds[i]->sotcth;
		dem++;
	}
	_getch();
}
void themMonHoc(DSMonHoc& dsMH, int toadoX, int toadoY) {
	ShowCur(1);
	//int toadoY = toadoYMain;
	string monHocss;
	string tenMHss;
	int i;
	//int Y = toadoY + 4;
	int X = toadoX + 71;
	monHoc* p = new monHoc;
	XoaManHinhChinh();
	//GiaoDienMonHoc(toadoXBox + 4, toadoYBox, 1);
	//gotoXY(toadoX + 1, toadoY + 4);
	//cout << 1;
	//cin.ignore();
	HCNText(toadoXBox + 27, toadoYBox, 55, 12);
	gotoXY(toadoXBox + 42, toadoYBox + 2);
	textcolor(12);
	cout << "NHAP THONG TIN MON HOC";
	gotoXY(toadoXBox + 35, toadoYBox + 4);
	textcolor(11);
	cout << "Ma mon hoc:";
	gotoXY(toadoXBox + 35, toadoYBox + 5);
	cout << "Ten Mon Hoc: ";
	gotoXY(toadoXBox + 35, toadoYBox + 6);
	cout << "So tin cho ly thuyet: ";
	gotoXY(toadoXBox + 35, toadoYBox + 7);
	cout << "So tin chi thuc hanh: ";


	do {
		i = 0;
		monHocss = "";
		//gotoXY(toadoX + 11, toadoY + 4);	
		gotoXY(toadoXBox + 48, toadoYBox + 4);
		cout << "          ";
		//gotoXY(toadoX + 11, toadoY + 4);
		gotoXY(toadoXBox + 48, toadoYBox + 4);
		textcolor(12);
		XuLyNhapMaMon(monHocss,10);
		i = SearchMH(dsMH, monHocss);
		if (monHocss == "0") {
			ShowCur(0);
			return;
		}
		if (i == 1)
		{

			gotoXY(toadoXBox, toadoY + 1);
			GiaoDienThongBao("Ma Mon hoc da ton tai! Nhap Lai!");

		}
		if (monHocss.size() != 10) {
			gotoXY(toadoXBox, toadoY + 1);
			GiaoDienThongBao("Ma Mon hoc khong hop le! Nhap Lai");
		}
	} while (i == 1 || monHocss.size() != 10);
	p->maMonHoc = monHocss;
	//gotoXY(toadoX + 31, toadoY + 4);
	//getline(cin, p->TenMH);

	do {
		tenMHss = "";
		//gotoXY(toadoX + 31, toadoY + 4);
		gotoXY(toadoXBox + 48, toadoYBox + 5);
		textcolor(12);
		XuLyNhapten(tenMHss, 30);
		//getline(cin,tenMHss);
		if (tenMHss.size() > 30 || tenMHss.size() <= 0 ) {
			gotoXY(toadoXBox, toadoY + 1);
			GiaoDienThongBao("Ten Mon hoc khong hop le! Nhap Lai( < 30 ki tu )");

		}
	} while (tenMHss.size() > 30 || tenMHss.size() <= 0);

	p->TenMH = tenMHss;
//	gotoXY(toadoX + 71, toadoY + 4);
	

	//XuLyNhapSoMH(p->sotclt);
	/*cin >> p->sotclt;*/
	float soTclt;
	do {
		gotoXY(toadoXBox + 58, toadoYBox + 6);
		cout << "            ";
		gotoXY(toadoXBox + 58, toadoYBox + 6);
		textcolor(12);
		XuLyNhapSoTC(soTclt, toadoXBox + 58);
		
		if (xetSoTC(soTclt) == false)
		{
			GiaoDienThongBaoMh("Nhap lai so tin chi");
		}
			
		
	} while (xetSoTC(soTclt) == false);
	p->sotclt = soTclt;
//	gotoXY(toadoX + 81, toadoY + 4);
	gotoXY(toadoXBox + 58, toadoYBox + 7);
	float sTcth;
	do {
		gotoXY(toadoXBox + 58, toadoYBox + 7);
		cout << "            ";
		gotoXY(toadoXBox + 58, toadoYBox + 7);
		textcolor(12);
		XuLyNhapSoTC(sTcth, toadoXBox + 58);

		if (xetSoTC(sTcth) == false)
		{
			GiaoDienThongBaoMh("Nhap lai so tin chi");
		}


	} while (xetSoTC(sTcth) == false);
	p->sotcth = sTcth;

	//XuLyNhapSoMH(p->sotcth);
	dsMH.ds[dsMH.n] = new monHoc;
	dsMH.ds[dsMH.n] = p;
	dsMH.n++;

	ShowCur(0);
	GiaoDienThongBao("Them Thanh Cong");
}
void xoaMonHoc(DSMonHoc& dsMH)
{
	string a;
	//vonglap:
	XoaManHinhChinh();

	ShowCur(1);
	HCNText(toadoXBox + 27, toadoYBox, 55, 5);


	gotoXY(toadoXBox + 35, toadoYBox + 2);
	textcolor(11);
	cout << "Nhap Ma Mon Hoc Can XOA: ";
	
	textcolor(15);
	//XuLyNhapMa(a);
	int i;
	//cin.ignore();
	do {
		i = 0;
		a = "";
		gotoXY(toadoXBox + 60, toadoYBox + 2);
		cout << "              ";
		gotoXY(toadoXBox + 60, toadoYBox + 2);
		XuLyNhapMaMon(a, 10);
		i = SearchMH(dsMH, a);
		if (a == "0") {
			ShowCur(0);
			return;
		}
		if (i == -1)
		{
			gotoXY(toadoXBox, toadoYMain);
			GiaoDienThongBao("Ma Mon Hoc Chua Ton Tai. Nhap Lai");
		}
	} while (i == -1);

	int mh = ktMonHoc(a, dsMH);
		for (int i = mh; i < dsMH.n - 1; i++)
		{
			dsMH.ds[i]->maMonHoc = dsMH.ds[i + 1]->maMonHoc;
			dsMH.ds[i]->TenMH = dsMH.ds[i + 1]->TenMH;
			dsMH.ds[i]->sotclt = dsMH.ds[i + 1]->sotclt;
			dsMH.ds[i]->sotcth = dsMH.ds[i + 1]->sotcth;
		}

		monHoc* tam = dsMH.ds[dsMH.n - 1];
		dsMH.n--;
		gotoXY(toadoXBox, toadoYBox + 1);
		GiaoDienThongBao("Da xoa thanh cong!");
		system("pause"); 
}

void chinhsuaMH(DSMonHoc& dsMH) {
	string a;
	//vonglap:
	XoaManHinhChinh();

	ShowCur(1);
	HCNText(toadoXBox + 27, toadoYBox, 55, 5);


	gotoXY(toadoXBox + 35, toadoYBox + 2);
	textcolor(11);
	cout << "Nhap Ma Mon Hoc Can Chinh: ";
	textcolor(15);
	//XuLyNhapMa(a);
	int i;
	//cin.ignore();
	do {
		i = 0;
		a = "";
		gotoXY(toadoXBox + 62, toadoYBox + 2);
		cout << "              ";
		gotoXY(toadoXBox + 62, toadoYBox + 2);
		XuLyNhapMaMon(a, 10);
		i = SearchMH(dsMH,a);
		if (a == "0") {
			ShowCur(0);
			return;
		}
		if (i == -1)
		{
			gotoXY(toadoXBox, toadoYMain);
			GiaoDienThongBao("Ma Mon Hoc Chua Ton Tai. Nhap Lai");
		}
	} while (i == -1);

	string ten;
	int mh = ktMonHoc(a, dsMH);// tra ve vi tri cua mon hoc can chinh sua
	monHoc mhh;
	int chon = 0;
	while (true) {
		XoaManHinhChinh();
		//MenuSuaMonHoc(mhh);

		HCNText(toadoXBox + 34, toadoYBox, 50, 15);

		int toadoY = toadoYMain + 3;
		textcolor(11);
		gotoXY(toadoXBox + 42, toadoYMain+1);
		textcolor(0xE);
		cout << "CHON THUOC TINH CAN CHINH SUA" << endl;
		gotoXY(toadoXBox + 40, toadoY++); textcolor(11);
		cout << "1.Ten Mon Hoc: "; textcolor(12);cout << dsMH.ds[mh]->TenMH << endl;
		gotoXY(toadoXBox + 40, toadoY++); textcolor(11);
		cout << "2.So Tin Chi Ly Thuyet: "; textcolor(12); cout << dsMH.ds[mh]->sotclt << endl;
		gotoXY(toadoXBox + 40, toadoY++); textcolor(11);
		cout << "3.So Tin Chi ThuC Hanh: "; textcolor(12); cout << dsMH.ds[mh]->sotcth << endl;
		gotoXY(toadoXBox + 40, toadoY++); textcolor(11);
		cout << "4.Luu va Thoat"  << endl;
		gotoXY(toadoXBox + 40, toadoY);
		textcolor(224);
		cout << "Chon:" << endl;
		textcolor(12);
		gotoXY(toadoXBox + 47, toadoY);



		XuLyNhapSo(chon);
		XoaManHinhChinh();
		switch (chon)
		{
		case 1:
			HCNText(toadoXBox + 27, toadoYBox, 50, 5);
			gotoXY(toadoXBox + 30, toadoYMain);
			textcolor(11);

			cout << "Nhap Ten Mon Hoc Moi: ";
			//getline(cin, x.nienkhoa);
			textcolor(12);
			ShowCur(1);
			XuLyNhapten(ten);
			dsMH.ds[mh]->TenMH = ten;
			break;
		case 2:
			HCNText(toadoXBox + 27, toadoYBox, 50, 5);
			gotoXY(toadoXBox + 30, toadoYMain);
			textcolor(11);

			cout << "So tin chi ly thuyet moi: ";
			textcolor(12);
			ShowCur(1);
			cin>>dsMH.ds[mh]->sotclt;
			break;
		case 3:
			HCNText(toadoXBox + 27, toadoYBox, 50, 5);
			gotoXY(toadoXBox + 30, toadoYMain);
			textcolor(11);

			cout << "So tin chi thuc hanh moi: ";
			textcolor(12);
			ShowCur(1);
			cin >> dsMH.ds[mh]->sotcth;
			break;
		case 4:
			//save
			return;
		}
	}
}