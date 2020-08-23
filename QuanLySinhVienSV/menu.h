#include "chucNang.h"
#include "SaveFile.h"
//int pointer = 7;
string strMNMain[] = {
	"1. Mo lop tin chi                                      ",
	"2. Xuat DSSV theo Nien Khoa, Hoc Ki, Ma Mon Hoc, Nhom  ",
	"3. Nhap Sinh Vien                                      ",
	"4. In DSSV cua mot lop (dua vao Ma Lop)                ",
	"5. Them Mon Hoc                                        " ,
	"6. In danh sach mon hoc tang dan theo ten mon hoc      " ,
	"7. Dang ky Lop Tin Chi                                 ",
	"8. Nhap Diem                                           ",
	"9. In bang diem mon hoc cua mot Lop Tin Chi            ",
	"10.In bang diem trung binh cua mot lop theo so tin chi ",
	"11.Ket thuc chuong trinh                               "
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
	int j = 9;
	for (int i = 0; i < sizeof(strMNMain) / sizeof(*strMNMain); i++)
	{
		gotoXY(48, j++);
		cout << strMNMain[i];
	}
}
void menuNhapSV()
{
	int j = 9;
	for (int i = 0; i < sizeof(stringNhapSV) / sizeof(*stringNhapSV); i++)
	{
		gotoXY(60, j++);
		cout << stringNhapSV[i];
	}
}

void menuMoLopTC()
{
	int j = 9;
	for (int i = 0; i < sizeof(menuConLopTC) / sizeof(*menuConLopTC); i++)
	{
		gotoXY(60, j++);
		cout << menuConLopTC[i];
	}
}
void menuMonHoc()
{
	int j = 9;
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
				if (pointer == 9)
				{
					Menu();
					pointer = 9 - 1 + sizeof(strMNMain) / sizeof(*strMNMain);
				}
				else
				{
					Menu();
					pointer--;
				}
			}
			else if (c == 80) //ma ascii mui ten xuong
			{
				if (pointer == 9 - 1 + sizeof(strMNMain) / sizeof(*strMNMain))
				{
					Menu();
					pointer = 9;
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
			case 9:
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
								if (pointer == 9)
								{
									menuMoLopTC();
									pointer = 9 - 1 + sizeof(menuConLopTC) / sizeof(*menuConLopTC);
								}
								else
								{
									menuMoLopTC();
									pointer--;
								}
							}
							else if (c == 80) // mã ascii mui tên xu?ng
							{
								if (pointer == 9 - 1 + sizeof(menuConLopTC) / sizeof(*menuConLopTC))
								{
									menuMoLopTC();
									pointer = 9;
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
							case 9:
								themLopTCa(dsLopTC, dsMonHoc,a,soLuong);
								
								break;
								//DONE
							case 10:
								XoaLopTC(dsLopTC);
								//DONE
								break;
							case 11:
								SuaLopTC(dsLopTC, dsMonHoc);
								//DONE
								break;
							case 12:
								//Save(dsSV, dsMH, dsLopTC);
								//DeleteMemory(dsSV, dsMH, dsLopTC);
								SaveLopTC(dsLopTC);
								pointer = 9;
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
					cout << menuConLopTC[pointer - 9];
					textcolor(7);
				}
			case 10:
				XoaManHinhChinh();
				InDSSV(dsSV, dsLopTC, dsMonHoc, 12, 8);
				break;
			case 11:
				pointer = 9;
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
								if (pointer == 9)
								{
									menuNhapSV();
									pointer = 9 - 1 + sizeof(stringNhapSV) / sizeof(*stringNhapSV);
								}
								else
								{
									menuNhapSV();
									pointer--;
								}
							}
							else if (c == 80) // mã ascii mui tên xu?ng
							{
								if (pointer == 9 - 1 + sizeof(stringNhapSV) / sizeof(*stringNhapSV))
								{
									menuNhapSV();
									pointer = 9;
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
							case 9:
								NhapSVLop(dsSV);
								break;
								//Nhap chua them vao ds
							case 10:
								XoaSVLop(dsSV);
								break;
							case 11:
								SuaSVLop(dsSV);
								break;
							case 12:
								pointer = 9;
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
					cout << stringNhapSV[pointer - 9];
					textcolor(7);

				}

				break;
			case 12:
				XoaManHinhChinh();

				XuatDSSV1Lop(dsSV, 0, 5);
				//LOAD và SAVE bị lỗi
				//do hoa DONE
				break;

			case 13:  // mon hoc
				pointer = 9;
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
								if (pointer == 9)
								{
									menuMonHoc();
									pointer = 9 - 1 + sizeof(menuMH) / sizeof(*menuMH);
								}
								else
								{
									menuMonHoc();
									pointer--;
								}
							}
							else if (c == 80) // mã ascii mui tên xu?ng
							{
								if (pointer == 9 - 1 + sizeof(menuMH) / sizeof(*menuMH))
								{
									menuMonHoc();
									pointer = 9;
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
							case 9:
								themMonHoc(dsMonHoc, toadoXBox + 8, toadoYBox);
								break;
								//DONE
							case 10 :
								xoaMonHoc(dsMonHoc);
								break;
								//DONE
							case 11:
								chinhsuaMH(dsMonHoc);
								break;
								//DONE
							case 12:
								pointer = 9;
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
					cout << menuMH[pointer - 9];
					textcolor(7);

				}
				break;
		
			case 14:
				XoaManHinhChinh();

				xuatMonHoc(dsMonHoc, toadoXBox + 10, toadoYBox);
				getch();
				//DONE
				break;
			case 15:
				XoaManHinhChinh();
				DangKiLopTC(dsSV, dsLopTC, dsMonHoc, toadoXBox, 7);
				//DONE
				SaveLopTC(dsLopTC);
				break;
			case 16:
				XoaManHinhChinh();
				NhapDiem(dsSV, dsLopTC, dsMonHoc, toadoXBox, 7);
				//DONE
				SaveLopTC(dsLopTC);
				break;
			case 17 :
				XoaManHinhChinh();
				InBangDiemCuaLopTC(dsSV, dsLopTC, dsMonHoc, toadoXBox, 7);
				//DONE
				break;
			case 18 : 
				XoaManHinhChinh();
				InDiemTBCuaLopTheoTC(dsSV, dsLopTC, dsMonHoc, toadoXBox, 7);
				//DONE
				break;
			case 19:
				SaveSV(dsSV);
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
	cout << strMNMain[pointer - 9];
	textcolor(7);
}

