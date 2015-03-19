#pragma once
#include <iostream>

using namespace std;

namespace WeeklySchedule {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PopUpForm
	/// </summary>
	public ref class PopUpForm : public System::Windows::Forms::Form
	{
		String^ saveTo;

		public:
			PopUpForm(String^ formName, String^ saveTo)
			{
				InitializeComponent();
				this->saveTo = saveTo;
				this->Text = formName;
				//
				//TODO: Add the constructor code here
				//
			}

		protected:
			/// <summary>
			/// Clean up any resources being used.
			/// </summary>
			~PopUpForm()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::TextBox^  boxName;
		private: System::Windows::Forms::Button^  btnOk;
		protected:


		private: System::Windows::Forms::Label^  label1;
		private: System::Windows::Forms::Button^  btnCancel;

		protected:

		private:
			/// <summary>
			/// Required designer variable.
			/// </summary>
			System::ComponentModel::Container ^components;

	#pragma region Windows Form Designer generated code
			/// <summary>
			/// Required method for Designer support - do not modify
			/// the contents of this method with the code editor.
			/// </summary>
			void InitializeComponent(void)
			{
				this->boxName = (gcnew System::Windows::Forms::TextBox());
				this->btnOk = (gcnew System::Windows::Forms::Button());
				this->label1 = (gcnew System::Windows::Forms::Label());
				this->btnCancel = (gcnew System::Windows::Forms::Button());
				this->SuspendLayout();
				// 
				// boxName
				// 
				this->boxName->Location = System::Drawing::Point(47, 6);
				this->boxName->Name = L"boxName";
				this->boxName->Size = System::Drawing::Size(151, 20);
				this->boxName->TabIndex = 0;
				// 
				// btnOk
				// 
				this->btnOk->Location = System::Drawing::Point(12, 32);
				this->btnOk->Name = L"btnOk";
				this->btnOk->Size = System::Drawing::Size(90, 23);
				this->btnOk->TabIndex = 1;
				this->btnOk->Text = L"Ок";
				this->btnOk->UseVisualStyleBackColor = true;
				this->btnOk->Click += gcnew System::EventHandler(this, &PopUpForm::button1_Click);
				// 
				// label1
				// 
				this->label1->AutoSize = true;
				this->label1->Location = System::Drawing::Point(12, 9);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(29, 13);
				this->label1->TabIndex = 2;
				this->label1->Text = L"Име";
				// 
				// btnCancel
				// 
				this->btnCancel->Location = System::Drawing::Point(108, 32);
				this->btnCancel->Name = L"btnCancel";
				this->btnCancel->Size = System::Drawing::Size(90, 23);
				this->btnCancel->TabIndex = 3;
				this->btnCancel->Text = L"Отказ";
				this->btnCancel->UseVisualStyleBackColor = true;
				this->btnCancel->Click += gcnew System::EventHandler(this, &PopUpForm::btnCancel_Click);
				// 
				// PopUpForm
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(217, 65);
				this->Controls->Add(this->btnCancel);
				this->Controls->Add(this->label1);
				this->Controls->Add(this->btnOk);
				this->Controls->Add(this->boxName);
				this->Name = L"PopUpForm";
				this->Text = L"Добави ";
				this->ResumeLayout(false);
				this->PerformLayout();

			}
	#pragma endregion
		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			if (boxName->Text->Length > 2) {

				saveTo = boxName->Text;
				

				this->Close();
			}
		}
		private: System::Void btnCancel_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Close();
		}
};
}
