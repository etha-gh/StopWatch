#include "pch.h"
#include "StopWatch_mainForm.h"

using namespace System;
using namespace System::IO;
using namespace System::Drawing;

System::Void StopWatchver10::StopWatch_mainForm::StopWatch_mainForm_Load(System::Object^ sender, System::EventArgs^ e) {

	//CountTimeViewへ経過時間を表示
	CountTimeDrawString();
	//RapTime記録用ファイルパス作成
	CreateRapTimeResultDataPath();

	if (File::Exists(rapTimeResultDataPath)) {
		//ファイルからRapTimeを読み込む
		System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(rapTimeResultDataPath, System::Text::Encoding::Default);

		Generic::List<String^>^ ReadStringLine = gcnew Generic::List<String^>();

		while (sr->Peek() >= 0) {
			ReadStringLine->Add(sr->ReadLine());
		}
		sr->Close();
		//dataGridViewへRapTimeを表示
		for (int i = ReadStringLine->Count-1; i >= 0; i--) {
			dataGridView1->Rows->Add(ReadStringLine[i]);
		}
	}
}

System::Void StopWatchver10::StopWatch_mainForm::StartButton_Click(System::Object^ sender, System::EventArgs^ e) {

	Timer1->Start();
}

System::Void StopWatchver10::StopWatch_mainForm::StopButton_Click(System::Object^ sender, System::EventArgs^ e) {

	Timer1->Stop();

	if (cntTimeStrBuff != cntTimeStr) {
		dataGridView1->Rows->Add();

		//RapTimeをファイルへ記録
		System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(rapTimeResultDataPath, false, System::Text::Encoding::Default);

		//最新のデータを先頭へ配置するようソート
		for (int i = dataGridView1->RowCount - 1; i > 0; i--) {
			if (dataGridView1->RowCount > 1) {
				dataGridView1->Rows[i]->Cells[0]->Value = dataGridView1->Rows[i - 1]->Cells[0]->Value;
				sw->WriteLine(dataGridView1->Rows[i]->Cells[0]->Value);
			}
		}
		dataGridView1->Rows[0]->Cells[0]->Value = cntTimeStr;

		sw->WriteLine(dataGridView1->Rows[0]->Cells[0]->Value);
		sw->Close();

		cntTimeStrBuff = cntTimeStr;
	}
}

System::Void StopWatchver10::StopWatch_mainForm::ResetButton_Click(System::Object^ sender, System::EventArgs^ e) {

	Timer1->Stop();
	dataGridView1->Rows->Clear();

	//cntTimeリセット
	cntTimeStr = "00:00:00";
	cntTime_msec = 0;
	cntTime_sec = 0;
	cntTime_min = 0;
	
	//RapTime格納用ファイルを削除
	FileInfo^ fileInfo = gcnew FileInfo(rapTimeResultDataPath);
	fileInfo->Delete();

	//CountTimeViewへ経過時間を表示
	CountTimeDrawString();
}

System::Void StopWatchver10::StopWatch_mainForm::Timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

	cntTime_msec++;

	if (cntTime_msec > 99) {
		cntTime_msec = 0;
		cntTime_sec++;
	}
	if (cntTime_sec > 59) {
		cntTime_sec = 0;
		cntTime_min++;
	}
	if (cntTime_min == 60) {
		Timer1->Stop();
	}
	cntTimeStr = String::Concat(cntTime_min.ToString("D2"), ":", cntTime_sec.ToString("D2"), ":", cntTime_msec.ToString("D2"));

	//CountTimeViewへ経過時間を表示
	CountTimeDrawString();
}

System::Void StopWatchver10::StopWatch_mainForm::CountTimeDrawString(Void) {

	Bitmap^ canvas = gcnew Bitmap(CountTimeView->Width, CountTimeView->Height);
	{
		Graphics^ g = Graphics::FromImage(canvas);

		Pen^ pen = gcnew Pen(Color::Black, 1);
//		Rectangle^ rect = gcnew Rectangle(0, 0, 260, 50);
		g->DrawRectangle(pen, 0, 0, 260, 50);
//		g->DrawRectangle(pen, rect);

//		StringFormat^ drawFormat = gcnew StringFormat;
//		drawFormat->Alignment = StringAlignment::Center;
//		drawFormat->LineAlignment = StringAlignment::Near;

		g->DrawString(cntTimeStr, gcnew Drawing::Font("MS UI Gothic", 36), Brushes::Black, 10, 2, gcnew StringFormat());
//		g->DrawString(cntTimeStr, gcnew Drawing::Font("MS UI Gothic", 36), Brushes::Black, rect, drawFormat);

		CountTimeView->Image = canvas;
	}
}

System::Void StopWatchver10::StopWatch_mainForm::CreateRapTimeResultDataPath(Void) {

	//アプリが実行されたフルパスを取得CreateRapTimeResultDataPath
	String^ executePath = Application::ExecutablePath;

	//フルパスからディレクトリパスを作成
	String^ executeFilePath = Application::ExecutablePath;
	String^ executeDirectoryPath = Path::GetDirectoryName(executeFilePath);
	String^ countTimeDirectoryPath = String::Concat(executeDirectoryPath, "\\", "ResultData");
	
	//アプリが配置されている階層にResultファイル格納用ディレクトリを作成
	DirectoryInfo^ directoryInfo = gcnew DirectoryInfo(countTimeDirectoryPath);
	directoryInfo->Create();

	rapTimeResultDataPath = String::Concat(countTimeDirectoryPath, "\\", "RapTimeResultData.ini");
}