#include "doHoa.h" 



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

// hÃ m thÃªm node p vÃ o sau node q trong danh sÃ¡ch
//void chuanhoaChu(string& a) {
//	//ki tu dau
//	while (a[0] == ' ') {
//		a.erase(a.begin() + 0);
//	}
//	//cuoi
//	while (a[a.length() - 1] == ' ') {
//		a.erase(a.begin() + a.length() - 1);
//	}
//	//giua
//	for (int i = 0; i < a.length(); i++) {
//		if (a[i] == ' ' && a[i + 1] == ' ') {
//			a.erase(a.begin() + i);
//			i--;
//		}
//	}
//
//	transform(a.begin(), a.end(), a.begin(), ptr_fun<int, int>(toupper));
//}

// hÃ m xÃ³a node dau danh sÃ¡ch
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
//hÃ m thÃªm node p vÃ o dau danh sach

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

// menu danh sach lien ket don 

//void MenuDS(NodeSV* pHead)
//{
//	int luachon;
//	while (true)
//	{
//		system("cls");
//		cout << "\n\n\t\t ========= MENU =========";
//		cout << "\n1. Them phan tu vao dau";
//		cout << "\n2. Xuat danh sach lien ket don";
//		cout << "\n3. Them NODE p vao sau NODE q";
//		cout << "\n4. Them NODE p vao truoc NODE q";
//		cout << "\n5. Xoa dau";
//		cout << "\n6. Xoa cuoi";
//		cout << "\n0. Thoat";
//		cout << "\n\n\t\t =========  END =========";
//
//		cout << "\nNhap lua chon: ";
//		cin >> luachon;
//
//		if (luachon == 1)
//		{
//			SinhVien x ;
//			
//			fflush(stdin) ;
//			cout << "\nNhap mssv : " ;
//			getline(cin,x.mssv) ;
//			cout << "\nNhap ho : " ;
//			getline(cin,x.ho) ;
//			cout << "\nNhap ten : " ;
//			getline(cin ,x.ten) ;
//			cout<< "Nhap phai : " ;
//			getline(cin,x.phai) ;
//			cout <<"\nNhap so dien thoai :" ;
//			getline(cin,x.sdt) ;
//			cout <<"\n Nhap ma lop : " ;
//			getline(cin ,x.malop);		
//			fflush(stdin);	
//			cout <<"\nNhap nam hoc : " ;
//			cin >> x.namnhaphoc ;
//			
//			
//			NodeSV* p = KhoiTaoNode(x);
//			ThemDau(pHead, p);
//		}
//		else if (luachon == 2)
//		{
//			cout << "\n\n\t\t DANH SACH LIEN KET DON     menu111\n";
//			Xuat(pHead);
//			system("pause");
//		}
//		else if (luachon == 3)
//		{
//			break  ;
//		}
//	/*	else if (luachon == 3)
//		{
//			int x;
//			cout << "\nNhap vao data cua node q can tim trong danh sach: ";
//			cin >> x;
//			nodeSinhVien* q = KhoiTaoNode(x);
//
//			int y;
//			cout << "\nNhap vao data cua node p can them: ";
//			cin >> y;
//			NODE *p = KhoiTaoNode(y);
//			Them_NODE_p_Vao_Sau_NODE_q(pHead, p, q);
//		}
//		else if (luachon == 4)
//		{
//			int x;
//			cout << "\nNhap vao data cua node q can tim trong danh sach: ";
//			cin >> x;
//			NODE* q = KhoiTaoNode(x);
//
//			int y;
//			cout << "\nNhap vao data cua node p can them: ";
//			cin >> y;
//			NODE* p = KhoiTaoNode(y);
//			Them_NODE_p_Vao_Truoc_NODE_q(pHead, p, q);
//		}
//		else if (luachon == 5)
//		{
//			XoaDau(pHead);
//		}
//		else if (luachon == 6)
//		{
//			XoaCuoi(pHead);
//		}
//		*/
//		else
//		{
//			break;
//		}
//	}
//}

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
/*NODE* TimKiem(TREE t, int  data)
{

	if (t == NULL)
	{
		return NULL;
	}
	else
	{

		if (x < t->data)
		{
			TimKiem(t->pLeft, x);
		}
		else if (x > t->data)
		{
			TimKiem(t->pRight, x);
		}
		else // <=> t->data == x
		{
			return t;
		}
	}

}
*/
//xoa node bat ky 
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

