#include "pch.h"
#include "FunctionCalc_mainForm.h"

using namespace System::IO;

//
// �t�H�[���N�����̏���
//
System::Void FunctionCalc::FunctionCalc_mainForm::FunctionCalc_mainForm_Load(System::Object^ sender, System::EventArgs^ e) {

	CreateCalcResltDataPath();
	//�t�H�[�����N�������ۂ�pictureBox�ɕ`��(�����l: 0)
	CalcResultViewDrawString();

	if (File::Exists(calcResultDataPath)) {
		//�t�@�C������v�Z���ʂ�ǂݍ���
		System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(calcResultDataPath, System::Text::Encoding::Default);

		Generic::List<String^>^ ReadStringLine = gcnew Generic::List<String^>();

		while (sr->Peek() >= 0) {
			ReadStringLine->Add(sr->ReadLine());
		}
		sr->Close();
		//dataGridView�֌v�Z���ʂ�\��
		for (int i = ReadStringLine->Count - 1; i >= 0; i--) {
			dataGridView1->Rows->Add(ReadStringLine[i]);
		}
	}
}
//
// �e�퐔�l�{�^���������ꂽ�ꍇ�̏���(�֐��FMakeCalcResultViewString���Ăяo��)
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

			calcProcessString = String::Concat(operandBuff + newOperand, " �� ", newOperand, " = ");
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
// �v���X(+)�{�^���������ꂽ�ꍇ�̏���
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
// �}�C�i�X(-)�{�^���������ꂽ�ꍇ�̏���
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
// �|���Z(x)�{�^���������ꂽ�ꍇ�̏���
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
// ����Z(��)�{�^���������ꂽ�ꍇ�̏���
//
System::Void FunctionCalc::FunctionCalc_mainForm::Division_button_Click(System::Object^ sender, System::EventArgs^ e) {

	if (calcProcessString != nullptr && calcProcessString->Contains("��")) {

		operandBuff /= newOperand;
		calcProcessString = String::Concat(operandBuff, " �� ");
		calcAnswerString = operandBuff.ToString();
		newOperand = operandBuff;
		answerString_clearFlg = true;
		calcAnswerToDataGridView(calcAnswerString);
	}
	else {
		if (inputOperandFlg == true) {

			operandBuff = newOperand;
			calcProcessString = String::Concat(newOperand, " �� ");

			answerString_clearFlg = true;
		}
		else {
			calcProcessString = String::Concat("0 ", " �� ");
		}
	}
	clickButtonNum = 4;
	CalcResultViewDrawString();
}
//
// �N���A�{�^���������ꂽ�ꍇ�̏���
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

	//�v�Z���ʂ̗������폜
	dataGridView1->Rows->Clear();

	//�v�Z���ʊi�[�p�t�@�C�����폜
	FileInfo^ fileInfo = gcnew FileInfo(calcResultDataPath);
	fileInfo->Delete();

	CalcResultViewDrawString();
}
//
// pictureBox�\���p������쐬�֐�
//
System::Void FunctionCalc::FunctionCalc_mainForm::MakeOperandString(double buttonNum) {

	//�h�b�g�{�^���������ꂽ�ꍇ�̏���
	if (buttonNum == 10) {
		////���l�������"."���܂܂�Ă��邩����(�v�Z���ʂɕ\�����鐔�l��24���𒴂��ĂȂ�����)
		//if (!calcAnswerString->Contains(".") && calcAnswerString->Length < 12) {
		//	//�v�Z���ʂɕ\������Ă��鐔�l������Ƀh�b�g������
		//	operandString = String::Concat(calcAnswerString, ".");
		//	//�����������l�������double�^�ɕϊ����Čv�Z�p�̕ϐ��Ɋi�[
		//	newOperand = double::Parse(operandString);
		//	//�v�Z���ʂ𕶎���ɕϊ�����pictureBox�ɕ\��
		//	calcAnswerString = newOperand.ToString();
		//}
	}
	//���l�{�^���������ꂽ�ꍇ�̏���
	else {
		//�v�Z���ʂɕ\�����鐔�l��11���𒴂��ĂȂ����Ɗm�F
		if (calcAnswerString->Length < 12) {
			//�v�Z�{�^����������Ă����ꍇ�͕\������Ă���v�Z���ʂ�������
			if (answerString_clearFlg == true) {
				calcAnswerString = "0";
			}
			//�v�Z���ʂɕ\������Ă��鐔�l������ɓ��͂��ꂽ���l������
			operandString = String::Concat(calcAnswerString, buttonNum.ToString());
			//�����������l�������double�^�ɕϊ����Čv�Z�p�̕ϐ��Ɋi�[
			newOperand = double::Parse(operandString);
			//�v�Z���ʂ𕶎���ɕϊ�����pictureBox�ɕ\��
			calcAnswerString = newOperand.ToString();
		}
	}
	answerString_clearFlg = false;
	CalcResultViewDrawString();
}
//
// dataGridView���ʏo�͗p�֐�
//
System::Void FunctionCalc::FunctionCalc_mainForm::calcAnswerToDataGridView(String^ calcAnswerString) {

	dataGridView1->Rows->Add();

	//�v�Z���ʂ��t�@�C���֋L�^
	System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(calcResultDataPath, false, System::Text::Encoding::Default);

	//�ŐV�̃f�[�^��擪�֔z�u����悤�\�[�g
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
// �v�Z���ʊi�[�p�t�@�C���̃t���p�X�擾�֐�
//
System::Void FunctionCalc::FunctionCalc_mainForm::CreateCalcResltDataPath(Void) {

	//�A�v�������s���ꂽ�t���p�X���擾CreateRapTimeResultDataPath
	String^ executePath = Application::ExecutablePath;

	//�t���p�X����f�B���N�g���p�X���쐬
	String^ executeFilePath = Application::ExecutablePath;
	String^ executeDirectoryPath = Path::GetDirectoryName(executeFilePath);
	String^ calcResultDataDirectoryPath = String::Concat(executeDirectoryPath, "\\", "ResultData");

	//�A�v�����z�u����Ă���K�w��Result�t�@�C���i�[�p�f�B���N�g�����쐬
	DirectoryInfo^ directoryInfo = gcnew DirectoryInfo(calcResultDataDirectoryPath);
	directoryInfo->Create();

	calcResultDataPath = String::Concat(calcResultDataDirectoryPath, "\\", "CalcResultData.ini");
}
//
// pictureBox�`��ݒ�֐�
//
System::Void FunctionCalc::FunctionCalc_mainForm::CalcResultViewDrawString(void) {

	//pictureBox�ɓ\��t����C���[�W�̃T�C�Y���`(pictureBox�̕��ƍ����ɍ��킹��)
	Bitmap^ canvas = gcnew Bitmap(CalcResultView->Width, CalcResultView->Height);

	//�`��p�̕ϐ����`
	Graphics^ g = Graphics::FromImage(canvas);

	//�`�悷�镶������E���Ɋ񂹂�ݒ�
	StringFormat^ drawFormat = gcnew StringFormat;
	drawFormat->Alignment = StringAlignment::Far;

	//����1px�̐���pictureBox�̘g��`��
	Pen^ pen = gcnew Pen(Color::Black, 1);
	g->DrawRectangle(pen, 0, 0, 349, 119);

	//�`�悷�镶����̐ݒ�(DrawString(�\�������镶����, �t�H���g�̐ݒ�, �����F, ��_(�E�񂹂̏ꍇ�͊�_��������̉E��[�ɂȂ�), ������t�H�[�}�b�g))
	//�v�Z�ߒ��̓t�H���g�T�C�Y18pt�ŕ`��
	g->DrawString(calcProcessString, gcnew Drawing::Font("���S�V�b�N", 18), Brushes::Black, 350, 20, drawFormat);
	//�v�Z���ʂ̓t�H���g�T�C�Y36pt�ŕ`��
	g->DrawString(calcAnswerString, gcnew Drawing::Font("���S�V�b�N", 36), Brushes::Black, 350, 60, drawFormat);

	//pictureBox�ɍ쐬�����C���[�W��\��t����
	CalcResultView->Image = canvas;
}
