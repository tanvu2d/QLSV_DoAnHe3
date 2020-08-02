#include "XULY.h"

//  cau a  
void themLopTC(DSLopTC& t, DSMonHoc dsMH)
{
	string maMH;
	string nienKhoa;

	int toadoY = toadoYMain;
	LopTC x;
	gotoXY(toadoXBox, toadoY++);
	cout << "Nhap ma lop tin chi ";
	ShowCur(1);
	cin >> x.malopTc;
	cin.ignore();
	int i;
	do {
		i = 0;
		maMH = "";
		gotoXY(toadoXBox, toadoY);
		cout << "Nhap Ma Mon Hoc(0:De Thoat):";
		gotoXY(toadoXBox + 30, toadoY++);
		XuLyNhapMa(maMH);
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
	/*gotoXY(toadoXBox, toadoY);
	cout << "Nhap Nien Khoa : ";
	gotoXY(toadoXBox + 17, toadoY++);
	cin.ignore();
	getline(cin, x.nienkhoa);*/

	do
	{
		nienKhoa = "";
		gotoXY(toadoXBox, toadoY);
		cout << "Nhap Nien Khoa : ";
		gotoXY(toadoXBox + 17, toadoY++);
		XuLyNhapNienKhoa(nienKhoa);
		if (nienKhoa == "0")
		{
			ShowCur(0);
			return;
		}
		if (!XetNienKhoa(nienKhoa))
		{
			gotoXY(toadoXBox, toadoY++);
			cout << "Nhap nien khoa sai ! Nhap lai ";
		}

	} while (XetNienKhoa(nienKhoa) == false);
	x.nienkhoa = nienKhoa;


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
		GiaoDienThongBao("          Xoa thanh cong lop " + malop);
		XoaNode(t.root, malop);
		t.soLuong--;
		return;

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
		}
		XuatSVDKtheoNK(dsSV, t->pRight, toadoX, toadoY, hocKi, nhom, nienKhoa, maMH, dem);
		XuatSVDKtheoNK(dsSV, t->pLeft, toadoX, toadoY, hocKi, nhom, nienKhoa, maMH, dem);
	}
}
void XuatDSSV(DSSV dsSV, DSLopTC& dsLopTC, int toadoX, int toadoY, int hocKi, int nhom, string nienKhoa, string maMH, int& dem)
{
	XoaManHinhChinh();
	XuatSVDKtheoNK(dsSV, dsLopTC.root, toadoX, toadoY, hocKi, nhom, nienKhoa, maMH, dem);


}
void InDSSV(DSSV dsSV, DSLopTC& dslop, DSMonHoc dsMH, int toadoX, int toadoY)
{
	int  HK, nhom, i;

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


	} while (i == -1);
	ShowCur(0);

	int n = 0;
	XuatDSSV(dsSV, dslop, toadoX, toadoY, HK, nhom, nienKhoa, maMH, n);
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

