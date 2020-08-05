#include "menu.h"

int main()
{
	
	DSLopTC t;
	DSSV dsSV;
	LoadSV(dsSV);
	DSMonHoc dsMH;
	dsMH.n = 0;
	KhoiTaoCay(t);
	LoadTC(t);

	int soLuong = 0;
	int a[SoLuongID];

	loadIdLopTC(a, soLuong);
	if (t.soLuong > 8)
	{
		soLuong = soLuong + 8 - t.soLuong;
	}
	DocFileMonHoc(dsMH);
	Menu();
	resizeConsole(1000, 600);
	GiaoDienMain();
	while (true)
	{
		RunMenu(t, dsMH, dsSV,a,soLuong);

	}
	system("pause");
	return 0;
}