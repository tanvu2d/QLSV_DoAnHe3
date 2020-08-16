#include "chucNang.h"
#include "SaveFile.h"
//int pointer = 7;
string strMNMain[] = {
	"1.Mo lop tin chi                                        ",
	"2.Xuat danh sach sinh vien theo nien khoa,HK,ma MH,nhom ",
	"3.Nhap sinh vien                                        ",
	"4.In danh sach sinh vien cua 1 lop (dua vao ma lop)     ",
	"5.Them mon hoc                                          " ,
	"6.In danh sach mon hoc tang dan theo ten mon hoc        " ,
	"7.Dang ky lop tin chi                                   ",
	"8.Nhap diem                                             ",
	"9.In bang diem mon hoc cua 1 lop tin chi                ",
	"10.In bang diem trung binh cua 1 lop theo so tin chi    ",
	"11.Ket thuc chuong trinh                                "
};


//

string menuConLopTC[] = {

	"Them Lop tin chi           ",
	"Xoa lop tin chi            ",
	"Hieu chinh lop tin chi     ",
	"LUU va THOAT               "
};


string stringNhapSV[] = {
	"Them sinh vien             " ,
	"Xoa sinh vien              ",
	"Sua thong tin sinh vien    ",
	"LUU va THOAT               "
};

string menuMH[] = {

	"Them mon hoc               ",
	"Xoa mon hoc                ",
	"Hieu chinh mon hoc         ",
	"LUU va THOAT               "
};

// Chay vong lap bang chon
void Menu()
{
	//textcolor(240);
	//HCNText(toadoXBox + 27, toadoYBox, 60, 25);

	int j = 7;
	for (int i = 0; i < sizeof(strMNMain) / sizeof(*strMNMain); i++)
	{

		gotoXY(48, j++);
		cout << strMNMain[i];
	}
}
void menuNhapSV()
{
	int j = 7;
	for (int i = 0; i < sizeof(stringNhapSV) / sizeof(*stringNhapSV); i++)
	{
		gotoXY(60, j++);
		cout << stringNhapSV[i];
	}
}

void menuMoLopTC()
{
	int j = 7;
	for (int i = 0; i < sizeof(menuConLopTC) / sizeof(*menuConLopTC); i++)
	{
		gotoXY(60, j++);
		cout << menuConLopTC[i];
	}
}
void menuMonHoc()
{
	int j = 7;
	for (int i = 0; i < sizeof(menuMH) / sizeof(*menuMH); i++)
	{
		gotoXY(60, j++);
		cout << menuMH[i];
	}
}
//////


