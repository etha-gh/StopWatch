#include "pch.h"
#include "FunctionCalc_mainForm.h"

using namespace System::IO;

//
// フォーム起動時の処理
//
System::Void FunctionCalc::FunctionCalc_mainForm::FunctionCalc_mainForm_Load(System::Object^ sender, System::EventArgs^ e) {

	CreateCalcResltDataPath();
	//フォームを起動した際にpictureBoxに描画(初期値: 0)
	CalcResultViewDrawString();

	if (File::Exists(calcResultDataPath)) {
		//ファイルから計算結果を読み込む
		System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(calcResultDataPath, System::Text::Encoding::Default);

		Generic::List<String^>^ ReadStringLine = gcnew Generic::List<String^>();

		while (sr->Peek() >= 0) {
			ReadStringLine->Add(sr->ReadLine());
		}
		sr->Close();
		//dataGridViewへ計算結果を表示
		for (int i = ReadStringLine->Count - 1; i >= 0; i--) {
			dataGridView1->Rows->Add(ReadStringLine[i]);
		}
	}
}
//
// 各種数値ボタンが押された場合の処理(関数：MakeCalcResultViewStringを呼び出す)
//
System::Void FunctionCalc::FunctionCalc_mainForm::InputNum_0_button_Click(System::Object^ sender, System::EventArgs^ e) { inputOperandFlg = true; MakeOperandString(0); }
System::Void FunctionCalc::FunctionCalc_mainForm::InputNum_1_button_Click(System::Object^ sender, System::EventArgs^ e) { inputOperandFlg = true; MakeOperandString(1); }
System::Void FunctionCalc::FunctionCalc_mainForm::InputNum_2_button_Click(System::Object^ sender, System::EventArgs^ e) { inputOperandFlg = true; MakeOperandString(2); }
System::Void FunctionCalc::FunctionCalc_mainForm::InputNum_3_button_Click(System::Object^ sender, System::EventArgs^ e) { inputOperandFlg = true; MakeOperandString(3); }
System::Void FunctionCalc::FunctionCalc_mainForm::InputNum_4_button_Click(System::Object^ sender, System::EventArgs^ e) { inputOperandFlg = true; MakeOperandString(4); }
System::Void FunctionCalc::FunctionCalc_mainForm::InputNum_5_button_Click(System::Object^ sender, System::EventArgs^ e) { inputOperandFlg = true; MakeOperandString(5); }
System::Void FunctionCalc::FunctionCalc_mainForm::InputNum_6_button_Click(System::Object^ sender, System::EventArgs^ e) { inputOperandFlg = true; MakeOperandString(6); }
System::Void FunctionCalc::FunctionCalc_mainForm::InputNum_7_button_Click(System::Object^ sender, System::EventArgs^ e) { inputOperandFlg = true; MakeOperandString(7); }
System::Void FunctionCalc::FunctionCalc_mainForm::InputNum_8_button_Click(System::Object^ sender, System::EventArgs^ e) { inputOperandFlg = true; MakeOperandString(8); }
System::Void FunctionCalc::FunctionCalc_mainForm::InputNum_9_button_Click(System::Object^ sender, System::EventArgs^ e) { inputOperandFlg = true; MakeOperandString(9); }
System::Void FunctionCalc::FunctionCalc_mainForm::Input_dot_button_Click(System::Object^ sender, System::EventArgs^ e) { inputOperandFlg = true; MakeOperandString(10); }

