#include "XULY.h"

//  cau a  
void themLopTC(DSLopTC& t, DSMonHoc dsMH)
{
	string maMH;

	int toadoY = toadoYMain;
	LopTC x;
	gotoXY(toadoXBox, toadoY++);
	cout << "Nhap ma lop tin chi ";
	ShowCur(1);
	cin >> x.malopTc;
	cin.ignore();
	int i;
	do {

		maMH = "";
		gotoXY(toadoXBox, toadoY);
		cout << "Nhap Ma Mon Hoc(0:De Thoat):";
		gotoXY(toadoXBox + 30, toadoY++);
		//XuLyNhapMa(maMH);
		cin >> maMH;
		chuanhoaChu(maMH);
		if (maMH == "0")
		{
			ShowCur(0);
			return;
		}

		i = SearchMH(dsMH, maMH);
		if (i == -1)
		{
			gotoXY(toadoXBox, toadoY++);
			cout << "Ma Mon Hoc Chua Ton Tai. Nhap Lai";

		}


	} while (i == -1);

	x.mmh = maMH;
	gotoXY(toadoXBox, toadoY);
	cout << "Nhap Nien Khoa : ";
	gotoXY(toadoXBox + 17, toadoY++);
	cin.ignore();
	getline(cin, x.nienkhoa);


	gotoXY(toadoXBox, toadoY);
	cout << "Nhap Hoc Ki    : ";
	gotoXY(toadoXBox + 17, toadoY++);
	XuLyNhapSo(x.hocki, toadoXBox + 17);

	gotoXY(toadoXBox, toadoY);
	cout << "Nhap Nhom      : ";
	gotoXY(toadoXBox + 17, toadoY++);
	XuLyNhapSo(x.nhom, toadoXBox + 17);

	CheckTrungLopTinChi(t.root, x.nienkhoa, x.hocki, x.nhom, x.mmh);

	gotoXY(toadoXBox, toadoY);
	cout << "Nhap So SV Max : ";
	gotoXY(toadoXBox + 17, toadoY++);
	XuLyNhapSo(x.so_svmax, toadoXBox + 17);

	gotoXY(toadoXBox, toadoY);
	cout << "Nhap So SV Min : ";
	gotoXY(toadoXBox + 17, toadoY++);
	XuLyNhapSo(x.so_sv_min, toadoXBox + 17);
	//MenuDS(x.DSSVDK);
	x.dssvdk.pHead = NULL;

	ThemNodeVaoCay(t.root, x);
	t.soLuong++;
	ShowCur(0);
	GiaoDienThongBao("Them Thanh Cong");
	//LopTC x;

	//gotoXY(50, 8);

	//cout << "Nhap ma lop tin chi : ";
	//cin >> x.malopTc;


	//gotoXY(50, 9);
	////fflush(stdin);
	//cin.ignore();
	//cout << "Nhap ma mon hoc : ";
	//getline(cin, x.mmh);
	//gotoXY(50, 10);
	//cout << "Nhap nien khoa: ";

	//getline(cin, x.nienkhoa);
	//gotoXY(50, 11);
	//cout << "Nhap hoc ky : ";
	//cin >> x.hocki;
	//gotoXY(50, 12);
	//cout << "Nhap nhom : ";
	//cin >> x.nhom;
	//gotoXY(50, 13);
	//cout << "Nhap so sinh vien max : ";
	//cin >> x.so_svmax;
	//gotoXY(50, 14);
	//cout << "Nhap so sinh vien min : ";
	//cin >> x.so_sv_min;
	///// con tro ds sv						
	//MenuDS(x.DSSVDK);  //ds sinh vien dung contro dang ky

	//ThemNodeVaoCay(t.root, x);
	//t.soLuong++;
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
	gotoXY(toadoXBox, toadoYMain);
	cout << "Nhap Ma Lop(0:De Thoat): ";
	gotoXY(toadoXBox + 25, toadoYMain);
	XuLyNhapSo(malop, toadoXBox + 25);
	ShowCur(0);
	if (malop == 0)
	{
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
		XoaNode(t.root, malop);
		t.soLuong--;

	}
}



