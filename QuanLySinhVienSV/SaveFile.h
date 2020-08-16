

void SaveSV(DSSV dsSV)
{
	ofstream fileOut("inputSV1.txt", ios::out);
	fileOut << dsSV.solg << endl;

	for (NodeSV* k = dsSV.pHead; k != NULL; k = k->pNext)
	{
		fileOut << k->data.malop << "," << k->data.namnhaphoc << "," << k->data.mssv << "," << k->data.ho << "," << k->data.ten << "," << k->data.phai << "," << k->data.sdt << endl;
	}
	fileOut.close();
}

void DuyetSave(NodeLopTC* t, ofstream& fileOut)
{
	if (t == NULL)
	{
		return;
	}
	fileOut << t->data.malopTc << "," << t->data.mmh << "," << t->data.nienkhoa << "," << t->data.hocki << "," << t->data.nhom
		<< "," << t->data.so_svmax << "," << t->data.so_sv_min << "," << t->data.dssvdk.soLg << endl;
	for (NodeSVDK* k = t->data.dssvdk.pHead; k != NULL; k = k->pNext)
	{
		fileOut << k->data.masv << "," << k->data.diem << endl;
	}

	DuyetSave(t->pLeft, fileOut);
	DuyetSave(t->pRight, fileOut);
}


void SaveLopTC(DSLopTC dsTC)
{
	ofstream fileOut("inputLopTC.txt", ios::out);
	fileOut << dsTC.soLuong << endl;

	DuyetSave(dsTC.root, fileOut);
	fileOut.close();
}



void Save(DSLopTC dsTC, DSSV dsSV)
{
	SaveSV(dsSV);
	SaveLopTC(dsTC);
}

