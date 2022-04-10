#pragma once

namespace StopWatchver10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// StopWatch_mainForm の概要
	/// </summary>
	public ref class StopWatch_mainForm : public System::Windows::Forms::Form
	{
	public:
		StopWatch_mainForm(void)
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
		~StopWatch_mainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ Timer1;
	protected:

	private: System::Windows::Forms::PictureBox^ CountTimeView;
	protected:

	private: System::Windows::Forms::Label^ RapTimeResultLaber;
	private: System::Windows::Forms::Button^ StartButton;
	private: System::Windows::Forms::Button^ StopButton;
	private: System::Windows::Forms::Button^ ResetButton;


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;


	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->Timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->CountTimeView = (gcnew System::Windows::Forms::PictureBox());
			this->RapTimeResultLaber = (gcnew System::Windows::Forms::Label());
			this->StartButton = (gcnew System::Windows::Forms::Button());
			this->StopButton = (gcnew System::Windows::Forms::Button());
			this->ResetButton = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CountTimeView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// Timer1
			// 
			this->Timer1->Interval = 10;
			this->Timer1->Tick += gcnew System::EventHandler(this, &StopWatch_mainForm::Timer1_Tick);
			// 
			// CountTimeView
			// 
			this->CountTimeView->Location = System::Drawing::Point(12, 12);
			this->CountTimeView->Name = L"CountTimeView";
			this->CountTimeView->Size = System::Drawing::Size(200, 50);
			this->CountTimeView->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->CountTimeView->TabIndex = 0;
			this->CountTimeView->TabStop = false;
			// 
			// RapTimeResultLaber
			// 
			this->RapTimeResultLaber->AutoSize = true;
			this->RapTimeResultLaber->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->RapTimeResultLaber->Location = System::Drawing::Point(12, 70);
			this->RapTimeResultLaber->Name = L"RapTimeResultLaber";
			this->RapTimeResultLaber->Size = System::Drawing::Size(62, 13);
			this->RapTimeResultLaber->TabIndex = 1;
			this->RapTimeResultLaber->Text = L"RapTime";
			// 
			// StartButton
			// 
			this->StartButton->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->StartButton->Location = System::Drawing::Point(12, 200);
			this->StartButton->Name = L"StartButton";
			this->StartButton->Size = System::Drawing::Size(60, 30);
			this->StartButton->TabIndex = 2;
			this->StartButton->Text = L"Start";
			this->StartButton->UseVisualStyleBackColor = true;
			this->StartButton->Click += gcnew System::EventHandler(this, &StopWatch_mainForm::StartButton_Click);
			// 
			// StopButton
			// 
			this->StopButton->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->StopButton->Location = System::Drawing::Point(82, 200);
			this->StopButton->Name = L"StopButton";
			this->StopButton->Size = System::Drawing::Size(60, 30);
			this->StopButton->TabIndex = 3;
			this->StopButton->Text = L"Stop";
			this->StopButton->UseVisualStyleBackColor = true;
			this->StopButton->Click += gcnew System::EventHandler(this, &StopWatch_mainForm::StopButton_Click);
			// 
			// ResetButton
			// 
			this->ResetButton->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->ResetButton->Location = System::Drawing::Point(152, 200);
			this->ResetButton->Name = L"ResetButton";
			this->ResetButton->Size = System::Drawing::Size(60, 30);
			this->ResetButton->TabIndex = 4;
			this->ResetButton->Text = L"Reset";
			this->ResetButton->UseVisualStyleBackColor = true;
			this->ResetButton->Click += gcnew System::EventHandler(this, &StopWatch_mainForm::ResetButton_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column1 });
			this->dataGridView1->Location = System::Drawing::Point(12, 85);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView1->Size = System::Drawing::Size(200, 99);
			this->dataGridView1->TabIndex = 5;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"RapTime";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 197;
			// 
			// StopWatch_mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(224, 241);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->ResetButton);
			this->Controls->Add(this->StopButton);
			this->Controls->Add(this->StartButton);
			this->Controls->Add(this->RapTimeResultLaber);
			this->Controls->Add(this->CountTimeView);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"StopWatch_mainForm";
			this->Text = L"StopWatch";
			this->Load += gcnew System::EventHandler(this, &StopWatch_mainForm::StopWatch_mainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CountTimeView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//
	// prototypeDeclaration
	//
	private: 
		System::Void StopWatch_mainForm_Load(System::Object^ sender, System::EventArgs^ e);
		System::Void StartButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void StopButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void ResetButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Timer1_Tick(System::Object^ sender, System::EventArgs^ e);
		System::Void CountTimeDrawString(Void);
		System::Void CreateRapTimeResultDataPath(Void);
	
	private:
		int cntTime_msec = 0;
		int cntTime_sec = 0;
		int cntTime_min = 0;

		String^ rapTimeResultDataPath = nullptr;
		String^ cntTimeStr = "00:00:00";
		String^ cntTimeStrBuff = "00:00:00";
};
}
