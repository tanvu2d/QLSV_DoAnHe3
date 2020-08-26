#include "CTDL.h"

using namespace std;
void gotoXY(int x, int y)
{
	HANDLE hConsoleOutput;
	COORD Cursor_an_Pos = { x, y };
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput, Cursor_an_Pos);
}
void SetColor(WORD color)
{
	HANDLE hConsoleOutput;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
	GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);
	WORD wAttributes = screen_buffer_info.wAttributes;
	color &= 0x000f;
	wAttributes &= 0xfff0;
	wAttributes |= color;
	SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}
void textcolor(int x)
{
	HANDLE mau;
	mau = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(mau, x);
}
int whereX()
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi))
		return csbi.dwCursorPosition.X;
	return -1;
}
int whereY()
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi))
		return csbi.dwCursorPosition.Y;
	return -1;
}
void ShowCur(bool CursorVisibility)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursor = { 1, CursorVisibility };
	SetConsoleCursorInfo(handle, &cursor);
}
//int whereY()
//{
//	CONSOLE_SCREEN_BUFFER_INFO csbi;
//	if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi))
//		return csbi.dwCursorPosition.Y;
//	return -1;
//}
char Chuyen1SoSangKiTu(int n)
{
	switch (n)
	{
	case 1:
		return '1';
	case 2:
		return '2';
	case 3:
		return '3';
	case 4:
		return '4';
	case 5:
		return '5';
	case 6:
		return '6';
	case 7:
		return '7';
	case 8:
		return '8';
	case 9:
		return '9';
	case 0:
		return '0';
	}
}
//
string chuyenSoThuc(float  n)
{
	string str;
	int a;
	int m = int(n);
	float du = n - m;
	int phanDu = du * 100;

	while (phanDu > 0)
	{
		a = phanDu % 10;

		str.insert(str.begin() + 0, Chuyen1SoSangKiTu(a));
		phanDu = phanDu / 10;
	}
	str.insert(str.begin() + 0, '.');
	if (m == 0)
	{
		str.insert(str.begin() + 0, '0');
	}
	while (m > 0)
	{
		a = m % 10;
		Chuyen1SoSangKiTu(a);
		str.insert(str.begin() + 0, Chuyen1SoSangKiTu(a));
		m = m / 10;
	}
	return str;

}


float roundF(float var, int num)
{
	float value = (int)(var * num + 0.5);
	return (float)value / num;
}
int DemChuSo(int n)
{
	int dem = 0;
	while (n > 0)
	{
		n = n / 10;
		dem++;
	}
	return dem;
}

void DinhDangChuoi(string& str)
{
	//Xoa khoang trong
	while (str[0] == ' ')
	{
		str.erase(str.begin() + 0);
	}
	while (str[str.length() - 1] == ' ')
	{
		str.erase(str.begin() + (str.length() - 1));
	}

	for (int i = 1; i < str.length() - 1; i++)
	{
		if (str[i + 1] == ' ' && str[i] == ' ')
		{
			str.erase(str.begin() + i);
			i--;
		}
	}
	//Viet thuong all lai
	for (int i = 0; i < str.length(); i++)
	{
		if ((65 <= str[i] && str[i] <= 90) && str[i] != ' ')
		{
			str[i] = str[i] + 32;
		}
	}
	//Viet hoa
	for (int i = 0; i < str.length(); i++)
	{
		if (i == 0 && (97 <= str[i] && str[i] <= 122))
		{
			str[0] = str[0] - 32;
		}
		if (str[i] == ' ' && (97 <= str[i + 1] && str[i + 1] <= 122))
		{
			str[i + 1] = str[i + 1] - 32;
		}
	}

}
// de nhap
string ChuyenSoSangString1(int n)
{
	string str;
	int a;
	while (n > 0)
	{
		a = n % 10;
		Chuyen1SoSangKiTu(a);
		str.insert(str.begin() + 0, Chuyen1SoSangKiTu(a));
		n = n / 10;
	}
	return str;
}
// de xuat
string ChuyenSoSangString(int n)
{
	string str;
	int a;
	if (n == 0)
	{
		str = "0";
	}
	while (n > 0)
	{
		a = n % 10;
		Chuyen1SoSangKiTu(a);
		str.insert(str.begin() + 0, Chuyen1SoSangKiTu(a));
		n = n / 10;
	}
	return str;
}
string CanDeuChuoi(string str, int ChieuRong)
{
	if (str.empty())
	{
		return str;
	}
	else if (str.length() > ChieuRong)
	{
		return str;
	}
	return string((ChieuRong - str.length()) / 2, ' ') + str;
}

