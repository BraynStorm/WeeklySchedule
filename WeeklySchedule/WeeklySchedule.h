#pragma once

#include "PopUpForm.h"
#include "MyUserControl.h"

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

	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  btnPremahniGrupa;

	private: System::Windows::Forms::Button^  btnDobaviGrupa;

	private: System::Windows::Forms::ListBox^  listBoxGrupi;
	private: System::Windows::Forms::Button^  btnPremahniKlas;

	private: System::Windows::Forms::Button^  btnDobaviKlas;


	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Button^  btnZapishiShablon;
	private: System::Windows::Forms::Button^  btnZapishiTxt;


	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::Button^  btnOtvoriShablon;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Button^  btnPremahniUchitel;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  btnDobaviUchitel;


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
			this->btnPremahniKlas = (gcnew System::Windows::Forms::Button());
			this->btnDobaviKlas = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->btnPremahniGrupa = (gcnew System::Windows::Forms::Button());
			this->btnDobaviGrupa = (gcnew System::Windows::Forms::Button());
			this->listBoxGrupi = (gcnew System::Windows::Forms::ListBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->btnZapishiShablon = (gcnew System::Windows::Forms::Button());
			this->btnZapishiTxt = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btnOtvoriShablon = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->btnPremahniUchitel = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->btnDobaviUchitel = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// listBoxKlasove
			// 
			this->listBoxKlasove->FormattingEnabled = true;
			this->listBoxKlasove->Location = System::Drawing::Point(6, 19);
			this->listBoxKlasove->Name = L"listBoxKlasove";
			this->listBoxKlasove->Size = System::Drawing::Size(133, 147);
			this->listBoxKlasove->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnPremahniKlas);
			this->groupBox1->Controls->Add(this->listBoxKlasove);
			this->groupBox1->Controls->Add(this->btnDobaviKlas);
			this->groupBox1->Location = System::Drawing::Point(6, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(151, 233);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Класове";
			// 
			// btnPremahniKlas
			// 
			this->btnPremahniKlas->Location = System::Drawing::Point(6, 199);
			this->btnPremahniKlas->Name = L"btnPremahniKlas";
			this->btnPremahniKlas->Size = System::Drawing::Size(133, 21);
			this->btnPremahniKlas->TabIndex = 2;
			this->btnPremahniKlas->Text = L"Изтриване";
			this->btnPremahniKlas->UseVisualStyleBackColor = true;
			this->btnPremahniKlas->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// btnDobaviKlas
			// 
			this->btnDobaviKlas->Location = System::Drawing::Point(6, 172);
			this->btnDobaviKlas->Name = L"btnDobaviKlas";
			this->btnDobaviKlas->Size = System::Drawing::Size(133, 21);
			this->btnDobaviKlas->TabIndex = 1;
			this->btnDobaviKlas->Text = L"Добавяне";
			this->btnDobaviKlas->UseVisualStyleBackColor = true;
			this->btnDobaviKlas->Click += gcnew System::EventHandler(this, &MyForm::btnDobaviKlas_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->btnPremahniGrupa);
			this->groupBox3->Controls->Add(this->btnDobaviGrupa);
			this->groupBox3->Controls->Add(this->listBoxGrupi);
			this->groupBox3->Location = System::Drawing::Point(6, 245);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(151, 123);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Групи";
			// 
			// btnPremahniGrupa
			// 
			this->btnPremahniGrupa->Location = System::Drawing::Point(6, 95);
			this->btnPremahniGrupa->Name = L"btnPremahniGrupa";
			this->btnPremahniGrupa->Size = System::Drawing::Size(133, 21);
			this->btnPremahniGrupa->TabIndex = 2;
			this->btnPremahniGrupa->Text = L"Изтриване";
			this->btnPremahniGrupa->UseVisualStyleBackColor = true;
			this->btnPremahniGrupa->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// btnDobaviGrupa
			// 
			this->btnDobaviGrupa->Location = System::Drawing::Point(6, 68);
			this->btnDobaviGrupa->Name = L"btnDobaviGrupa";
			this->btnDobaviGrupa->Size = System::Drawing::Size(133, 21);
			this->btnDobaviGrupa->TabIndex = 1;
			this->btnDobaviGrupa->Text = L"Добавяне";
			this->btnDobaviGrupa->UseVisualStyleBackColor = true;
			// 
			// listBoxGrupi
			// 
			this->listBoxGrupi->FormattingEnabled = true;
			this->listBoxGrupi->Location = System::Drawing::Point(6, 19);
			this->listBoxGrupi->Name = L"listBoxGrupi";
			this->listBoxGrupi->Size = System::Drawing::Size(133, 43);
			this->listBoxGrupi->TabIndex = 0;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->btnZapishiShablon);
			this->groupBox4->Controls->Add(this->btnZapishiTxt);
			this->groupBox4->Location = System::Drawing::Point(6, 373);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(151, 131);
			this->groupBox4->TabIndex = 4;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Запазване";
			// 
			// btnZapishiShablon
			// 
			this->btnZapishiShablon->Location = System::Drawing::Point(6, 19);
			this->btnZapishiShablon->Name = L"btnZapishiShablon";
			this->btnZapishiShablon->Size = System::Drawing::Size(133, 49);
			this->btnZapishiShablon->TabIndex = 0;
			this->btnZapishiShablon->Text = L"... на шаблона";
			this->btnZapishiShablon->UseVisualStyleBackColor = true;
			// 
			// btnZapishiTxt
			// 
			this->btnZapishiTxt->Location = System::Drawing::Point(6, 72);
			this->btnZapishiTxt->Name = L"btnZapishiTxt";
			this->btnZapishiTxt->Size = System::Drawing::Size(133, 53);
			this->btnZapishiTxt->TabIndex = 0;
			this->btnZapishiTxt->Text = L"... в текстови формат";
			this->btnZapishiTxt->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(96, 54);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(163, 20);
			this->textBox2->TabIndex = 5;
			this->toolTip1->SetToolTip(this->textBox2, L"Забележка: Ако името или броят часове са празни, означава,че този учител не препо"
				L"дава на тази група");
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(96, 28);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(163, 20);
			this->textBox1->TabIndex = 3;
			this->toolTip1->SetToolTip(this->textBox1, L"Забележка: Ако името или броят часове са празни, означава,че този учител не препо"
				L"дава на тази група");
			// 
			// btnOtvoriShablon
			// 
			this->btnOtvoriShablon->Location = System::Drawing::Point(12, 510);
			this->btnOtvoriShablon->Name = L"btnOtvoriShablon";
			this->btnOtvoriShablon->Size = System::Drawing::Size(133, 49);
			this->btnOtvoriShablon->TabIndex = 0;
			this->btnOtvoriShablon->Text = L"Отваряне на шаблон";
			this->btnOtvoriShablon->UseVisualStyleBackColor = true;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(5, 4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1129, 612);
			this->tabControl1->TabIndex = 5;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Controls->Add(this->groupBox4);
			this->tabPage1->Controls->Add(this->btnOtvoriShablon);
			this->tabPage1->Controls->Add(this->groupBox3);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1121, 586);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Управление на класове";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->groupBox6);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->listBox2);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Location = System::Drawing::Point(163, 6);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(636, 362);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Учители и предмети";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label2);
			this->groupBox6->Controls->Add(this->textBox2);
			this->groupBox6->Controls->Add(this->label1);
			this->groupBox6->Controls->Add(this->textBox1);
			this->groupBox6->Location = System::Drawing::Point(145, 19);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(272, 201);
			this->groupBox6->TabIndex = 4;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Предмет";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Брой часове";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Име";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 199);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 21);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Изтриване";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(6, 19);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(133, 147);
			this->listBox2->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button2->Location = System::Drawing::Point(6, 172);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 21);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Добавяне";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->groupBox5);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1121, 586);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Добавяне/Премахване на Учители";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->btnPremahniUchitel);
			this->groupBox5->Controls->Add(this->listBox1);
			this->groupBox5->Controls->Add(this->btnDobaviUchitel);
			this->groupBox5->Location = System::Drawing::Point(6, 6);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(158, 255);
			this->groupBox5->TabIndex = 7;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Учители";
			// 
			// btnPremahniUchitel
			// 
			this->btnPremahniUchitel->Location = System::Drawing::Point(6, 225);
			this->btnPremahniUchitel->Name = L"btnPremahniUchitel";
			this->btnPremahniUchitel->Size = System::Drawing::Size(146, 21);
			this->btnPremahniUchitel->TabIndex = 4;
			this->btnPremahniUchitel->Text = L"Изтриване";
			this->btnPremahniUchitel->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(6, 19);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(146, 173);
			this->listBox1->TabIndex = 0;
			// 
			// btnDobaviUchitel
			// 
			this->btnDobaviUchitel->Location = System::Drawing::Point(6, 198);
			this->btnDobaviUchitel->Name = L"btnDobaviUchitel";
			this->btnDobaviUchitel->Size = System::Drawing::Size(146, 21);
			this->btnDobaviUchitel->TabIndex = 3;
			this->btnDobaviUchitel->Text = L"Добавяне";
			this->btnDobaviUchitel->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1146, 628);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"Генератор на седмична програма";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void btnDobaviKlas_Click(System::Object^  sender, System::EventArgs^  e) {
		//String^ imeNaKlas;
		//PopUpForm^ popup = gcnew PopUpForm("Учител", imeNaKlas);
		//popup->Show()

	}
};
}