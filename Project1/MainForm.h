#include "Worker.h"
#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ LowNumber;
	private: System::Windows::Forms::Button^ SubmitButton;
	private: System::Windows::Forms::Button^ ResetButton;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label2;
	private: System::ComponentModel::IContainer^ components;


#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->LowNumber = (gcnew System::Windows::Forms::TextBox());
			this->SubmitButton = (gcnew System::Windows::Forms::Button());
			this->ResetButton = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(34, 114);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(287, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter the number:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(32, 29);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(589, 52);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Number of allocated objects";
			// 
			// LowNumber
			// 
			this->LowNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LowNumber->Location = System::Drawing::Point(342, 113);
			this->LowNumber->Name = L"LowNumber";
			this->LowNumber->Size = System::Drawing::Size(388, 41);
			this->LowNumber->TabIndex = 3;
			// 
			// SubmitButton
			// 
			this->SubmitButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->SubmitButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SubmitButton->Location = System::Drawing::Point(342, 182);
			this->SubmitButton->Name = L"SubmitButton";
			this->SubmitButton->Size = System::Drawing::Size(189, 74);
			this->SubmitButton->TabIndex = 6;
			this->SubmitButton->Text = L"Submit";
			this->SubmitButton->UseVisualStyleBackColor = false;
			this->SubmitButton->Click += gcnew System::EventHandler(this, &MainForm::SubmitButton_Click);
			// 
			// ResetButton
			// 
			this->ResetButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ResetButton->Cursor = System::Windows::Forms::Cursors::AppStarting;
			this->ResetButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ResetButton->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->ResetButton->Location = System::Drawing::Point(541, 182);
			this->ResetButton->Name = L"ResetButton";
			this->ResetButton->Size = System::Drawing::Size(189, 74);
			this->ResetButton->TabIndex = 7;
			this->ResetButton->Text = L"Reset";
			this->ResetButton->UseVisualStyleBackColor = false;
			this->ResetButton->Click += gcnew System::EventHandler(this, &MainForm::ResetButton_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tableLayoutPanel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel1->ColumnCount = 6;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel1->Controls->Add(this->label8, 5, 0);
			this->tableLayoutPanel1->Controls->Add(this->label7, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->label6, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->label5, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->label4, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label11, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label10, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->label14, 5, 1);
			this->tableLayoutPanel1->Controls->Add(this->label16, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->label17, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->label18, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->label19, 4, 2);
			this->tableLayoutPanel1->Controls->Add(this->label20, 5, 2);
			this->tableLayoutPanel1->Controls->Add(this->label12, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->label13, 4, 1);
			this->tableLayoutPanel1->Controls->Add(this->label9, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label2, 0, 2);
			this->tableLayoutPanel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tableLayoutPanel1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 316);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1093, 414);
			this->tableLayoutPanel1->TabIndex = 8;
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(930, 56);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(142, 25);
			this->label8->TabIndex = 4;
			this->label8->Text = L"my_shared_ptr";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(749, 56);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(141, 25);
			this->label7->TabIndex = 3;
			this->label7->Text = L"my_unique_ptr";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(570, 56);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(135, 25);
			this->label6->TabIndex = 2;
			this->label6->Text = L"stl_shared_ptr";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(388, 56);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(135, 25);
			this->label5->TabIndex = 1;
			this->label5->Text = L"srl_unique_ptr";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(217, 56);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(113, 25);
			this->label4->TabIndex = 0;
			this->label4->Text = L"raw_pointer";
			// 
			// label11
			// 
			this->label11->AllowDrop = true;
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(18, 193);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(147, 25);
			this->label11->TabIndex = 7;
			this->label11->Text = L"time in seconds";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(444, 193);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(23, 25);
			this->label10->TabIndex = 6;
			this->label10->Text = L"0";
			// 
			// label14
			// 
			this->label14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(990, 193);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(23, 25);
			this->label14->TabIndex = 10;
			this->label14->Text = L"0";
			// 
			// label16
			// 
			this->label16->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(262, 331);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(23, 25);
			this->label16->TabIndex = 12;
			this->label16->Text = L"0";
			// 
			// label17
			// 
			this->label17->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(444, 331);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(23, 25);
			this->label17->TabIndex = 13;
			this->label17->Text = L"0";
			// 
			// label18
			// 
			this->label18->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(626, 331);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(23, 25);
			this->label18->TabIndex = 14;
			this->label18->Text = L"0";
			// 
			// label19
			// 
			this->label19->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(808, 331);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(23, 25);
			this->label19->TabIndex = 15;
			this->label19->Text = L"0";
			// 
			// label20
			// 
			this->label20->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(990, 331);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(23, 25);
			this->label20->TabIndex = 16;
			this->label20->Text = L"0";
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(626, 193);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(23, 25);
			this->label12->TabIndex = 8;
			this->label12->Text = L"0";
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(808, 193);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(23, 25);
			this->label13->TabIndex = 9;
			this->label13->Text = L"0";
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(262, 193);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(23, 25);
			this->label9->TabIndex = 5;
			this->label9->Text = L"0";
			// 
			// label2
			// 
			this->label2->AllowDrop = true;
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 331);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(137, 25);
			this->label2->TabIndex = 17;
			this->label2->Text = L"memory in bits";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(766, 113);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(264, 40);
			this->checkBox1->TabIndex = 9;
			this->checkBox1->Text = L"Turn On Console";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(1104, 763);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->ResetButton);
			this->Controls->Add(this->SubmitButton);
			this->Controls->Add(this->LowNumber);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ResetButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->LowNumber->Text = "";
		label9->Text = "0";
		label10->Text = "0";
		label12->Text = "0";
		label13->Text = "0";
		label14->Text = "0";
		label16->Text = "0";
		label17->Text = "0";
		label18->Text = "0";
		label19->Text = "0";
		label20->Text = "0";
	}