/*void DuyetSave(DSlopTC *dsTC, ofstream &fileOut, ofstream &fileOut1)
{
	if (root == NULL)
	{
		return;
	}
	fileOut  <<

	DuyetSave(root->pLeft,fileOut);

	DuyetSave(root->pRight,fileOut);
}
*/
//void themLopTC (DSLopTC &t)
//{
//	LopTC x ;
//		
//			gotoXY(50,8) ;	
//			
//			cout << "Nhap ma lop tin chi : ";
//			cin >> x.malopTc ;
//			
//			
//			gotoXY(50,9) ;	
//			//fflush(stdin);
//			cin.ignore();	
//			cout << "Nhap ma mon hoc : " ;				
//			getline(cin,x.mmh) ;
//			gotoXY(50,10) ;
//			cout << "Nhap nien khoa: " ;
//			
//			getline(cin ,x.nienkhoa) ;
//			gotoXY(50,11) ;		
//			cout << "Nhap hoc ky : ";
//			cin >> x.hocki ; 
//			gotoXY(50,12) ;			
//			cout<<"Nhap nhom : " ;
//			cin >> x.nhom ;
//			gotoXY(50,13) ;
//			cout << "Nhap so sinh vien max : " ;
//			cin >> x.so_svmax ;
//			gotoXY(50,14) ;
//			cout <<"Nhap so sinh vien min : " ;
//			cin >>x.so_sv_min ;
//			/// con tro ds sv						
//			MenuDS(x.DSSVDK);  //ds sinh vien dung contro dang ky
//
// 			ThemNodeVaoCay(t.root, x);
// 			t.soLuong++ ;
//} 
//void XoaLopTC(DSLopTC &t )
//{
//	int x;
//				gotoXY(50, 8);
//				cout << "Nhap gia tri can xoa: ";
//				cin >> x;
//				XoaNode(t.root, x);
//				t.soLuong-- ;
//}
//
//void SuaLopTC(DSLopTC& t)
//{	
//				gotoXY(50, 8);
//				cout << "Ban muon xem thong tin lop tin chi nao : ";
//				int x ;
//				cin >> x ;
//				TimKiem(t.root,x) ;
//}
// menu TREE 
//void MenuTREE(DSLopTC &t)
//{
////	int luachon ;
//	while (true)
//	{
//		system("cls");
//		cout << "\n\n\t\t ============ MENU ============";
//		cout << "\n1. Them lop tin chi  ";
//		cout <<"\n2.Xuat cay nhi phan phan" ;
//		cout <<"\n3.Hieu chinh lop tin chi ";
//		cout << "\n4. Xoa lop tin chi  ";
//		cout <<"\n5.Xem thong tin lop tin chi "; 
//		
//		cout << "\n0. Thoat";
//		cout << "\n\n\t\t =============  END  =============";

	//	cout << "\nNhap lua chon: ";
	//	cin >> luachon;

//		if (luachon == 1)
//		{
//			LopTC x ;			
//			cout << "\nNhap ma lop tin chi : ";
//			cin >> x.malopTc ;
//			
//			fflush(stdin);			
//			cout << "\nNhap ma mon hoc : " ;
//					
//			getline(cin,x.mmh) ;
//			
//			cout << "\nNhap nien khoa: " ;
//			
//			getline(cin ,x.nienkhoa) ;
//					
//			cout << "\nNhap hoc ky : ";
//			cin >> x.hocki ; 			
//			cout<<"\nNhap nhom : " ;
//			cin >> x.nhom ;
//			cout << "\nNhap so sinh vien max : " ;
//			cin >> x.so_svmax ;
//			cout <<"\nNhap so sinh vien min : " ;
//			cin >>x.so_sv_min ;
//			/// con tro ds sv						
//			MenuDS(x.DSSVDK);  //ds sinh vien dung contro dang ky
//
// 			ThemNodeVaoCay(t.root, x);
// 			t.soLuong++ ;
//		}
//		else if (luachon == 2)
//		{
//			cout << "\n\t CAY NHI PHAN TIM KIEM\n";
//			cout <<"\n So luong node trong cay " << t.soLuong<<endl<<endl ;
//			NLR(t.root);
//			system("pause");
//		}
//		else if (luachon == 3)
//		{
//			cout << "\n Ban muon sua lop tin chi nao " ;
//			int x ;
//			cin >> x ;
//			hieuChinh (t.root , x) ;
//		}
//		else if (luachon == 4)
//		{
//			int x;
//			cout << "\nNhap gia tri can xoa: ";
//			cin >> x;
//			XoaNode(t.root, x);
//			t.soLuong-- ;
//		}
//		else if (luachon == 5)
//		{
//			cout << "\nBan muon xem thong tin lop tin chi nao : " ;
//			int x ;
//			cin >> x ;
//			 TimKiem(t.root,x) ;
//			
//		} 
//		else
//		{
//			break;
//		}
//		
//	}
//}

/// load file 

// ghi file 


