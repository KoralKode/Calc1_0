#pragma once

namespace Calc10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ result;
	private: System::Windows::Forms::Button^ clearbut;
	protected:



	private: System::Windows::Forms::Button^ delbut;

	private: System::Windows::Forms::Button^ percentbut;

	private: System::Windows::Forms::Button^ plusbut;
	private: System::Windows::Forms::Button^ minusbut;


	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ multiplicationbut;

	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ divisionbut;

	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ equalbut;
	private: System::Windows::Forms::Button^ dotbut;


	private: System::Windows::Forms::Button^ button20;
	private: double first_number;
	private: char use_action;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->result = (gcnew System::Windows::Forms::Label());
			this->clearbut = (gcnew System::Windows::Forms::Button());
			this->delbut = (gcnew System::Windows::Forms::Button());
			this->percentbut = (gcnew System::Windows::Forms::Button());
			this->plusbut = (gcnew System::Windows::Forms::Button());
			this->minusbut = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->multiplicationbut = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->divisionbut = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->equalbut = (gcnew System::Windows::Forms::Button());
			this->dotbut = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// result
			// 
			this->result->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->result->Font = (gcnew System::Drawing::Font(L"Ink Free", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->result->Location = System::Drawing::Point(12, 35);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(388, 70);
			this->result->TabIndex = 1;
			this->result->Text = L"0";
			this->result->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->result->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// clearbut
			// 
			this->clearbut->BackColor = System::Drawing::Color::Aqua;
			this->clearbut->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->clearbut->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clearbut->Location = System::Drawing::Point(12, 122);
			this->clearbut->Name = L"clearbut";
			this->clearbut->Size = System::Drawing::Size(92, 48);
			this->clearbut->TabIndex = 2;
			this->clearbut->Text = L"clear";
			this->clearbut->UseVisualStyleBackColor = false;
			this->clearbut->Click += gcnew System::EventHandler(this, &MyForm::clearbut_Click);
			// 
			// delbut
			// 
			this->delbut->BackColor = System::Drawing::Color::Aqua;
			this->delbut->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->delbut->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->delbut->Location = System::Drawing::Point(109, 122);
			this->delbut->Name = L"delbut";
			this->delbut->Size = System::Drawing::Size(92, 48);
			this->delbut->TabIndex = 3;
			this->delbut->Text = L"del";
			this->delbut->UseVisualStyleBackColor = false;
			this->delbut->Click += gcnew System::EventHandler(this, &MyForm::delbut_Click);
			// 
			// percentbut
			// 
			this->percentbut->BackColor = System::Drawing::Color::Aqua;
			this->percentbut->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->percentbut->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->percentbut->Location = System::Drawing::Point(206, 122);
			this->percentbut->Name = L"percentbut";
			this->percentbut->Size = System::Drawing::Size(92, 48);
			this->percentbut->TabIndex = 4;
			this->percentbut->Text = L"%";
			this->percentbut->UseVisualStyleBackColor = false;
			this->percentbut->Click += gcnew System::EventHandler(this, &MyForm::percentbut_Click);
			// 
			// plusbut
			// 
			this->plusbut->BackColor = System::Drawing::Color::Aqua;
			this->plusbut->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->plusbut->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plusbut->Location = System::Drawing::Point(301, 122);
			this->plusbut->Name = L"plusbut";
			this->plusbut->Size = System::Drawing::Size(92, 48);
			this->plusbut->TabIndex = 5;
			this->plusbut->Text = L"+";
			this->plusbut->UseVisualStyleBackColor = false;
			this->plusbut->Click += gcnew System::EventHandler(this, &MyForm::plusbut_Click);
			// 
			// minusbut
			// 
			this->minusbut->BackColor = System::Drawing::Color::Aqua;
			this->minusbut->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->minusbut->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->minusbut->Location = System::Drawing::Point(301, 186);
			this->minusbut->Name = L"minusbut";
			this->minusbut->Size = System::Drawing::Size(92, 48);
			this->minusbut->TabIndex = 9;
			this->minusbut->Text = L"-";
			this->minusbut->UseVisualStyleBackColor = false;
			this->minusbut->Click += gcnew System::EventHandler(this, &MyForm::minusbut_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::LightSeaGreen;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(205, 186);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(92, 48);
			this->button7->TabIndex = 8;
			this->button7->Text = L"3";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::ButtonNum_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::LightSeaGreen;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(109, 186);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(92, 48);
			this->button8->TabIndex = 7;
			this->button8->Text = L"2";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::ButtonNum_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::LightSeaGreen;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(12, 186);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(92, 48);
			this->button9->TabIndex = 6;
			this->button9->Text = L"1";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::ButtonNum_Click);
			// 
			// multiplicationbut
			// 
			this->multiplicationbut->BackColor = System::Drawing::Color::Aqua;
			this->multiplicationbut->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->multiplicationbut->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->multiplicationbut->Location = System::Drawing::Point(302, 252);
			this->multiplicationbut->Name = L"multiplicationbut";
			this->multiplicationbut->Size = System::Drawing::Size(92, 48);
			this->multiplicationbut->TabIndex = 13;
			this->multiplicationbut->Text = L"*";
			this->multiplicationbut->UseVisualStyleBackColor = false;
			this->multiplicationbut->Click += gcnew System::EventHandler(this, &MyForm::multiplicationbut_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::LightSeaGreen;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(206, 252);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(92, 48);
			this->button11->TabIndex = 12;
			this->button11->Text = L"6";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::ButtonNum_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::LightSeaGreen;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(110, 252);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(92, 48);
			this->button12->TabIndex = 11;
			this->button12->Text = L"5";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::ButtonNum_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::LightSeaGreen;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button13->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(13, 252);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(92, 48);
			this->button13->TabIndex = 10;
			this->button13->Text = L"4";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::ButtonNum_Click);
			// 
			// divisionbut
			// 
			this->divisionbut->BackColor = System::Drawing::Color::Aqua;
			this->divisionbut->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->divisionbut->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->divisionbut->Location = System::Drawing::Point(302, 316);
			this->divisionbut->Name = L"divisionbut";
			this->divisionbut->Size = System::Drawing::Size(92, 48);
			this->divisionbut->TabIndex = 17;
			this->divisionbut->Text = L"/";
			this->divisionbut->UseVisualStyleBackColor = false;
			this->divisionbut->Click += gcnew System::EventHandler(this, &MyForm::divisionbut_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::LightSeaGreen;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(206, 316);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(92, 48);
			this->button15->TabIndex = 16;
			this->button15->Text = L"9";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::ButtonNum_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::LightSeaGreen;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button16->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(110, 316);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(92, 48);
			this->button16->TabIndex = 15;
			this->button16->Text = L"8";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::ButtonNum_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::LightSeaGreen;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button17->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(13, 316);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(92, 48);
			this->button17->TabIndex = 14;
			this->button17->Text = L"7";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::ButtonNum_Click);
			// 
			// equalbut
			// 
			this->equalbut->BackColor = System::Drawing::Color::Aqua;
			this->equalbut->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->equalbut->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->equalbut->Location = System::Drawing::Point(208, 381);
			this->equalbut->Name = L"equalbut";
			this->equalbut->Size = System::Drawing::Size(185, 48);
			this->equalbut->TabIndex = 21;
			this->equalbut->Text = L"=";
			this->equalbut->UseVisualStyleBackColor = false;
			this->equalbut->Click += gcnew System::EventHandler(this, &MyForm::equalbut_Click);
			// 
			// dotbut
			// 
			this->dotbut->BackColor = System::Drawing::Color::LightSeaGreen;
			this->dotbut->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->dotbut->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dotbut->Location = System::Drawing::Point(110, 381);
			this->dotbut->Name = L"dotbut";
			this->dotbut->Size = System::Drawing::Size(92, 48);
			this->dotbut->TabIndex = 19;
			this->dotbut->Text = L".";
			this->dotbut->UseVisualStyleBackColor = false;
			this->dotbut->Click += gcnew System::EventHandler(this, &MyForm::dotbut_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::LightSeaGreen;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button20->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(12, 381);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(92, 48);
			this->button20->TabIndex = 18;
			this->button20->Text = L"0";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::ButtonNum_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->ClientSize = System::Drawing::Size(406, 441);
			this->Controls->Add(this->equalbut);
			this->Controls->Add(this->dotbut);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->divisionbut);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->multiplicationbut);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->minusbut);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->plusbut);
			this->Controls->Add(this->percentbut);
			this->Controls->Add(this->delbut);
			this->Controls->Add(this->clearbut);
			this->Controls->Add(this->result);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Калькулятор";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

		   private: System::Void ButtonNum_Click(System::Object^ sender, System::EventArgs^ e) {
			   Button^ butt = safe_cast<Button^>(sender);
			   if (this->result->Text == "0" || this->result->Text== "Деление на 0!") {
				   this->result->Text = butt->Text;
			   }
			   else {
				   this->result->Text += butt->Text;
			   }
			   

		   }
				  private: System::Void math_action(char action) {
					  this->first_number = System::Convert::ToDouble(this->result->Text);
					  this->use_action = action;
					  this->result->Text ="0";
				  }
	private: System::Void plusbut_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('+');
	}