void XuLyNhapMa(string& InPut)
{
	while (true)
	{
		char c = _getch();
		if ((c >= 48 && c <= 57) || c == '_' || (c >= 65 && c <= 90)) // hoa
		{
			InPut.insert(InPut.begin() + InPut.length(), c);
			cout << c;
		}
		else if (c >= 97 && c <= 122) // thuong
		{
			c = c - 32;
			InPut.insert(InPut.begin() + InPut.length(), c);
			cout << c;
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
void XuLyNhapten(string& InPut, int maximum=256)
{
	//|| c == '_'
	while (true)
	{
		char c = _getch();
		if (c == ' ') {
			if (InPut[InPut.length()-1] == c) {
				continue;
			}
		}
		if (((c >= 48 && c <= 57)  || (c >= 65 && c <= 90) || c == ' ' )&& (sizeof(c) <=35)) // hoa
		{
			if (InPut.length() < maximum) {
				InPut.insert(InPut.begin() + InPut.length(), c);
				cout << c;
			}
		}
		else if (c >= 97 && c <= 122) // thuong
		{
			c = c - 32;
			if (InPut.length() < maximum) {
				InPut.insert(InPut.begin() + InPut.length(), c);
				cout << c;
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
void XuLyNhapMaMon(string& InPut, int maximum = 256)
{
	while (true)
	{
		char c = _getch();
		if ((c >= 48 && c <= 57) || c == '_' || (c >= 65 && c <= 90)) // hoa
		{
			if (InPut.length() < maximum) {
				InPut.insert(InPut.begin() + InPut.length(), c);
				cout << c;
			}
		}
		else if (c >= 97 && c <= 122) // thuong
		{
			if (InPut.length() < maximum) {
				c = c - 32;
				InPut.insert(InPut.begin() + InPut.length(), c);
				cout << c;
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

bool XuLyNhapDiem(float& n, int toadoX, int& toadoY)
{
	int toadoXtam;
	string x = to_string(n);
	if (n == -1)
	{
		x = "";
	}
	else {
		x = x.substr(0, 4);
	}
	char c;
	while (true)
	{
		c = getch();
		if (((c >= 48 && c <= 57) || c == 46) && x.length() < 4 && whereX() < toadoX + 10)
		{
			if (x.length() == 1)
			{
				if ((x == "1" && c == 48) || c == 46)
				{
					x.insert(x.begin() + (whereX() - toadoX), c);
						cout << c; 
				}
			}
			else {
				x.insert(x.begin() + (whereX() - toadoX), c);

					cout << c;
			}

		}
		else if (c == 8 && whereX() > toadoX)
		{
			x.erase(x.begin() + x.length() - 1);
			cout << "\b";
			cout << " ";
			cout << "\b";

		}
		else if (c == 13 && x.length() > 0)
		{
			toadoY = toadoY + 2;
			n = atof(x.c_str());
			gotoXY(1, 1);
			cout << n;
			break;
		}
		else if (c == -32)
		{
			c = getch();
			if (c == 80)
			{
				if (x.empty())
				{
					n = 0;
				}
				else
				{
					n = atof(x.c_str());
				}
				toadoY = toadoY + 2;
				break;
			}
			else if (c == 72)
			{
				if (x.empty())
				{
					n = 0;
				}
				else
				{
					n = atof(x.c_str());
				}
				toadoY = toadoY - 2;
				break;
			}
		}
		else if (c == 27 && x.length() > 0)   // 
		{
			n = atof(x.c_str());
			return false;
		}
	}
	return true; 
}
void XuLyNhapSo(int& n, int toadoX)
{
	string x = "";
	char c;
	while (true)
	{
		c = getch();
		if ((c >= 48 && c <= 57))
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
		else if (c == 13 && x.length() > 0)
		{
			n = atoi(x.c_str());
			return;
		}
	}
}
void XuLyNhapSoMH(float& n)
{
	string x = "";
	char c;
	while (true)
	{
		c = getch();
		if ((c >= 48 && c <= 57))
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
		else if (c == 13 && x.length() > 0)
		{
			n = atoi(x.c_str());
			return;
		}
	}
}
void XuLyNhapSoHK(int& n, int toadoX)
{
	string x = "";
	char c;
	while (true)
	{
		c = getch();
		if ((c >= 48 && c <= 51) && x.length()<1	)
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
		else if (c == 13 && x.length() > 0  )
		{
			n = atoi(x.c_str());
			return;
		}
	}
}
void XuLyNhapSDT(string& sdt)
{
	string x = "";
	char c;
	while (true)
	{
		c = getch();
		if ((c >= 48 && c <= 57) && x.length() < 10)
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
		else if (c == 13 && x.length() > 0)
		{
			if (x.length() < 10)
			{

			}
			sdt = x;
			return;
		}
	}
}


void resizeConsole(int width, int height)
{
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, width, height, TRUE);
}

void XoaManHinhChinh()
{
	textcolor(7);
	for (int i = 6; i < 36; i++)
	{
		for (int j = 0; j < 176; j++)
		{
			gotoXY(j, i);
			cout << " ";
		}
	}
}
void XoaManHinhTuyChon(int toadoX, int toadoY, int chieudai, int chieucao)
{
	textcolor(7);
	for (int i = toadoY; i < chieucao + toadoY; i++)
	{
		for (int j = toadoX; j < toadoX + chieudai; j++)
		{
			gotoXY(j, i);
			cout << " ";
		}
	}
}

//Ve HCN
void HCNTextDong(int toadoX, int toadoY, int chieudai, int chieucao)
{
	for (int i = toadoX; i < toadoX + chieudai; i++)
	{
		gotoXY(i, toadoY);
		textcolor(1926);
		cout << " ";
		Sleep(5);
		textcolor(7);
	}
	for (int i = toadoY; i < toadoY + chieucao; i++)
	{
		gotoXY(toadoX + chieudai - 1, i);
		textcolor(1926);
		cout << " ";
		Sleep(5);
		textcolor(7);
	}
	for (int i = toadoX + chieudai - 1; i >= toadoX; i--)
	{
		gotoXY(i, toadoY + chieucao - 1);
		textcolor(1926);
		cout << " ";
		Sleep(5);
		textcolor(7);
	}
	for (int i = toadoY + chieucao - 1; i >= toadoY; i--)
	{
		gotoXY(toadoX, i);
		textcolor(1926);
		cout << " ";
		Sleep(5);
		textcolor(7);
	}
}
void HCNText(int toadoX, int toadoY, int chieudai, int chieucao)
{
	for (int i = toadoX; i < toadoX + chieudai; i++)
	{
		gotoXY(i, toadoY);
		textcolor(1926);
		cout << " ";
		textcolor(7);
	}
	for (int i = toadoY; i < toadoY + chieucao; i++)
	{
		gotoXY(toadoX + chieudai - 1, i);
		textcolor(1926);
		cout << " ";
		textcolor(7);
	}
	for (int i = toadoX + chieudai - 1; i >= toadoX; i--)
	{
		gotoXY(i, toadoY + chieucao - 1);
		textcolor(1926);
		cout << " ";
		textcolor(7);
	}
	for (int i = toadoY + chieucao - 1; i >= toadoY; i--)
	{
		gotoXY(toadoX, i);
		textcolor(1926);
		cout << " ";
		textcolor(7);
	}
}
void VeHCN(int toadoX, int toadoY, int chieudai, int chieucao, int mauSet)
{
	SetColor(mauSet);
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
	SetColor(7);
}
//HCN Dau Sach
void VeHCN1(int toadoX, int toadoY, int chieudai, int chieucao, int mauSet)
{
	SetColor(mauSet);
	for (int i = toadoX + 1; i < chieudai + toadoX; i++)
	{
		if (i == toadoX + 11 || i == toadoX + 52 || i == toadoX + 59 || i == toadoX + 85 || i == toadoX + 94 || i == toadoX + 115)
		{

		}
		else
		{
			gotoXY(i, toadoY);
			cout << (char)196;
		}
	}
	for (int i = toadoX + 1; i < chieudai + toadoX; i++)
	{

		if (i == toadoX + 11 || i == toadoX + 52 || i == toadoX + 59 || i == toadoX + 85 || i == toadoX + 94 || i == toadoX + 115)
		{

		}
		else
		{
			gotoXY(i, toadoY + chieucao);
			cout << (char)196;
		}
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
	SetColor(7);
}
void ToMauHCN(int toadoX, int toadoY, int chieudai, int chieucao, int mauText)
{
	textcolor(mauText);
	for (int i = toadoY + 1; i < toadoY + chieucao; i++)
	{
		for (int j = toadoX + 1; j < chieudai + toadoX; j++)
		{
			gotoXY(j, i);
			cout << " ";
		}
	}
	textcolor(7);
}
void XoaHCN(int toadoX, int toadoY, int chieudai, int chieucao, int mau)
{
	textcolor(mau);
	for (int j = toadoY + 1; j < toadoY + chieucao; j++)
	{
		for (int i = toadoX + 1; i < toadoX + chieudai; i++)
		{
			gotoXY(i, j);
			cout << " ";
		}
	}
}

void GiaoDienMain()
{
	ShowCur(0);

	for (int i = 50; i < 90; i++)
	{
		gotoXY(i, 5);
		cout << (char)205;
	}
	textcolor(7);
	textcolor(0xE);
	HCNText(toadoXBox + 27, 1 , 65, 5);
	gotoXY(64, 3);
	textcolor(12);
	//ToMauHCN(toadoXBox + 27, 1, 65, 5,0xE);
	cout << "QUAN Li SINH VIEN";
	HCNText(toadoXBox + 27, 6, 65, 20);

	textcolor(7);

}
void GiaoDienThongBao(string x)
{
	//ToMauHCN(50, 17, 50, 10, 95);
	ToMauHCN(50, 20, 50, 10, 95);
	textcolor(95);
	gotoXY(51, 23);
	cout << CanDeuChuoi(x, 49);
	getch();
	textcolor(7);

}
void GiaoDienThongBaoMh(string x)
{
	//ToMauHCN(50, 17, 50, 10, 95);
	ToMauHCN(50, 20, 50, 10, 95);
	textcolor(95);
	gotoXY(51, 23);
	cout << CanDeuChuoi(x, 49);
	getch();
	ToMauHCN(50, 20, 50, 10, 7);
	textcolor(7);

}