//void DuyetSave(NodeLopTC *root, ofstream &fileOut, ofstream &fileOut1)
//{
//	
//	if (root == NULL)
//	{
//		return;
//	}
//	
//	fileOut << root->data.malopTc ;
//	fileOut << "," ;
//	fileOut <<root->data.mmh <<","<< root->data.nienkhoa<<","
//	<<root->data.hocki<<","<<root->data.nhom<<","<<root->data.so_svmax
//	<<","<<root->data.so_sv_min <<endl ;
//	
//	for (NodeSV *k = root->data.dssvdk.pHead; k!= NULL ; k= k->pNext)
//	{
//		fileOut1  << k->data.malop<<"," <<k->data.namnhaphoc <<","
//		<<k->data.mssv<<"," << k->data.ho <<"," << k->data.ten
//		<<","<<k->data.phai<<","<<k->data.sdt<<endl;
//	}
//	
//	DuyetSave(root->pLeft,fileOut,fileOut1);
//	DuyetSave(root->pRight,fileOut,fileOut1);
//}
//void SaveLopTinChi(DSLopTC dsLTC)
//{
//	ofstream fileOut ;
//	fileOut.open("outputLopTC.txt", ios::out);
//	ofstream fileOut1;
//	fileOut1.open("outputSV.txt", ios::out);
//	fileOut << dsLTC.soLuong <<endl;
//
//	DuyetSave(dsLTC.root, fileOut,fileOut1);
//
//	fileOut.close();
//	fileOut1.close() ;
//}


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


//void XuLyNhapMa(string& InPut)
//{
//	while (true)
//	{
//		char c = getch();
//		if ((c >= 48 && c <= 57) || c == '_' || (c >= 65 && c <= 90))
//		{
//			InPut.insert(InPut.begin() + InPut.length(), c);
//			cout << c;
//		}
//		else if (c >= 97 && c <= 122)
//		{
//			c = c - 32;
//			InPut.insert(InPut.begin() + InPut.length(), c);
//			cout << c;
//		}
//		else if (c == 8 && InPut.length() > 0)
//		{
//			InPut.erase(InPut.begin() + InPut.length() - 1);
//			cout << "\b";
//			cout << " ";
//			cout << "\b";
//		}
//		else if (c == 27)
//		{
//			InPut.clear();
//			return;
//		}
//		else if (c == 13 && InPut.length() > 0)// náº¿u lÃ  phÃ­m enter
//		{
//			break;
//		}
//	}
//}
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
//string ChuyenSoSangString(int n)
//{
//	string str;
//	int a;
//	if (n == 0)
//	{
//		str = "0";
//	}
//	while (n > 0)
//	{
//		a = n % 10;
//		Chuyen1SoSangKiTu(a);
//		str.insert(str.begin() + 0, Chuyen1SoSangKiTu(a));
//		n = n / 10;
//	}
//	return str;
//}
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
	if (so2 - so1 == 1)
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
		else if (c == 13 && InPut.length() > 0)//enter
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
//void xuatMonHoc(monHoc mh[], int n){
////	monHoc ds[MAXMH];
//	sortMH(mh, n);
//	for (int i=0 ; i<n; i++){
//		cout << "\t\t========MON HOC "<<i<< "========" << endl;
//		cout << "Ma mon hoc: " <<  mh[i].maMonHoc <<endl;
//		cout << "Ten Mon Hoc: " << mh[i].TenMH <<endl;
//		cout << "So tin chi ly thuyet: " << mh[i].sotclt<< endl;
//		cout << "So tin chi thuc hanh: " << mh[i].sotcth << endl;	
//	}
//	getch();
//}

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


/*void LoadMonHoc(DSMonHoc& dsMH)
{
	ifstream fileIn("inputMH.txt", ios::in);
	fileIn >> dsMH.n;
	fileIn.ignore();
	for (int i = 0; i < dsMH.n; i++)
	{
		dsMH.ds[dsMH.n++] = new monHoc;
		getline(fileIn, dsMH.ds[i]->maMonHoc, ',');
		fileIn.ignore();
		getline(fileIn, dsMH.ds[i]->TenMH, ',');
		fileIn.ignore();
		fileIn >> dsMH.ds[i]->sotclt;
		fileIn.ignore();
		fileIn >> dsMH.ds[i]->sotcth;
		fileIn.ignore();
	}
	fileIn.close();
}*/

//void BaoLoi (char *s){
//  int x=wherex() , y=wherey();
//  gotoxy (10,24);
//  cout <<s;
//  Sleep(4000);
//  gotoxy(10,24);
//  clreol();
//  gotoxy(x,y);
//}

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


void CheckTrungLopTinChi(NodeLopTC* t, string nienKhoa, int hocKi, int nhom, string maMH)
{
	if (t != NULL)
	{
		if (t->data.mmh == maMH && t->data.hocki == hocKi && t->data.nhom == nhom && t->data.nienkhoa == nienKhoa)
		{
			GiaoDienThongBao("Du Lieu Lop Da Ton Tai");
			return;
		}
		CheckTrungLopTinChi(t->pLeft, nienKhoa, hocKi, nhom, maMH);
		CheckTrungLopTinChi(t->pRight, nienKhoa, hocKi, nhom, maMH);
	}


}