private: System::Void minusbut_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('-');
}
private: System::Void multiplicationbut_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('*');
}
private: System::Void divisionbut_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('/');
}
private: System::Void equalbut_Click(System::Object^ sender, System::EventArgs^ e) {
	double second = System::Convert::ToDouble(this->result->Text);
	switch (this->use_action)
	{
	case '-':
		this->result->Text = System::Convert::ToString(this->first_number - second);break;
	case '+':
		this->result->Text = System::Convert::ToString(this->first_number + second);break;
	case '/':
		if (second == 0) { this->result->Text = "Деление на 0!"; break; }
		this->result->Text = System::Convert::ToString(this->first_number / second);break;
	case '*':
		this->result->Text = System::Convert::ToString(this->first_number * second);break;
	case '%':
		this->result->Text = System::Convert::ToString(this->first_number/100 * second);break;
	default:
		break;
	}
}
private: System::Void delbut_Click(System::Object^ sender, System::EventArgs^ e) {
	if(this->result->Text=="0" || this->result->Text== "Деление на 0!"){}
	else {


		this->result->Text =this->result->Text->Remove(this->result->Text->Length-1);
		
	}
}
private: System::Void clearbut_Click(System::Object^ sender, System::EventArgs^ e) {
	this->result->Text = "0";
}
private: System::Void percentbut_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('%');
}
private: System::Void dotbut_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ text = this->result->Text;
	if (!text->Contains(",")) {
		this->result->Text += ",";
	}
}
};
}