void ThemSinhVienTheoThuTu(DSSV& dsSV, NodeSV* p)
{
	for (NodeSV* k = dsSV.pHead; k != NULL; k = k->pNext)
	{
		if (p->data.malop == k->data.malop)
		{
			if (p->data.mssv > k->data.mssv && (p->data.malop == k->pNext->data.malop && p->data.mssv < k->pNext->data.mssv))
			{
				Them_NODE_p_Vao_Sau_NODE_q(dsSV.pHead, p, k);
				break;
			}
			else if (p->data.mssv > k->data.mssv&& p->data.malop < k->pNext->data.malop)

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
	gotoXY(toadoXBox + 30, toadoY);
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

		do
		{
			gotoXY(toadoXBox, toadoY);
			cout << "Nhap Vao SDT:";
			gotoXY(toadoXBox + 17, toadoY++);
			XuLyNhapSDT(sv.sdt);
			if (sv.sdt.length() < 10)
			{
				gotoXY(toadoXBox, toadoY++);
				cout << "Sai dinh dang sdt ! Nhap lai:";
			}
		} while (sv.sdt.length() < 10);

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
	SortArr(sv, n);
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
	gotoXY(toadoXBox, toadoYMain);
	cout << "Nhap Vao Ma Lop(0:De Thoat):";
	gotoXY(toadoXBox + 30, toadoYMain);
	XuLyNhapMa(maLop);
	ShowCur(0);
	if (maLop == "0")
	{
		return;
	}

	SinhVien sv[500];
	int n = 0;

	for (NodeSV* k = dsSV.pHead; k != NULL; k = k->pNext)
	{
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


int XuatDSLTCDK(LopTC a[], DSMonHoc dsMH, int n, int toadoX, int toadoY, LopTC b[], int soLuongLopTCdaDK, bool& kiemTraThem)
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
				//XoaManHinhChinh();
				/*switch (pointer1)
				{
				case 1:
					cout << "cccccccccccccccccccccccc";
					break;
				case 2:

					break;

				case 25:

					exit(0);

				}*/

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
					return -4;
				}

				//system("cls");

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
	/*gotoXY(toadoXBox, toadoY + 4 + (dem * 2));
	ShowCur(1);
	cout << "Chon Lop Bang STT(0:De Thoat):";
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
	return a[chose - 1].malopTc;*/
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

void SinhVienDKLopTC(NodeLopTC* t, DSLopTC dsLTC, int maLopTC, string maSV, string nienKhoa, int hocki)

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
		toadoYTemp = toadoYMain;
		gotoXY(toadoXBox, toadoYTemp);
		cout << "Nhap Vao Ma SV (0: De Thoat):";
		gotoXY(toadoXBox + 30, toadoYTemp++);
		XuLyNhapMa(maSV);
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

	gotoXY(toadoXBox + 10, toadoYTemp++);
	cout << "Thong Tin Sinh Vien";
	gotoXY(toadoXBox, toadoYTemp++);
	cout << "Ma Sinh Vien :" << maSV;
	gotoXY(toadoXBox, toadoYTemp++);
	cout << "Ho Va Ten Sinh Vien :" << k->data.ho + " " + k->data.ten;
	gotoXY(toadoXBox, toadoYTemp++);
	cout << "Phai :" << k->data.phai;
	gotoXY(toadoXBox, toadoYTemp++);
	cout << "SDT :" << k->data.sdt;
	gotoXY(toadoXBox, toadoYTemp++);
	cout << "Vui Long Kiem Tra Thong Tin";
	getch();

	ShowCur(1);
	XoaManHinhChinh();
	toadoYTemp = toadoYMain;
	toadoYTemp = toadoYTemp + 2;
	do
	{
		nienKhoa = "";
		gotoXY(toadoXBox, toadoYTemp);
		cout << "Nhap Nien Khoa : ";
		gotoXY(toadoXBox + 17, toadoYTemp++);
		XuLyNhapNienKhoa(nienKhoa);
		if (nienKhoa == "0")
		{
			ShowCur(0);
			return;
		}
		if (!XetNienKhoa(nienKhoa))
		{
			gotoXY(toadoXBox, toadoYTemp++);
			cout << "Nhap nien khoa sai ! Nhap lai ";
		}

	} while (XetNienKhoa(nienKhoa) == false);

	gotoXY(toadoXBox, toadoYTemp);
	cout << "Nhap Vao Hoc Ki (0: De Thoat)   :";
	gotoXY(toadoXBox + 35, toadoYTemp);
	XuLyNhapSo(hocki, toadoXBox + 35);

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

		DSlopTCTrong(dsLTC.root, dsLTC, a, nienKhoa, hocki, maSV, n);

		if (n == 0 && soLuongLopTCDK == 0)
		{
			GiaoDienThongBao("Chua Co Lop Nao De Dang Ki");
			return;
		}

		int maLTC = XuatDSLTCDK(a, dsMH, n, toadoX, toadoY, lopTCsvDaDK, soLuongLopTCDK, kiemtraThem);

		if (kiemtraThem == true && maLTC == -4)
		{
			return;
		}
		else  if (kiemtraThem == true)
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
		else if (kiemtraThem == false)
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

	}
}

