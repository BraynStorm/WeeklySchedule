#pragma once

namespace WeeklySchedule {

	using namespace System;
	using namespace System::ComponentModel; // Why is this red WTF ??? 
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form {
	public:
		MyForm(void) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm() {
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBoxKlasove;
	protected:
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ListBox^  listBoxGrupi;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Button^  btnSaveTemplate;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::Button^  button6;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void) {
			this->components = (gcnew System::ComponentModel::Container());
			this->listBoxKlasove = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBoxGrupi = (gcnew System::Windows::Forms::ListBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->btnSaveTemplate = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// listBoxKlasove
			// 
			this->listBoxKlasove->FormattingEnabled = true;
			this->listBoxKlasove->Location = System::Drawing::Point(6, 19);
			this->listBoxKlasove->Name = L"listBoxKlasove";
			this->listBoxKlasove->Size = System::Drawing::Size(133, 524);
			this->listBoxKlasove->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->listBoxKlasove);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(151, 608);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Класове";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(6, 576);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(133, 21);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Изтриване";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(6, 549);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(133, 21);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Добавяне";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Location = System::Drawing::Point(333, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(801, 608);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Настройка  на клас";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button2);
			this->groupBox3->Controls->Add(this->button1);
			this->groupBox3->Controls->Add(this->listBoxGrupi);
			this->groupBox3->Location = System::Drawing::Point(169, 12);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(158, 176);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Групи";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(6, 147);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(146, 21);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Изтриване";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 120);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 21);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Добавяне";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// listBoxGrupi
			// 
			this->listBoxGrupi->FormattingEnabled = true;
			this->listBoxGrupi->Location = System::Drawing::Point(6, 19);
			this->listBoxGrupi->Name = L"listBoxGrupi";
			this->listBoxGrupi->Size = System::Drawing::Size(146, 95);
			this->listBoxGrupi->TabIndex = 0;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->btnSaveTemplate);
			this->groupBox4->Controls->Add(this->button5);
			this->groupBox4->Location = System::Drawing::Point(169, 489);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(158, 131);
			this->groupBox4->TabIndex = 4;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Запазване";
			// 
			// btnSaveTemplate
			// 
			this->btnSaveTemplate->Location = System::Drawing::Point(6, 19);
			this->btnSaveTemplate->Name = L"btnSaveTemplate";
			this->btnSaveTemplate->Size = System::Drawing::Size(146, 49);
			this->btnSaveTemplate->TabIndex = 0;
			this->btnSaveTemplate->Text = L"... на шаблона";
			this->btnSaveTemplate->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(6, 72);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(146, 53);
			this->button5->TabIndex = 0;
			this->button5->Text = L"... в текстови формат";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(175, 434);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(146, 49);
			this->button6->TabIndex = 0;
			this->button6->Text = L"Отваряне на шаблон";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1146, 628);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"Генератор на седмична програма";
			this->groupBox1->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {}
	};
}