private: System::Void SubmitButton_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Int32 number;

	try {
		System::String^ number_s = this->LowNumber->Text->Trim();
		number = Convert::ToUInt32(number_s);

		double raw_pointer_duration; 
		double stl_unique_ptr_duration; 
		double stl_shared_ptr_duration;
		double my_unique_ptr_duration;
		double my_shared_ptr_duration;

		int use_memory_raw_pointer;
		int use_memory_stl_unique_ptr;
		int use_memory_stl_shared_ptr;
		int use_memory_my_unique_ptr;
		int use_memory_my_shared_ptr;

		bool is_console = checkBox1->Checked;

		work(number, &raw_pointer_duration, &stl_unique_ptr_duration, &stl_shared_ptr_duration,
			&my_unique_ptr_duration, &my_shared_ptr_duration, 
			&use_memory_raw_pointer, &use_memory_stl_unique_ptr, &use_memory_stl_shared_ptr, &use_memory_my_unique_ptr,
			&use_memory_my_shared_ptr,
			is_console);

		label9->Text = Convert::ToString(raw_pointer_duration);
		label10->Text = Convert::ToString(stl_unique_ptr_duration);
		label12->Text = Convert::ToString(stl_shared_ptr_duration);
		label13->Text = Convert::ToString(my_unique_ptr_duration);
		label14->Text = Convert::ToString(my_shared_ptr_duration);

		label16->Text = Convert::ToString(use_memory_raw_pointer);
		label17->Text = Convert::ToString(use_memory_stl_unique_ptr);
		label18->Text = Convert::ToString(use_memory_stl_shared_ptr);
		label19->Text = Convert::ToString(use_memory_my_unique_ptr);
		label20->Text = Convert::ToString(use_memory_my_shared_ptr);
	}
	catch (FormatException^ ex)
	{
		MessageBox::Show("The input string has an incorrect format!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	catch (OverflowException^ ex)
	{
		MessageBox::Show("An incorrect number was entered!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
}
};
}