void SuaLopTC(DSLopTC& t, DSMonHoc dsMH)
{
	/*gotoXY(50, 8);
	cout << "Ban muon xem thong tin lop tin chi nao : ";
	int x;
	cin >> x;
	TimKiem(t.root, x);*/

	ShowCur(1);
	int malop = 0;
	gotoXY(toadoXBox, toadoYMain);
	cout << "Nhap Ma Lop(0:De Thoat): ";
	gotoXY(toadoXBox + 25, toadoYMain);
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
			else if (i == toadoX + 10 || i == toadoX + 30 || i == toadoX + 50 || i == toadoX + 80 || i == toadoX + 85)
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


// xuat dssv da dk lop TC 
void XuatSVDKtheoNK(DSSV dsSV, NodeLopTC* t, int toadoX, int toadoY, int hocKi, int nhom, string nienKhoa, string maMH, int& dem)
{
	if (t->data.hocki == hocKi && t->data.mmh == maMH && t->data.nhom == nhom && t->data.nienkhoa == nienKhoa)
	{
		for (NodeSVDK* k = t->data.dssvdk.pHead; k != NULL; k = k->pNext) //dsLopTC.data[i]->dssvdk.pHead
		{
			NodeSV* temp = getSV(dsSV, k->data.masv);
			if (temp == NULL)
			{
				continue;
			}

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
			dem++;
		}
	}
	XuatSVDKtheoNK(dsSV, t->pRight, toadoX, toadoY, hocKi, nhom, nienKhoa, maMH, dem);
	XuatSVDKtheoNK(dsSV, t->pLeft, toadoX, toadoY, hocKi, nhom, nienKhoa, maMH, dem);
}
void XuatDSSV(DSSV dsSV, DSLopTC& dsLopTC, int toadoX, int toadoY, int hocKi, int nhom, string nienKhoa, string maMH, int& dem)
{
	XoaManHinhChinh();
	XuatSVDKtheoNK(dsSV, dsLopTC.root, toadoX, toadoY, hocKi, nhom, nienKhoa, maMH, dem);


}
void InDSSV(DSSV dsSV, DSLopTC& dslop, int toadoX, int toadoY)
{
	int  HK, nhom;

	string maMonHoc, nienKhoa;

	int toadoYtemp = toadoYMain;
	ShowCur(1);
	gotoXY(toadoXBox, toadoYtemp);
	cout << "Nhap Nien Khoa(0:De Thoat): ";
	gotoXY(toadoXBox + 27, toadoYtemp++);
	getline(cin, nienKhoa);
	if (nienKhoa == "0")
	{
		ShowCur(0);
		return;
	}
	gotoXY(toadoXBox, toadoYtemp);
	cout << "Nhap Hoc Ki(0:De Thoat): ";
	gotoXY(toadoXBox + 27, toadoYtemp++);
	XuLyNhapSo(HK, toadoXBox + 17);
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
	gotoXY(toadoXBox, toadoYtemp++);
	cout << "Nhap Ma Mon Hoc(0:De Thoat): ";
	getline(cin, maMonHoc);
	if (maMonHoc == "0")
	{
		ShowCur(0);
		return;
	}
	ShowCur(0);

	int n = 0;
	XuatDSSV(dsSV, dslop, toadoX, toadoY, HK, nhom, nienKhoa, maMonHoc, n);
	GiaoDienInDSLop(toadoX, toadoY, n);
	getch();
}


void XuatSVDKTest(DSSV dsSV, int toadoX, int toadoY)
{
	XoaManHinhChinh();
	int dem = 0;
	for (NodeSV* k = dsSV.pHead; k != NULL; k = k->pNext)
	{



		//gotoXY(toadoX + 1, toadoY + 4 + (dem * 2));
		//cout << CanDeuChuoi(ChuyenSoSangString(t->data.malopTc), 9);
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
		if (k->data.mssv == maSV)
		{
			return false;
		}
	}

	return true;
}

void ThemSinhVienTheoThuTu(DSSV &dsSV, NodeSV* p)
{
	for (NodeSV* k = dsSV.pHead; k != NULL; k = k->pNext)
	{
		if (p->data.malop == k->data.malop)
		{
			if (p->data.mssv >k->data.mssv && (p->data.malop == k->pNext->data.malop && p->data.mssv < k->pNext->data.mssv) )
			{
				Them_NODE_p_Vao_Sau_NODE_q(dsSV.pHead, p, k);
				break;
			}
			else if (p->data.mssv > k->data.mssv  && p->data.malop < k->pNext->data.malop)

			{
				Them_NODE_p_Vao_Sau_NODE_q(dsSV.pHead, p, k);
				break;
			}
			else if (p->data.malop == k->data.malop && p->data.mssv < k->data.mssv)
			{
				ThemDau(dsSV.pHead, p);
			}
		}
	}
}


void NhapSVLop(DSSV& dsSV)
{
	ShowCur(1);
	int toadoY = toadoYMain;
	string maLop;

	gotoXY(toadoXBox, toadoY);
	cout << "Nhap Vao Ma Lop(0:De Thoat):";
	gotoXY(toadoXBox + 30, toadoY++);
	XuLyNhapMa(maLop);

	if (maLop == "0")
	{
		return;
	}

	int i = 1;
	while (true)
	{
		toadoY = toadoYMain;
		XoaManHinhChinh();
		gotoXY(toadoXBox, toadoY++);
		cout << "Ma Lop: " << maLop;
		gotoXY(toadoXBox, toadoY++);
		cout << "Nhap Vao SV Thu " << i++;
		SinhVien sv;
		sv.malop = maLop;

		gotoXY(toadoXBox, toadoY);
		cout << "Nhap Vao Ma SV(0:De Thoat):";
		gotoXY(toadoXBox + 27, toadoY++);
		XuLyNhapMa(sv.mssv);
		if (sv.mssv == "0")
		{
			break;
		}
		else if (!checkMaSV(dsSV, sv.mssv))
		{
			GiaoDienThongBao("Ma SV Trung");
			return;
		}


		int phai = 0;
		gotoXY(toadoXBox, toadoY++);
		cout << "Nhap Vao Ho Va Ten Lot:";
		getline(cin, sv.ho);

		gotoXY(toadoXBox, toadoY++);
		cout << "Nhap Vao Ten:";
		getline(cin, sv.ten);

		gotoXY(toadoXBox, toadoY);
		cout << "Nhap Vao Phai(1:nam 2:nu):";
		gotoXY(toadoXBox + 27, toadoY++);
		XuLyNhapSo(phai, toadoXBox + 27);

		if (phai == 1)
		{
			sv.phai = "Nam";
		}
		sv.phai = "Nu";

		gotoXY(toadoXBox, toadoY);
		cout << "Nhap Vao SDT:";
		gotoXY(toadoXBox + 17, toadoY++);
		XuLyNhapMa(sv.sdt);
		gotoXY(toadoXBox, toadoY++);
		cout << "Nhap nam nhap hoc : ";
		XuLyNhapSo(sv.namnhaphoc);
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
	gotoXY(toadoXBox, toadoYMain);
	cout << "Nhap Vao Ma SV(0:Thoat):";
	gotoXY(toadoXBox + 30, toadoYMain);
	XuLyNhapMa(maSV);
	ShowCur(0);

	if (maSV == "0")
	{
		return;
	}
	else if (checkMaSV(dsSV, maSV))
	{
		GiaoDienThongBao("Ma Sinh Vien Khong Ton Tai");
	}


	if (dsSV.pHead->data.mssv == maSV)
	{
		NodeSV* temp = dsSV.pHead;
		dsSV.pHead = dsSV.pHead->pNext;
		delete temp;
		return;
	}

	for (NodeSV* k = dsSV.pHead->pNext; k != NULL; k = k->pNext)
	{

		NodeSV* temp = dsSV.pHead;
		for (NodeSV* k = dsSV.pHead->pNext; k != NULL; k = k->pNext)
		{
			if (k->data.mssv == maSV)
			{
				temp->pNext = k->pNext;
				delete k;
				return;
			}
			temp = k;
		}
	}


}

void MenuSua(SinhVien sv)
{
	int toadoY = toadoYMain;
	gotoXY(toadoXBox, toadoY++);
	cout << "Chon thuoc tinh can sua:" << endl;
	gotoXY(toadoXBox, toadoY++);
	cout << "1.Ho: " << sv.ho << endl;
	gotoXY(toadoXBox, toadoY++);
	cout << "2.Ten: " << sv.ten << endl;
	gotoXY(toadoXBox, toadoY++);
	cout << "3.Phai:" << sv.phai << endl;
	gotoXY(toadoXBox, toadoY++);
	cout << "4.SDT: " << sv.sdt << endl;
	gotoXY(toadoXBox, toadoY++);
	cout << "5.Nam nhap hoc : " << sv.namnhaphoc << endl; 
	gotoXY(toadoXBox, toadoY++);
	cout << "6.Luu va Thoat" << endl;
	gotoXY(toadoXBox, toadoY++);
	cout << "7.Thoat" << endl;
	gotoXY(toadoXBox, toadoY);
	cout << "Chon:";
	gotoXY(toadoXBox + 5, toadoY);
}


void SuaSVLop(DSSV& dsSV)
{
	string maSV;
	ShowCur(1);
	gotoXY(toadoXBox, toadoYMain);
	cout << "Nhap Vao Ma SV(0:Thoat):";
	gotoXY(toadoXBox + 30, toadoYMain);
	XuLyNhapMa(maSV);
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
		return;
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
			
		case 5 :
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


//
