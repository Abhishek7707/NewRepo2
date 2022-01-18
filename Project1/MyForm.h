#pragma once
#include<string>
#include<msclr\marshal_cppstd.h>
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(33, 93);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(205, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ENTER TEXT";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(569, 24);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(217, 33);
			this->label2->TabIndex = 1;
			this->label2->Text = L"CIPHER TEXT";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(39, 143);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(329, 29);
			this->textBox1->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(581, 79);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 24);
			this->label3->TabIndex = 3;
			this->label3->Text = L"cipher text";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(428, 93);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 31);
			this->button1->TabIndex = 4;
			this->button1->Text = L"ENCIPHER";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(428, 278);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 31);
			this->button2->TabIndex = 5;
			this->button2->Text = L"DECIPHER";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(579, 213);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(301, 33);
			this->label4->TabIndex = 6;
			this->label4->Text = L"DECIPHERED TEXT";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(581, 261);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(119, 24);
			this->label5->TabIndex = 7;
			this->label5->Text = L"decipher text";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(888, 337);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	//code to encipher text
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;

		//converting marshal string to normal string in c++
		std::string name= context.marshal_as<std::string>(textBox1->Text);

		//converting each character according to algorithm discussed in class to encipher
		for (int i=0;i!=name.length();i++)
		{
			if (name[i] == ' ')
			{
				continue;
			}
			else if (name[i] >= 'A' && name[i] <= 'Z')
			{
				name[i] = 'Z' - (name[i] - 'A');
			}
			else
			{
				name[i] = 'z' - (name[i] - 'a');
			}
		}

		//passing converted string for output after changing to marshal string
		label3->Text= gcnew String(name.c_str());
	}

// code to decipher text
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		
		//converting marshal string to normal string in c++
		std::string name = context.marshal_as<std::string>(textBox1->Text);

		//converting each character according to algorithm discussed in class to decipher
		for (int i = 0;i != name.length();i++)
		{
			if (name[i] == ' ')
			{
				continue;
			}
			else if (name[i] >= 'A' && name[i] <= 'Z')
			{
				name[i] = 'Z' - (name[i] - 'A');
			}
			else
			{
				name[i] = 'z' - (name[i] - 'a');
			}
		}

		//passing converted string for output after changing to marshal string 
		label5->Text = gcnew String(name.c_str());
}
};
}