void RunMenu(DSLopTC& dsLopTC, DSMonHoc& dsMonHoc, DSSV& dsSV , int a[] , int soLuong) 		// DSLTC& dsLopTC, DSSV &dsSV,DSMH& dsMH
{

	if (kbhit())
	{

		char c = getch(); // lay phim tu ban phim
		if (c == -32)
		{
			c = getch();
			if (c == 72)//len
			{
				if (pointer == 7)
				{
					Menu();
					pointer = 7 - 1 + sizeof(strMNMain) / sizeof(*strMNMain);
				}
				else
				{
					Menu();
					pointer--;
				}
			}
			else if (c == 80) //ma ascii mui ten xuong
			{
				if (pointer == 7 - 1 + sizeof(strMNMain) / sizeof(*strMNMain))
				{
					Menu();
					pointer = 7;
				}
				else
				{
					Menu();
					pointer++;
				}
			}
		}



		else if (c == 13) // Bam enter
		{
			XoaManHinhChinh();
			HCNText(toadoXBox + 27, 5, 65, 15);
			switch (pointer)
			{
			case 7:
				//textcolor(180);
				gotoXY(60, pointer);
				menuMoLopTC();
				gotoXY(52, pointer - 1);
				textcolor(0xE);
				cout << "Vua chon chuc nang QUAN LI LOP TIN CHI ";

				//       Sleep (1000);

				while (true)
				{

					if (kbhit())
					{
						char c = getch();
						if (c == -32) // enter
						{
							c = getch();
							if (c == 72)//len
							{
								if (pointer == 7)
								{
									menuMoLopTC();
									pointer = 7 - 1 + sizeof(menuConLopTC) / sizeof(*menuConLopTC);
								}
								else
								{
									menuMoLopTC();
									pointer--;
								}
							}
							else if (c == 80) // mã ascii mui tên xu?ng
							{
								if (pointer == 7 - 1 + sizeof(menuConLopTC) / sizeof(*menuConLopTC))
								{
									menuMoLopTC();
									pointer = 7;
								}
								else
								{
									menuMoLopTC();
									pointer++;
								}
							}

						}

						else if (c == 13)
						{
							XoaManHinhChinh();
							switch (pointer)
							{
							case 7:
								themLopTCa(dsLopTC, dsMonHoc,a,soLuong);
								
								break;
								//DONE
							case 8:
								XoaLopTC(dsLopTC);
								//DONE
								break;
							case 9:
								SuaLopTC(dsLopTC, dsMonHoc);
								//DONE
								break;
							case 10:
								//Save(dsSV, dsMH, dsLopTC);
								//DeleteMemory(dsSV, dsMH, dsLopTC);
								SaveLopTC(dsLopTC);
								pointer = 7;
								goto VONGLAP;
								//DONE
							}

							system("cls");
							GiaoDienMain();
							menuMoLopTC();
						}
					}
					ShowCur(0);
					textcolor(180);
					gotoXY(60, pointer);
					cout << menuConLopTC[pointer - 7];
					textcolor(7);
				}
			case 8:
				XoaManHinhChinh();
				InDSSV(dsSV, dsLopTC, dsMonHoc, 0, 5);
				break;
			case 9:
				pointer = 7;
				gotoXY(60, pointer);
				menuNhapSV();
				gotoXY(55, pointer - 1);
				textcolor(0xE);
				cout << "Vua chon chuc nang nhap sinh vien ";
				//       Sleep (1000); 

				while (true)
				{

					if (kbhit())
					{
						char c = getch();
						if (c == -32)  // phim
						{
							c = getch();
							if (c == 72)//len
							{
								if (pointer == 7)
								{
									menuNhapSV();
									pointer = 7 - 1 + sizeof(stringNhapSV) / sizeof(*stringNhapSV);
								}
								else
								{
									menuNhapSV();
									pointer--;
								}
							}
							else if (c == 80) // mã ascii mui tên xu?ng
							{
								if (pointer == 7 - 1 + sizeof(stringNhapSV) / sizeof(*stringNhapSV))
								{
									menuNhapSV();
									pointer = 7;
								}
								else
								{
									menuNhapSV();
									pointer++;
								}
							}
						}

						else if (c == 13)
						{
							XoaManHinhChinh();
							switch (pointer)
							{
							case 7:
								NhapSVLop(dsSV);
								break;
								//Nhap chua them vao ds
							case 8:
								XoaSVLop(dsSV);
								break;
							case 9:
								SuaSVLop(dsSV);
								break;
							case 10:
								pointer = 7;
								SaveSV(dsSV);
								goto VONGLAP;

							}

							system("cls");

							GiaoDienMain();
							menuNhapSV();

						}  // enter 


					}
					ShowCur(0);
					// to mau 
					textcolor(180);
					gotoXY(60, pointer);
					cout << stringNhapSV[pointer - 7];
					textcolor(7);

				}

				break;
			case 10:
				XoaManHinhChinh();

				XuatDSSV1Lop(dsSV, 0, 5);
				//LOAD và SAVE bị lỗi
				//do hoa DONE
				break;

			case 11:  // mon hoc
				pointer = 7;
				gotoXY(60, pointer);
				menuMonHoc();
				gotoXY(55, pointer - 1);
				textcolor(0xE);
				cout << "Vua chon chuc nang QUAN LI MON HOC "; //
				//       Sleep (1000);
				while (true)
				{
					if (kbhit())
					{
						char c = getch();
						if (c == -32) // enter
						{
							c = getch();
							if (c == 72)//len
							{
								if (pointer == 7)
								{
									menuMonHoc();
									pointer = 7 - 1 + sizeof(menuMH) / sizeof(*menuMH);
								}
								else
								{
									menuMonHoc();
									pointer--;
								}
							}
							else if (c == 80) // mã ascii mui tên xu?ng
							{
								if (pointer == 7 - 1 + sizeof(menuMH) / sizeof(*menuMH))
								{
									menuMonHoc();
									pointer = 7;
								}
								else
								{
									menuMonHoc();
									pointer++;
								}
							}
						}

						else if (c == 13)
						{
							XoaManHinhChinh();
							switch (pointer)
							{
							case 7:
								themMonHoc(dsMonHoc, toadoXBox + 8, toadoYBox);
								break;
								//DONE
							case 8:
								xoaMonHoc(dsMonHoc);
								break;
								//DONE
							case 9:
								chinhsuaMH(dsMonHoc);
								break;
								//DONE
							case 10:
								pointer = 7;
								GhiFileMonHoc(dsMonHoc);
								goto VONGLAP;
							}

							system("cls");

							GiaoDienMain();
							menuMonHoc();

						}  // enter 


					}
					ShowCur(0);
					// to mau 
					textcolor(180);
					gotoXY(60, pointer);
					cout << menuMH[pointer - 7];
					textcolor(7);

				}
				break;
		
			case 12:
				XoaManHinhChinh();

				xuatMonHoc(dsMonHoc, toadoXBox + 5, toadoYBox);
				getch();
				//DONE
				break;
			case 13:
				XoaManHinhChinh();
				DangKiLopTC(dsSV, dsLopTC, dsMonHoc, toadoXBox, 7);
				//DONE
				SaveLopTC(dsLopTC);
				break;
			case 14:
				XoaManHinhChinh();
				NhapDiem(dsSV, dsLopTC, dsMonHoc, toadoXBox, 7);
				//DONE
				SaveLopTC(dsLopTC);
				break;
			case 15 :
				XoaManHinhChinh();
				InBangDiemCuaLopTC(dsSV, dsLopTC, dsMonHoc, toadoXBox, 7);
				//DONE
				break;
			case 16 : 
				InDiemTBCuaLopTheoTC(dsSV, dsLopTC, dsMonHoc, toadoXBox, 7);
				//DONE
				break;
			case 17:
				
				exit(0);

			}
		VONGLAP:
			system("cls");
			GiaoDienMain();
			Menu();
		}
	}


	ShowCur(0);
	// to mau 
	textcolor(180);
	gotoXY(48, pointer);
	cout << strMNMain[pointer - 7];
	textcolor(7);
}