System::Void FunctionCalc::FunctionCalc_mainForm::Equal_button_Click(System::Object^ sender, System::EventArgs^ e) {

	switch (clickButtonNum) {
	case 1:
		operandBuff += newOperand;

		if (calcProcessString->Contains("=")) {

			calcProcessString = String::Concat(operandBuff - newOperand, " + ", newOperand, " = ");
		}
		else {
			calcProcessString = String::Concat(calcProcessString, newOperand, " = ");
		}
		break;

	case 2:
		operandBuff -= newOperand;

		if (calcProcessString->Contains("=")) {

			calcProcessString = String::Concat(operandBuff + newOperand, " - ", newOperand, " = ");
		}
		else {
			calcProcessString = String::Concat(calcProcessString, newOperand, " = ");
		}
		break;

	case 3:
		operandBuff *= newOperand;

		if (calcProcessString->Contains("=")) {

			calcProcessString = String::Concat(operandBuff + newOperand, " x ", newOperand, " = ");
		}
		else {
			calcProcessString = String::Concat(calcProcessString, newOperand, " = ");
		}
	case 4:
		operandBuff /= newOperand;

		if (calcProcessString->Contains("=")) {

			calcProcessString = String::Concat(operandBuff + newOperand, " ÷ ", newOperand, " = ");
		}
		else {
			calcProcessString = String::Concat(calcProcessString, newOperand, " = ");
		}
	default:
		break;
	}
	answerString_clearFlg = true;
	calcAnswerString = operandBuff.ToString();
	calcAnswerToDataGridView(calcAnswerString);
	CalcResultViewDrawString();
}
//
// プラス(+)ボタンが押された場合の処理
//
System::Void FunctionCalc::FunctionCalc_mainForm::Puls_Button_Click(System::Object^ sender, System::EventArgs^ e) {

	if (calcProcessString != nullptr && calcProcessString->Contains("+")) {

		operandBuff += newOperand;
		calcProcessString = String::Concat(operandBuff, " + ");
		calcAnswerString = operandBuff.ToString();
		newOperand = operandBuff;
		answerString_clearFlg = true;
		calcAnswerToDataGridView(calcAnswerString);
	}
	else {

		if (inputOperandFlg == true) {

			operandBuff = newOperand;
			calcProcessString = String::Concat(newOperand, " + ");

			answerString_clearFlg = true;
		}
		else {
			calcProcessString = String::Concat("0 ", " + ");
		}
	}
	clickButtonNum = 1;
	CalcResultViewDrawString();
}
//
// マイナス(-)ボタンが押された場合の処理
//
System::Void FunctionCalc::FunctionCalc_mainForm::Minus_button_Click(System::Object^ sender, System::EventArgs^ e) {

	if (calcProcessString != nullptr && calcProcessString->Contains("-")) {

		operandBuff -= newOperand;
		calcProcessString = String::Concat(operandBuff, " - ");
		calcAnswerString = operandBuff.ToString();
		newOperand = operandBuff;
		answerString_clearFlg = true;
		calcAnswerToDataGridView(calcAnswerString);
	}
	else {
		if (inputOperandFlg == true) {

			operandBuff = newOperand;
			calcProcessString = String::Concat(newOperand, " - ");

			answerString_clearFlg = true;
		}
		else {
			calcProcessString = String::Concat("0 ", " - ");
		}
	}
	clickButtonNum = 2;
	CalcResultViewDrawString();
}
//
// 掛け算(x)ボタンが押された場合の処理
//
System::Void FunctionCalc::FunctionCalc_mainForm::Product_button_Click(System::Object^ sender, System::EventArgs^ e) {

	if (calcProcessString != nullptr && calcProcessString->Contains("x")) {

		operandBuff *= newOperand;
		calcProcessString = String::Concat(operandBuff, " x ");
		calcAnswerString = operandBuff.ToString();
		newOperand = operandBuff;
		answerString_clearFlg = true;
		calcAnswerToDataGridView(calcAnswerString);
	}
	else {
		if (inputOperandFlg == true) {

			operandBuff = newOperand;
			calcProcessString = String::Concat(newOperand, " x ");

			answerString_clearFlg = true;
		}
		else {
			calcProcessString = String::Concat("0 ", " x ");
		}
	}
	clickButtonNum = 3;
	CalcResultViewDrawString();
}
//
// 割り算(÷)ボタンが押された場合の処理
//
System::Void FunctionCalc::FunctionCalc_mainForm::Division_button_Click(System::Object^ sender, System::EventArgs^ e) {

	if (calcProcessString != nullptr && calcProcessString->Contains("÷")) {

		operandBuff /= newOperand;
		calcProcessString = String::Concat(operandBuff, " ÷ ");
		calcAnswerString = operandBuff.ToString();
		newOperand = operandBuff;
		answerString_clearFlg = true;
		calcAnswerToDataGridView(calcAnswerString);
	}
	else {
		if (inputOperandFlg == true) {

			operandBuff = newOperand;
			calcProcessString = String::Concat(newOperand, " ÷ ");

			answerString_clearFlg = true;
		}
		else {
			calcProcessString = String::Concat("0 ", " ÷ ");
		}
	}
	clickButtonNum = 4;
	CalcResultViewDrawString();
}
//
// クリアボタンが押された場合の処理
//
System::Void FunctionCalc::FunctionCalc_mainForm::Clear_button_Click(System::Object^ sender, System::EventArgs^ e) {

	clickButtonNum = 0;
	operandBuff = 0;
	newOperand = 0;
	operandString = "";
	calcProcessString = nullptr;
	calcAnswerString = "0";
	inputOperandFlg = false;
	answerString_clearFlg = false;

	//計算結果の履歴を削除
	dataGridView1->Rows->Clear();

	//計算結果格納用ファイルを削除
	FileInfo^ fileInfo = gcnew FileInfo(calcResultDataPath);
	fileInfo->Delete();

	CalcResultViewDrawString();
}
//
// pictureBox表示用文字列作成関数
//
System::Void FunctionCalc::FunctionCalc_mainForm::MakeOperandString(double buttonNum) {

	//ドットボタンが押された場合の処理
	if (buttonNum == 10) {
		////数値文字列に"."が含まれているか判定(計算結果に表示する数値が24桁を超えてないこと)
		//if (!calcAnswerString->Contains(".") && calcAnswerString->Length < 12) {
		//	//計算結果に表示されている数値文字列にドットを結合
		//	operandString = String::Concat(calcAnswerString, ".");
		//	//結合した数値文字列をdouble型に変換して計算用の変数に格納
		//	newOperand = double::Parse(operandString);
		//	//計算結果を文字列に変換してpictureBoxに表示
		//	calcAnswerString = newOperand.ToString();
		//}
	}
	//数値ボタンが押された場合の処理
	else {
		//計算結果に表示する数値が11桁を超えてないこと確認
		if (calcAnswerString->Length < 12) {
			//計算ボタンが押されていた場合は表示されている計算結果を初期化
			if (answerString_clearFlg == true) {
				calcAnswerString = "0";
			}
			//計算結果に表示されている数値文字列に入力された数値を結合
			operandString = String::Concat(calcAnswerString, buttonNum.ToString());
			//結合した数値文字列をdouble型に変換して計算用の変数に格納
			newOperand = double::Parse(operandString);
			//計算結果を文字列に変換してpictureBoxに表示
			calcAnswerString = newOperand.ToString();
		}
	}
	answerString_clearFlg = false;
	CalcResultViewDrawString();
}
//
// dataGridView結果出力用関数
//
System::Void FunctionCalc::FunctionCalc_mainForm::calcAnswerToDataGridView(String^ calcAnswerString) {

	dataGridView1->Rows->Add();

	//計算結果をファイルへ記録
	System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(calcResultDataPath, false, System::Text::Encoding::Default);

	//最新のデータを先頭へ配置するようソート
	for (int i = dataGridView1->RowCount - 1; i > 0; i--) {
		if (dataGridView1->RowCount > 1) {
			dataGridView1->Rows[i]->Cells[0]->Value = dataGridView1->Rows[i - 1]->Cells[0]->Value;
			sw->WriteLine(dataGridView1->Rows[i]->Cells[0]->Value);
		}
	}
	dataGridView1->Rows[0]->Cells[0]->Value = calcAnswerString;

	sw->WriteLine(dataGridView1->Rows[0]->Cells[0]->Value);
	sw->Close();
}
//
// 計算結果格納用ファイルのフルパス取得関数
//
System::Void FunctionCalc::FunctionCalc_mainForm::CreateCalcResltDataPath(Void) {

	//アプリが実行されたフルパスを取得CreateRapTimeResultDataPath
	String^ executePath = Application::ExecutablePath;

	//フルパスからディレクトリパスを作成
	String^ executeFilePath = Application::ExecutablePath;
	String^ executeDirectoryPath = Path::GetDirectoryName(executeFilePath);
	String^ calcResultDataDirectoryPath = String::Concat(executeDirectoryPath, "\\", "ResultData");

	//アプリが配置されている階層にResultファイル格納用ディレクトリを作成
	DirectoryInfo^ directoryInfo = gcnew DirectoryInfo(calcResultDataDirectoryPath);
	directoryInfo->Create();

	calcResultDataPath = String::Concat(calcResultDataDirectoryPath, "\\", "CalcResultData.ini");
}
//
// pictureBox描画設定関数
//
System::Void FunctionCalc::FunctionCalc_mainForm::CalcResultViewDrawString(void) {

	//pictureBoxに貼り付けるイメージのサイズを定義(pictureBoxの幅と高さに合わせる)
	Bitmap^ canvas = gcnew Bitmap(CalcResultView->Width, CalcResultView->Height);

	//描画用の変数を定義
	Graphics^ g = Graphics::FromImage(canvas);

	//描画する文字列を右側に寄せる設定
	StringFormat^ drawFormat = gcnew StringFormat;
	drawFormat->Alignment = StringAlignment::Far;

	//幅が1pxの線でpictureBoxの枠を描画
	Pen^ pen = gcnew Pen(Color::Black, 1);
	g->DrawRectangle(pen, 0, 0, 349, 119);

	//描画する文字列の設定(DrawString(表示させる文字列, フォントの設定, 文字色, 基準点(右寄せの場合は基準点が文字列の右上端になる), 文字列フォーマット))
	//計算過程はフォントサイズ18ptで描画
	g->DrawString(calcProcessString, gcnew Drawing::Font("游ゴシック", 18), Brushes::Black, 350, 20, drawFormat);
	//計算結果はフォントサイズ36ptで描画
	g->DrawString(calcAnswerString, gcnew Drawing::Font("游ゴシック", 36), Brushes::Black, 350, 60, drawFormat);

	//pictureBoxに作成したイメージを貼り付ける
	CalcResultView->Image = canvas;
}
