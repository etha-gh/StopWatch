#pragma once

namespace FunctionCalc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// FunctionCalc_mainForm の概要
	/// </summary>
	public ref class FunctionCalc_mainForm : public System::Windows::Forms::Form
	{
	public:
		FunctionCalc_mainForm(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~FunctionCalc_mainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:
	private: System::Windows::Forms::Button^ InputNum_0_button;
	private: System::Windows::Forms::Button^ InputNum_1_button;
	private: System::Windows::Forms::Button^ InputNum_2_button;
	private: System::Windows::Forms::Button^ InputNum_3_button;
	private: System::Windows::Forms::Button^ InputNum_4_button;
	private: System::Windows::Forms::Button^ InputNum_5_button;
	private: System::Windows::Forms::Button^ InputNum_6_button;
	private: System::Windows::Forms::Button^ InputNum_7_button;
	private: System::Windows::Forms::Button^ InputNum_8_button;
	private: System::Windows::Forms::Button^ InputNum_9_button;
	private: System::Windows::Forms::PictureBox^ CalcResultView;
	private: System::Windows::Forms::Button^ Division_button;



	private: System::Windows::Forms::Button^ Product_button;

	private: System::Windows::Forms::Button^ Minus_button;

	private: System::Windows::Forms::Button^ Puls_Button;

	private: System::Windows::Forms::Button^ Equal_button;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ Clear_button;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ Input_dot_button;


	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CalcAnswerResult;




	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->InputNum_0_button = (gcnew System::Windows::Forms::Button());
			this->InputNum_1_button = (gcnew System::Windows::Forms::Button());
			this->InputNum_2_button = (gcnew System::Windows::Forms::Button());
			this->InputNum_3_button = (gcnew System::Windows::Forms::Button());
			this->InputNum_4_button = (gcnew System::Windows::Forms::Button());
			this->InputNum_5_button = (gcnew System::Windows::Forms::Button());
			this->InputNum_6_button = (gcnew System::Windows::Forms::Button());
			this->InputNum_7_button = (gcnew System::Windows::Forms::Button());
			this->InputNum_8_button = (gcnew System::Windows::Forms::Button());
			this->InputNum_9_button = (gcnew System::Windows::Forms::Button());
			this->CalcResultView = (gcnew System::Windows::Forms::PictureBox());
			this->Division_button = (gcnew System::Windows::Forms::Button());
			this->Product_button = (gcnew System::Windows::Forms::Button());
			this->Minus_button = (gcnew System::Windows::Forms::Button());
			this->Puls_Button = (gcnew System::Windows::Forms::Button());
			this->Equal_button = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->CalcAnswerResult = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Clear_button = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->Input_dot_button = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CalcResultView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// InputNum_0_button
			// 
			this->InputNum_0_button->Font = (gcnew System::Drawing::Font(L"游ゴシック", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->InputNum_0_button->Location = System::Drawing::Point(102, 430);
			this->InputNum_0_button->Name = L"InputNum_0_button";
			this->InputNum_0_button->Size = System::Drawing::Size(80, 50);
			this->InputNum_0_button->TabIndex = 0;
			this->InputNum_0_button->Text = L"0";
			this->InputNum_0_button->UseVisualStyleBackColor = true;
			this->InputNum_0_button->Click += gcnew System::EventHandler(this, &FunctionCalc_mainForm::InputNum_0_button_Click);
			// 
			// InputNum_1_button
			// 
			this->InputNum_1_button->Font = (gcnew System::Drawing::Font(L"游ゴシック", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->InputNum_1_button->Location = System::Drawing::Point(12, 372);
			this->InputNum_1_button->Name = L"InputNum_1_button";
			this->InputNum_1_button->Size = System::Drawing::Size(80, 50);
			this->InputNum_1_button->TabIndex = 1;
			this->InputNum_1_button->Text = L"1";
			this->InputNum_1_button->UseVisualStyleBackColor = true;
			this->InputNum_1_button->Click += gcnew System::EventHandler(this, &FunctionCalc_mainForm::InputNum_1_button_Click);
			// 
			// InputNum_2_button
			// 
			this->InputNum_2_button->Font = (gcnew System::Drawing::Font(L"游ゴシック", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->InputNum_2_button->Location = System::Drawing::Point(102, 372);
			this->InputNum_2_button->Name = L"InputNum_2_button";
			this->InputNum_2_button->Size = System::Drawing::Size(80, 50);
			this->InputNum_2_button->TabIndex = 2;
			this->InputNum_2_button->Text = L"2";
			this->InputNum_2_button->UseVisualStyleBackColor = true;
			this->InputNum_2_button->Click += gcnew System::EventHandler(this, &FunctionCalc_mainForm::InputNum_2_button_Click);
			// 
			// InputNum_3_button
			// 
			this->InputNum_3_button->Font = (gcnew System::Drawing::Font(L"游ゴシック", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->InputNum_3_button->Location = System::Drawing::Point(192, 372);
			this->InputNum_3_button->Name = L"InputNum_3_button";
			this->InputNum_3_button->Size = System::Drawing::Size(80, 50);
			this->InputNum_3_button->TabIndex = 3;
			this->InputNum_3_button->Text = L"3";
			this->InputNum_3_button->UseVisualStyleBackColor = true;
			this->InputNum_3_button->Click += gcnew System::EventHandler(this, &FunctionCalc_mainForm::InputNum_3_button_Click);
			// 
			// InputNum_4_button
			// 
			this->InputNum_4_button->Font = (gcnew System::Drawing::Font(L"游ゴシック", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->InputNum_4_button->Location = System::Drawing::Point(12, 315);
			this->InputNum_4_button->Name = L"InputNum_4_button";
			this->InputNum_4_button->Size = System::Drawing::Size(80, 50);
			this->InputNum_4_button->TabIndex = 4;
			this->InputNum_4_button->Text = L"4";
			this->InputNum_4_button->UseVisualStyleBackColor = true;
			this->InputNum_4_button->Click += gcnew System::EventHandler(this, &FunctionCalc_mainForm::InputNum_4_button_Click);
			// 
			// InputNum_5_button
			// 
			this->InputNum_5_button->Font = (gcnew System::Drawing::Font(L"游ゴシック", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->InputNum_5_button->Location = System::Drawing::Point(102, 315);
			this->InputNum_5_button->Name = L"InputNum_5_button";
			this->InputNum_5_button->Size = System::Drawing::Size(80, 50);
			this->InputNum_5_button->TabIndex = 9;
			this->InputNum_5_button->Text = L"5";
			this->InputNum_5_button->UseVisualStyleBackColor = true;
			this->InputNum_5_button->Click += gcnew System::EventHandler(this, &FunctionCalc_mainForm::InputNum_5_button_Click);
			// 
			// InputNum_6_button
			// 
			this->InputNum_6_button->Font = (gcnew System::Drawing::Font(L"游ゴシック", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->InputNum_6_button->Location = System::Drawing::Point(192, 315);
			this->InputNum_6_button->Name = L"InputNum_6_button";
			this->InputNum_6_button->Size = System::Drawing::Size(80, 50);
			this->InputNum_6_button->TabIndex = 8;
			this->InputNum_6_button->Text = L"6";
			this->InputNum_6_button->UseVisualStyleBackColor = true;
			this->InputNum_6_button->Click += gcnew System::EventHandler(this, &FunctionCalc_mainForm::InputNum_6_button_Click);
			// 
			// InputNum_7_button
			// 
			this->InputNum_7_button->Font = (gcnew System::Drawing::Font(L"游ゴシック", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->InputNum_7_button->Location = System::Drawing::Point(12, 258);
			this->InputNum_7_button->Name = L"InputNum_7_button";
			this->InputNum_7_button->Size = System::Drawing::Size(80, 50);
			this->InputNum_7_button->TabIndex = 7;
			this->InputNum_7_button->Text = L"7";
			this->InputNum_7_button->UseVisualStyleBackColor = true;
			this->InputNum_7_button->Click += gcnew System::EventHandler(this, &FunctionCalc_mainForm::InputNum_7_button_Click);
			// 
			// InputNum_8_button
			// 
			this->InputNum_8_button->Font = (gcnew System::Drawing::Font(L"游ゴシック", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->InputNum_8_button->Location = System::Drawing::Point(102, 258);
			this->InputNum_8_button->Name = L"InputNum_8_button";
			this->InputNum_8_button->Size = System::Drawing::Size(80, 50);
			this->InputNum_8_button->TabIndex = 6;
			this->InputNum_8_button->Text = L"8";
			this->InputNum_8_button->UseVisualStyleBackColor = true;
			this->InputNum_8_button->Click += gcnew System::EventHandler(this, &FunctionCalc_mainForm::InputNum_8_button_Click);
			// 
			// InputNum_9_button
			// 
			this->InputNum_9_button->Font = (gcnew System::Drawing::Font(L"游ゴシック", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->InputNum_9_button->Location = System::Drawing::Point(192, 258);
			this->InputNum_9_button->Name = L"InputNum_9_button";
			this->InputNum_9_button->Size = System::Drawing::Size(80, 50);
			this->InputNum_9_button->TabIndex = 5;
			this->InputNum_9_button->Text = L"9";
			this->InputNum_9_button->UseVisualStyleBackColor = true;
			this->InputNum_9_button->Click += gcnew System::EventHandler(this, &FunctionCalc_mainForm::InputNum_9_button_Click);
			// 
			// CalcResultView
			// 
			this->CalcResultView->Location = System::Drawing::Point(12, 12);
			this->CalcResultView->Name = L"CalcResultView";
			this->CalcResultView->Size = System::Drawing::Size(350, 120);
			this->CalcResultView->TabIndex = 10;
			this->CalcResultView->TabStop = false;
			// 
			// Division_button
			// 
			this->Division_button->Font = (gcnew System::Drawing::Font(L"メイリオ", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->Division_button->Location = System::Drawing::Point(282, 201);
			this->Division_button->Name = L"Division_button";
			this->Division_button->Size = System::Drawing::Size(80, 50);
			this->Division_button->TabIndex = 11;
			this->Division_button->Text = L"÷";
			this->Division_button->UseVisualStyleBackColor = true;
			this->Division_button->Click += gcnew System::EventHandler(this, &FunctionCalc_mainForm::Division_button_Click);
			// 
			// Product_button
			// 
			this->Product_button->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->Product_button->Location = System::Drawing::Point(282, 258);
			this->Product_button->Name = L"Product_button";
			this->Product_button->Size = System::Drawing::Size(80, 50);
			this->Product_button->TabIndex = 12;
			this->Product_button->Text = L"X";
			this->Product_button->UseVisualStyleBackColor = true;
			this->Product_button->Click += gcnew System::EventHandler(this, &FunctionCalc_mainForm::Product_button_Click);
			// 
			// Minus_button
			// 
			this->Minus_button->Font = (gcnew System::Drawing::Font(L"メイリオ", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->Minus_button->Location = System::Drawing::Point(282, 315);
			this->Minus_button->Name = L"Minus_button";
			this->Minus_button->Size = System::Drawing::Size(80, 50);
			this->Minus_button->TabIndex = 13;
			this->Minus_button->Text = L"-";
			this->Minus_button->UseVisualStyleBackColor = true;
			this->Minus_button->Click += gcnew System::EventHandler(this, &FunctionCalc_mainForm::Minus_button_Click);
			// 
			// Puls_Button
			// 
			this->Puls_Button->Font = (gcnew System::Drawing::Font(L"メイリオ", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->Puls_Button->Location = System::Drawing::Point(282, 372);
			this->Puls_Button->Name = L"Puls_Button";
			this->Puls_Button->Size = System::Drawing::Size(80, 50);
			this->Puls_Button->TabIndex = 14;
			this->Puls_Button->Text = L"+";
			this->Puls_Button->UseVisualStyleBackColor = true;
			this->Puls_Button->Click += gcnew System::EventHandler(this, &FunctionCalc_mainForm::Puls_Button_Click);
			// 
			// Equal_button
			// 
			this->Equal_button->Font = (gcnew System::Drawing::Font(L"メイリオ", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->Equal_button->Location = System::Drawing::Point(282, 430);
			this->Equal_button->Name = L"Equal_button";
			this->Equal_button->Size = System::Drawing::Size(80, 50);
			this->Equal_button->TabIndex = 15;
			this->Equal_button->Text = L"=";
			this->Equal_button->UseVisualStyleBackColor = true;
			this->Equal_button->Click += gcnew System::EventHandler(this, &FunctionCalc_mainForm::Equal_button_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleRight;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->CalcAnswerResult });
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"游ゴシック", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridView1->Location = System::Drawing::Point(380, 40);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle8->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowTemplate->Height = 40;
			this->dataGridView1->Size = System::Drawing::Size(150, 440);
			this->dataGridView1->TabIndex = 16;
			// 
			// CalcAnswerResult
			// 
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleRight;
			this->CalcAnswerResult->DefaultCellStyle = dataGridViewCellStyle6;
			this->CalcAnswerResult->HeaderText = L"CalcAnswerResult";
			this->CalcAnswerResult->Name = L"CalcAnswerResult";
			this->CalcAnswerResult->Width = 147;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"游ゴシック", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label1->Location = System::Drawing::Point(380, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 21);
			this->label1->TabIndex = 17;
			this->label1->Text = L"計算結果";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"游ゴシック", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button1->Location = System::Drawing::Point(12, 201);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 50);
			this->button1->TabIndex = 18;
			this->button1->Text = L"%";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// Clear_button
			// 
			this->Clear_button->Font = (gcnew System::Drawing::Font(L"游ゴシック", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->Clear_button->Location = System::Drawing::Point(102, 201);
			this->Clear_button->Name = L"Clear_button";
			this->Clear_button->Size = System::Drawing::Size(80, 50);
			this->Clear_button->TabIndex = 19;
			this->Clear_button->Text = L"C";
			this->Clear_button->UseVisualStyleBackColor = true;
			this->Clear_button->Click += gcnew System::EventHandler(this, &FunctionCalc_mainForm::Clear_button_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"メイリオ", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button3->Location = System::Drawing::Point(192, 201);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 50);
			this->button3->TabIndex = 20;
			this->button3->Text = L"←";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"メイリオ", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button4->Location = System::Drawing::Point(12, 430);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(80, 50);
			this->button4->TabIndex = 21;
			this->button4->Text = L"+/-";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// Input_dot_button
			// 
			this->Input_dot_button->Font = (gcnew System::Drawing::Font(L"メイリオ", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->Input_dot_button->Location = System::Drawing::Point(192, 430);
			this->Input_dot_button->Name = L"Input_dot_button";
			this->Input_dot_button->Size = System::Drawing::Size(80, 50);
			this->Input_dot_button->TabIndex = 22;
			this->Input_dot_button->Text = L".";
			this->Input_dot_button->UseVisualStyleBackColor = true;
			this->Input_dot_button->Click += gcnew System::EventHandler(this, &FunctionCalc_mainForm::Input_dot_button_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"游ゴシック", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button6->Location = System::Drawing::Point(12, 144);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(80, 50);
			this->button6->TabIndex = 23;
			this->button6->Text = L"MR";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"游ゴシック", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button7->Location = System::Drawing::Point(102, 144);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(80, 50);
			this->button7->TabIndex = 24;
			this->button7->Text = L"MS";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"游ゴシック", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button8->Location = System::Drawing::Point(192, 144);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(80, 50);
			this->button8->TabIndex = 25;
			this->button8->Text = L"MC";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// FunctionCalc_mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(543, 495);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->Input_dot_button);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->Clear_button);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->Equal_button);
			this->Controls->Add(this->Puls_Button);
			this->Controls->Add(this->Minus_button);
			this->Controls->Add(this->Product_button);
			this->Controls->Add(this->Division_button);
			this->Controls->Add(this->CalcResultView);
			this->Controls->Add(this->InputNum_0_button);
			this->Controls->Add(this->InputNum_1_button);
			this->Controls->Add(this->InputNum_2_button);
			this->Controls->Add(this->InputNum_3_button);
			this->Controls->Add(this->InputNum_4_button);
			this->Controls->Add(this->InputNum_5_button);
			this->Controls->Add(this->InputNum_6_button);
			this->Controls->Add(this->InputNum_7_button);
			this->Controls->Add(this->InputNum_8_button);
			this->Controls->Add(this->InputNum_9_button);
			this->Name = L"FunctionCalc_mainForm";
			this->Text = L"関数電卓";
			this->Load += gcnew System::EventHandler(this, &FunctionCalc_mainForm::FunctionCalc_mainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CalcResultView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: int clickButtonNum = 0;
	private: double operandBuff = 0;			   //数値一時格納用変数
	private: double newOperand = 0;				   //数値格納用変数
	private: String^ operandString = "";		   //数値文字列格納用変数
	private: String^ calcProcessString = nullptr;  //計算過程文字列用変数
	private: String^ calcAnswerString = "0";	   //計算結果文字列格納用変数
	private: bool inputOperandFlg = false;		   //数値入力確認フラグ
	private: bool answerString_clearFlg = false;   //計算結果クリアフラグ
	private: String^ calcResultDataPath = nullptr; //計算結果記録ファイルパス

	private: System::Void FunctionCalc_mainForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void InputNum_0_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void InputNum_1_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void InputNum_2_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void InputNum_3_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void InputNum_4_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void InputNum_5_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void InputNum_6_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void InputNum_7_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void InputNum_8_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void InputNum_9_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Input_dot_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Equal_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Puls_Button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Minus_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Product_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Division_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Clear_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void MakeOperandString(double buttonNum);
	private: System::Void calcAnswerToDataGridView(String^ calcAnswerString);
	private: System::Void CreateCalcResltDataPath(Void);
	private: System::Void CalcResultViewDrawString(void);
};
}
