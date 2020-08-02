#include "chucNang.h"

//int pointer = 7;
string strMNMain[] = {
	" 1.  Mo lop tin chi                                      ",
	" 2.  Xuat danh sach sinh vien theo nien khoa             ",
	" 3.  Nhap sinh vien                                      ",
	" 4.  In danh sach sinh vien cua 1 lop :                  ",
	" 5.  Xuat ds sv                                           " ,
	" 6.                                          " ,
	" 7.											",
	" 8.Dang ki lop tin chi									",
	" 9.												",
	" 10.											",
	" 11.											",
	" 12.											",
	" 13.Mon hoc									",
	" 0.Ket thuc chuong trinh                     "
};


//

string menuConLopTC[] = {

	"Them Lop tin chi        ",
	"Xoa lop tin chi         ",
	"Hieu chinh lop tin chi  ",
	"Thoat toi menu chinh    "
};


string stringNhapSV[] = {
	"Them sinh vien             " ,
	"Xoa sinh vien              ",
	"Sua thong tin sinh vien    ",
	"Thoat toi menu chinh       "
};

string menuMH[] = {

	"Them mon hoc               ",
	"Xoa mon hoc                ",
	"Xem danh sach mon hoc      ",
	"Hieu chinh mon hoc         ",
	"Thoat toi menu chinh       "
};

// Chay vong lap bang chon
void Menu()
{
	//textcolor(240);
	int j = 7;
	for (int i = 0; i < sizeof(strMNMain) / sizeof(*strMNMain); i++)
	{
		gotoXY(50, j++);
		cout << strMNMain[i];
	}
}
void menuNhapSV()
{
	int j = 7;
	for (int i = 0; i < sizeof(stringNhapSV) / sizeof(*stringNhapSV); i++)
	{
		gotoXY(50, j++);
		cout << stringNhapSV[i];
	}
}

void menuMoLopTC()
{
	int j = 7;
	for (int i = 0; i < sizeof(menuConLopTC) / sizeof(*menuConLopTC); i++)
	{
		gotoXY(50, j++);
		cout << menuConLopTC[i];
	}
}
void menuMonHoc()
{
	int j = 7;
	for (int i = 0; i < sizeof(menuMH) / sizeof(*menuMH); i++)
	{
		gotoXY(50, j++);
		cout << menuMH[i];
	}
}
//////


void RunMenu(DSLopTC& dsLopTC, DSMonHoc& dsMonHoc, DSSV& dsSV, string a) 		// DSLTC& dsLopTC, DSSV &dsSV,DSMH& dsMH
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
			switch (pointer)
			{
			case 7:
				//textcolor(180);
				gotoXY(50, pointer);
				menuMoLopTC();
				gotoXY(50, pointer - 1);
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
								themLopTC(dsLopTC, dsMonHoc);


								break;

							case 8:

								XoaLopTC(dsLopTC);

								break;
							case 9:

								SuaLopTC(dsLopTC, dsMonHoc);

								break;


							case 10:
								//Save(dsSV, dsMH, dsLopTC);
								//DeleteMemory(dsSV, dsMH, dsLopTC);
								pointer = 7;
								goto VONGLAP;

							}

							system("cls");
							GiaoDienMain();
							menuMoLopTC();

						}




					}
					ShowCur(0);
					// to mau 
					//pointer = 7;

					textcolor(180);
					gotoXY(50, pointer);
					cout << menuConLopTC[pointer - 7];
					textcolor(7);

				}

			case 8:

				InDSSV(dsSV, dsLopTC, dsMonHoc, 0, 5);
				break;
			case 9:
				// test xuat danh sach sinh vien
				//XuatSVDKTest(dsSV, 0, 2);
				pointer = 7;
				gotoXY(50, pointer);
				menuNhapSV();
				gotoXY(50, pointer - 1);
				cout << "Vua chon chuc nang nhap sinh vien ";

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

							case 8:
								XoaSVLop(dsSV);
								break;
							case 9:
								SuaSVLop(dsSV);
								break;


							case 10:
								pointer = 7;
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
					gotoXY(50, pointer);
					cout << stringNhapSV[pointer - 7];
					textcolor(7);

				}

				break;
			case 10:
				XuatDSSV1Lop(dsSV, 0, 5);
				break;

			case 11:
				Xuat(dsSV.pHead);
				break;
			case 13:
				XuLyNhapNienKhoa(a);
				break;

			case 14:
				DangKiLopTC(dsSV, dsLopTC, dsMonHoc, toadoXBox, 7);
				break;

			case 19:
				// Cho xu li mon hoc

				//textcolor(180);
				pointer = 7;
				gotoXY(50, pointer);
				menuMonHoc();
				gotoXY(50, pointer - 1);
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
								themMonHoc(dsMonHoc);
								break;

							case 8:
								xoaMonHoc(dsMonHoc);
								break;
							case 9:
								xuatMonHoc(dsMonHoc);
								system("pause");
								break;
							case 10:
								chinhsuaMH(dsMonHoc);
								break;

							case 11:
								pointer = 7;
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
					gotoXY(50, pointer);
					cout << menuMH[pointer - 7];
					textcolor(7);

				}


				/*case 21 :
					break;*/

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
	gotoXY(50, pointer);
	cout << strMNMain[pointer - 7];
	textcolor(7);

}
