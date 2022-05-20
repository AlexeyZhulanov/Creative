#pragma once

namespace Project2 {

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
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox26;
	private: System::Windows::Forms::TextBox^ textBox27;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TextBox^ textBox28;
	private: System::Windows::Forms::TextBox^ textBox29;
	private: System::Windows::Forms::TextBox^ textBox30;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::TextBox^ textBox31;
	private: System::Windows::Forms::TextBox^ textBox32;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Button^ button11;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::Color::LimeGreen;
			this->textBox1->Location = System::Drawing::Point(53, 89);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(101, 30);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::Color::LimeGreen;
			this->textBox2->Location = System::Drawing::Point(53, 171);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(101, 30);
			this->textBox2->TabIndex = 1;
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->comboBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->ForeColor = System::Drawing::Color::Lime;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"+", L"-", L"*", L"/" });
			this->comboBox1->Location = System::Drawing::Point(191, 123);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(57, 37);
			this->comboBox1->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->ForeColor = System::Drawing::Color::LimeGreen;
			this->textBox3->Location = System::Drawing::Point(291, 89);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(101, 30);
			this->textBox3->TabIndex = 3;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->ForeColor = System::Drawing::Color::LimeGreen;
			this->textBox4->Location = System::Drawing::Point(291, 171);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(101, 30);
			this->textBox4->TabIndex = 4;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox5->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->ForeColor = System::Drawing::Color::LimeGreen;
			this->textBox5->Location = System::Drawing::Point(485, 89);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(101, 30);
			this->textBox5->TabIndex = 5;
			this->textBox5->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(44, 231);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(271, 49);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox6->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->ForeColor = System::Drawing::Color::LimeGreen;
			this->textBox6->Location = System::Drawing::Point(485, 171);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(101, 30);
			this->textBox6->TabIndex = 6;
			this->textBox6->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button2->FlatAppearance->BorderSize = 2;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(360, 231);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(271, 49);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Очистить";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(412, 114);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 55);
			this->label1->TabIndex = 9;
			this->label1->Text = L"=";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(8, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(228, 27);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Сохранить ответ\?(Y/N)";
			this->label2->Visible = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button3->FlatAppearance->BorderSize = 2;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button3->Location = System::Drawing::Point(33, 12);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(229, 43);
			this->button3->TabIndex = 11;
			this->button3->TabStop = false;
			this->button3->Text = L"Без целой части";
			this->button3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button4->FlatAppearance->BorderSize = 2;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(423, 12);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(229, 43);
			this->button4->TabIndex = 12;
			this->button4->TabStop = false;
			this->button4->Text = L"С целой частью";
			this->button4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::LimeGreen;
			this->label3->Location = System::Drawing::Point(291, 15);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 40);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Дробь";
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->ForeColor = System::Drawing::Color::LimeGreen;
			this->textBox7->Location = System::Drawing::Point(44, 128);
			this->textBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(65, 30);
			this->textBox7->TabIndex = 14;
			this->textBox7->Visible = false;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->ForeColor = System::Drawing::Color::LimeGreen;
			this->textBox8->Location = System::Drawing::Point(81, 89);
			this->textBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(101, 30);
			this->textBox8->TabIndex = 15;
			this->textBox8->Visible = false;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox9->ForeColor = System::Drawing::Color::LimeGreen;
			this->textBox9->Location = System::Drawing::Point(81, 171);
			this->textBox9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(101, 30);
			this->textBox9->TabIndex = 16;
			this->textBox9->Visible = false;
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->comboBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox2->ForeColor = System::Drawing::Color::Lime;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"+", L"-", L"*", L"/" });
			this->comboBox2->Location = System::Drawing::Point(207, 123);
			this->comboBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(55, 37);
			this->comboBox2->TabIndex = 17;
			this->comboBox2->Visible = false;
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox10->ForeColor = System::Drawing::Color::LimeGreen;
			this->textBox10->Location = System::Drawing::Point(291, 128);
			this->textBox10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(65, 30);
			this->textBox10->TabIndex = 18;
			this->textBox10->Visible = false;
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox11->ForeColor = System::Drawing::Color::LimeGreen;
			this->textBox11->Location = System::Drawing::Point(327, 89);
			this->textBox11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(101, 30);
			this->textBox11->TabIndex = 19;
			this->textBox11->Visible = false;
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox12->ForeColor = System::Drawing::Color::LimeGreen;
			this->textBox12->Location = System::Drawing::Point(327, 171);
			this->textBox12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(101, 30);
			this->textBox12->TabIndex = 20;
			this->textBox12->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(433, 114);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 55);
			this->label4->TabIndex = 59;
			this->label4->Text = L"=";
			this->label4->Visible = false;
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox13->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox13->ForeColor = System::Drawing::Color::LimeGreen;
			this->textBox13->Location = System::Drawing::Point(495, 128);
			this->textBox13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(65, 30);
			this->textBox13->TabIndex = 21;
			this->textBox13->TabStop = false;
			this->textBox13->Visible = false;
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox14->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox14->ForeColor = System::Drawing::Color::LimeGreen;
			this->textBox14->Location = System::Drawing::Point(529, 89);
			this->textBox14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(101, 30);
			this->textBox14->TabIndex = 22;
			this->textBox14->TabStop = false;
			this->textBox14->Visible = false;
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox15->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox15->ForeColor = System::Drawing::Color::LimeGreen;
			this->textBox15->Location = System::Drawing::Point(529, 171);
			this->textBox15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(101, 30);
			this->textBox15->TabIndex = 23;
			this->textBox15->TabStop = false;
			this->textBox15->Visible = false;
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(592, 124);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(47, 39);
			this->button5->TabIndex = 25;
			this->button5->TabStop = false;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox16
			// 
			this->textBox16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox16->ForeColor = System::Drawing::Color::LimeGreen;
			this->textBox16->Location = System::Drawing::Point(716, 64);
			this->textBox16->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(334, 30);
			this->textBox16->TabIndex = 26;
			this->textBox16->Visible = false;
			// 
			// textBox17
			// 
			this->textBox17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox17->ForeColor = System::Drawing::Color::LimeGreen;
			this->textBox17->Location = System::Drawing::Point(716, 107);
			this->textBox17->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(334, 30);
			this->textBox17->TabIndex = 27;
			this->textBox17->Visible = false;
			// 
			// textBox18
			// 
			this->textBox18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox18->ForeColor = System::Drawing::Color::LimeGreen;
			this->textBox18->Location = System::Drawing::Point(716, 153);
			this->textBox18->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(334, 30);
			this->textBox18->TabIndex = 28;
			this->textBox18->Visible = false;
			// 
			// textBox19
			// 
			this->textBox19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox19->ForeColor = System::Drawing::Color::LimeGreen;
			this->textBox19->Location = System::Drawing::Point(716, 197);
			this->textBox19->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(334, 30);
			this->textBox19->TabIndex = 29;
			this->textBox19->Visible = false;
			// 
			// textBox20
			// 
			this->textBox20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox20->ForeColor = System::Drawing::Color::LimeGreen;
			this->textBox20->Location = System::Drawing::Point(716, 240);
			this->textBox20->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(334, 30);
			this->textBox20->TabIndex = 30;
			this->textBox20->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(709, 20);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(324, 33);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Предыдущие вычисления:";
			// 
			// button6
			// 
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button6->FlatAppearance->BorderSize = 2;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(716, 281);
			this->button6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(335, 50);
			this->button6->TabIndex = 32;
			this->button6->TabStop = false;
			this->button6->Text = L"Очистить";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// textBox21
			// 
			this->textBox21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox21->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox21->ForeColor = System::Drawing::Color::LimeGreen;
			this->textBox21->Location = System::Drawing::Point(716, 64);
			this->textBox21->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(334, 30);
			this->textBox21->TabIndex = 33;
			this->textBox21->Visible = false;
			// 
			// textBox22
			// 
			this->textBox22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox22->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox22->ForeColor = System::Drawing::Color::LimeGreen;
			this->textBox22->Location = System::Drawing::Point(716, 107);
			this->textBox22->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(334, 30);
			this->textBox22->TabIndex = 34;
			this->textBox22->Visible = false;
			// 
			// textBox23
			// 
			this->textBox23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox23->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox23->ForeColor = System::Drawing::Color::LimeGreen;
			this->textBox23->Location = System::Drawing::Point(716, 153);
			this->textBox23->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(334, 30);
			this->textBox23->TabIndex = 35;
			this->textBox23->Visible = false;
			// 
			// textBox24
			// 
			this->textBox24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox24->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox24->ForeColor = System::Drawing::Color::LimeGreen;
			this->textBox24->Location = System::Drawing::Point(716, 197);
			this->textBox24->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(334, 30);
			this->textBox24->TabIndex = 36;
			this->textBox24->Visible = false;
			// 
			// textBox25
			// 
			this->textBox25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox25->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox25->ForeColor = System::Drawing::Color::LimeGreen;
			this->textBox25->Location = System::Drawing::Point(716, 240);
			this->textBox25->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(334, 30);
			this->textBox25->TabIndex = 37;
			this->textBox25->Visible = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button7->FlatAppearance->BorderSize = 2;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(172, 287);
			this->button7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(335, 54);
			this->button7->TabIndex = 38;
			this->button7->TabStop = false;
			this->button7->Text = L"Конвертер";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox26
			// 
			this->textBox26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox26->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox26->ForeColor = System::Drawing::Color::LimeGreen;
			this->textBox26->Location = System::Drawing::Point(33, 375);
			this->textBox26->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(101, 30);
			this->textBox26->TabIndex = 39;
			// 
			// textBox27
			// 
			this->textBox27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox27->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox27->ForeColor = System::Drawing::Color::LimeGreen;
			this->textBox27->Location = System::Drawing::Point(33, 442);
			this->textBox27->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(101, 30);
			this->textBox27->TabIndex = 40;
			// 
			// button8
			// 
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button8->FlatAppearance->BorderSize = 2;
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(172, 398);
			this->button8->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(55, 48);
			this->button8->TabIndex = 41;
			this->button8->TabStop = false;
			this->button8->Text = L"=";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// textBox28
			// 
			this->textBox28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox28->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox28->ForeColor = System::Drawing::Color::LimeGreen;
			this->textBox28->Location = System::Drawing::Point(265, 411);
			this->textBox28->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(65, 30);
			this->textBox28->TabIndex = 42;
			// 
			// textBox29
			// 
			this->textBox29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox29->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox29->ForeColor = System::Drawing::Color::LimeGreen;
			this->textBox29->Location = System::Drawing::Point(297, 363);
			this->textBox29->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(101, 30);
			this->textBox29->TabIndex = 43;
			// 
			// textBox30
			// 
			this->textBox30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox30->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox30->ForeColor = System::Drawing::Color::LimeGreen;
			this->textBox30->Location = System::Drawing::Point(297, 459);
			this->textBox30->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(101, 30);
			this->textBox30->TabIndex = 44;
			// 
			// button9
			// 
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button9->FlatAppearance->BorderSize = 2;
			this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->button9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(435, 398);
			this->button9->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(55, 48);
			this->button9->TabIndex = 45;
			this->button9->TabStop = false;
			this->button9->Text = L"=";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// textBox31
			// 
			this->textBox31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox31->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox31->ForeColor = System::Drawing::Color::LimeGreen;
			this->textBox31->Location = System::Drawing::Point(529, 375);
			this->textBox31->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox31->Name = L"textBox31";
			this->textBox31->ReadOnly = true;
			this->textBox31->Size = System::Drawing::Size(101, 30);
			this->textBox31->TabIndex = 46;
			this->textBox31->TabStop = false;
			// 
			// textBox32
			// 
			this->textBox32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox32->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox32->ForeColor = System::Drawing::Color::LimeGreen;
			this->textBox32->Location = System::Drawing::Point(529, 442);
			this->textBox32->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox32->Name = L"textBox32";
			this->textBox32->ReadOnly = true;
			this->textBox32->Size = System::Drawing::Size(101, 30);
			this->textBox32->TabIndex = 47;
			this->textBox32->TabStop = false;
			// 
			// button10
			// 
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button10->FlatAppearance->BorderSize = 2;
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(172, 512);
			this->button10->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(335, 52);
			this->button10->TabIndex = 48;
			this->button10->TabStop = false;
			this->button10->Text = L"Очистить";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(8, 345);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(176, 27);
			this->label6->TabIndex = 49;
			this->label6->Text = L"Перенести\?(Y/N)";
			this->label6->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(237, 123);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(27, 41);
			this->pictureBox1->TabIndex = 50;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(207, 159);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(43, 12);
			this->pictureBox2->TabIndex = 51;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(207, 123);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(43, 2);
			this->pictureBox3->TabIndex = 52;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(207, 123);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(3, 41);
			this->pictureBox4->TabIndex = 53;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(223, 123);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(27, 41);
			this->pictureBox5->TabIndex = 54;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(191, 159);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(43, 12);
			this->pictureBox6->TabIndex = 55;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(191, 123);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(43, 2);
			this->pictureBox7->TabIndex = 56;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(191, 123);
			this->pictureBox8->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(3, 41);
			this->pictureBox8->TabIndex = 57;
			this->pictureBox8->TabStop = false;
			// 
			// button11
			// 
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.Image")));
			this->button11->Location = System::Drawing::Point(529, 295);
			this->button11->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(40, 34);
			this->button11->TabIndex = 58;
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->ClientSize = System::Drawing::Size(684, 351);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->textBox32);
			this->Controls->Add(this->textBox31);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->textBox30);
			this->Controls->Add(this->textBox29);
			this->Controls->Add(this->textBox28);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->textBox27);
			this->Controls->Add(this->textBox26);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->textBox25);
			this->Controls->Add(this->textBox24);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->textBox22);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->ForeColor = System::Drawing::Color::LimeGreen;
			this->KeyPreview = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1086, 616);
			this->MinimumSize = System::Drawing::Size(698, 387);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор дробей";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Form1_KeyDown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int getNod(int x, int y)    //возвращает НОД для x и y (НОД - Наибольший Общий Делитель)
		{
			if (y == 0)
				return x;
			return getNod(y, x % y);
		}

	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) { //Кнопка вычислить
		if (perexod == true) { //Если не перешли на дроби с целой частью
			if (Protect()) { //Проверка на правильность ввода
				int ch1, zn1, ch2, zn2, resCh, resZn, nod; //Числители, знаменатели, результат и нод
				ch1 = System::Convert::ToInt32(textBox1->Text);
				zn1 = System::Convert::ToInt32(textBox2->Text);
				ch2 = System::Convert::ToInt32(textBox3->Text);
				zn2 = System::Convert::ToInt32(textBox4->Text);
				if (zn1 != 0 && zn2 != 0) {
					if (comboBox1->SelectedItem == "+") { //Сложение
						resCh = ch1 * zn2 + ch2 * zn1;
						resZn = zn1 * zn2;
						nod = getNod(resCh, resZn);
						resCh /= nod; resZn /= nod;
					}
					else if (comboBox1->SelectedItem == "-") { //Вычитание
						resCh = ch1 * zn2 - ch2 * zn1;
						resZn = zn1 * zn2;
						nod = getNod(resCh, resZn);
						resCh /= nod; resZn /= nod;
					}
					else if (comboBox1->SelectedItem == "*") { //Умножение
						resCh = ch1 * ch2;
						resZn = zn1 * zn2;

						nod = getNod(resCh, resZn);
						resCh /= nod; resZn /= nod;
					}
					else if (comboBox1->SelectedItem == "/") { //Деление
						if (ch2 != 0 && zn1 != 0) { //Проверка деления на ноль
							resCh = ch1 * zn2;
							resZn = ch2 * zn1;

							nod = getNod(resCh, resZn);
							resCh /= nod; resZn /= nod;
						}
						else { MessageBox::Show("Попытка деления на 0", "Ошибка"); } //Сообщение об ошибке
					}
					textBox5->Text = System::Convert::ToString(resCh);
					textBox6->Text = System::Convert::ToString(resZn);
					if (i1 > 5) i1 = 1; //Если количество запомненных вычислений >5 то начинаем по-новой(запоминаются последние 5 вычислений)
					if (i1 == 1) { //Если вычисления до этого не производились
						textBox16->Visible = true; //Отображаем textBox и записываем в него вычисление
						textBox16->Text = p1 + ") " + textBox1->Text + "/" + textBox2->Text + " " + comboBox1->SelectedItem + " " + textBox3->Text + "/" + textBox4->Text + " = " + textBox5->Text + "/" + textBox6->Text;
					}
					if (i1 == 2) { //Если было одно вычисление
						textBox17->Visible = true;
						textBox17->Text = p1 + ") " + textBox1->Text + "/" + textBox2->Text + " " + comboBox1->SelectedItem + " " + textBox3->Text + "/" + textBox4->Text + " = " + textBox5->Text + "/" + textBox6->Text;
					}
					if (i1 == 3) { //Если было два вычисления
						textBox18->Visible = true;
						textBox18->Text = p1 + ") " + textBox1->Text + "/" + textBox2->Text + " " + comboBox1->SelectedItem + " " + textBox3->Text + "/" + textBox4->Text + " = " + textBox5->Text + "/" + textBox6->Text;
					}
					if (i1 == 4) { //Если было три вычисления
						textBox19->Visible = true;
						textBox19->Text = p1 + ") " + textBox1->Text + "/" + textBox2->Text + " " + comboBox1->SelectedItem + " " + textBox3->Text + "/" + textBox4->Text + " = " + textBox5->Text + "/" + textBox6->Text;
					}
					if (i1 == 5) { //Если было четыре вычисления
						textBox20->Visible = true;
						textBox20->Text = p1 + ") " + textBox1->Text + "/" + textBox2->Text + " " + comboBox1->SelectedItem + " " + textBox3->Text + "/" + textBox4->Text + " = " + textBox5->Text + "/" + textBox6->Text;
					}
					i1++; //Счетчик вычислений конкретно для дробей без целой части
					p1++; //Счетчик общего количества вычислений (не сбрасывается) для дробей без целой части
				}
				else { MessageBox::Show("Попытка деления на 0", "Ошибка"); } //Сообщение об ошибке
				}
			else {
				MessageBox::Show("Ошибка ввода", "Ошибка"); //Сообщение об ошибке
			}
		}
		else { //Иначе если переход на дроби с целой частью был выполнен
			if (Protect2()) { //Проверка на правильность ввода
				int ch1, zn1, ch2, zn2, resCh, resZn, nod, c1, c2, resC; //Числители, знаменатели, целая часть, результат и нод
				ch1 = System::Convert::ToInt32(textBox8->Text);
				zn1 = System::Convert::ToInt32(textBox9->Text);
				ch2 = System::Convert::ToInt32(textBox11->Text);
				zn2 = System::Convert::ToInt32(textBox12->Text);
				c1 = System::Convert::ToInt32(textBox7->Text);
				c2 = System::Convert::ToInt32(textBox10->Text);
				if (zn1 != 0 && zn2 != 0) {
					ch1 = c1 * zn1 + ch1;
					ch2 = c2 * zn2 + ch2;
					if (comboBox2->SelectedItem == "+") { //Сложение
						resCh = ch1 * zn2 + ch2 * zn1;
						resZn = zn1 * zn2;
						nod = getNod(resCh, resZn);
						resCh /= nod; resZn /= nod;
						resC = resCh / resZn;
						resCh = resCh % resZn;
					}
					else if (comboBox2->SelectedItem == "-") { //Вычитание
						resCh = ch1 * zn2 - ch2 * zn1;
						resZn = zn1 * zn2;
						nod = getNod(resCh, resZn);
						resCh /= nod; resZn /= nod;
						resC = resCh / resZn;
						resCh = resCh % resZn;
					}
					else if (comboBox2->SelectedItem == "*") { //Умножение
						resCh = ch1 * ch2;
						resZn = zn1 * zn2;
						nod = getNod(resCh, resZn);
						resCh /= nod; resZn /= nod;
						resC = resCh / resZn;
						resCh = resCh % resZn;
					}
					else if (comboBox2->SelectedItem == "/") { //Деление
						if (ch2 != 0 && zn1 != 0) {
							resCh = ch1 * zn2;
							resZn = ch2 * zn1;
							nod = getNod(resCh, resZn);
							resCh /= nod; resZn /= nod;
							resC = resCh / resZn;
							resCh = resCh % resZn;
						}
						else { MessageBox::Show("Попытка деления на 0", "Ошибка"); } //Сообщение об ошибке
					}
					textBox13->Text = System::Convert::ToString(resC);
					textBox14->Text = System::Convert::ToString(resCh);
					textBox15->Text = System::Convert::ToString(resZn);
					if (i2 > 5) i2 = 1; //Если количество запомненных вычислений >5 то начинаем по-новой(запоминаются последние 5 вычислений)
					if (i2 == 1) { //Если вычисления до этого не производились
						textBox21->Visible = true; //Отображаем textBox и записываем в него вычисление
						textBox21->Text = p2 + ") " + textBox7->Text + ". " + textBox8->Text + "/" + textBox9->Text + " " + comboBox2->SelectedItem + " " + textBox10->Text + ". " + textBox11->Text + "/" + textBox12->Text + " = " + textBox13->Text + ". " + textBox14->Text + "/" + textBox15->Text;
					}
					if (i2 == 2) { //Если было одно вычисление
						textBox22->Visible = true;
						textBox22->Text = p2 + ") " + textBox7->Text + ". " + textBox8->Text + "/" + textBox9->Text + " " + comboBox2->SelectedItem + " " + textBox10->Text + ". " + textBox11->Text + "/" + textBox12->Text + " = " + textBox13->Text + ". " + textBox14->Text + "/" + textBox15->Text;
					}
					if (i2 == 3) { //Если было два вычисления
						textBox23->Visible = true;
						textBox23->Text = p2 + ") " + textBox7->Text + ". " + textBox8->Text + "/" + textBox9->Text + " " + comboBox2->SelectedItem + " " + textBox10->Text + ". " + textBox11->Text + "/" + textBox12->Text + " = " + textBox13->Text + ". " + textBox14->Text + "/" + textBox15->Text;
					}
					if (i2 == 4) { //Если было три вычисления
						textBox24->Visible = true;
						textBox24->Text = p2 + ") " + textBox7->Text + ". " + textBox8->Text + "/" + textBox9->Text + " " + comboBox2->SelectedItem + " " + textBox10->Text + ". " + textBox11->Text + "/" + textBox12->Text + " = " + textBox13->Text + ". " + textBox14->Text + "/" + textBox15->Text;
					}
					if (i2 == 5) { //Если было четыре вычисления
						textBox25->Visible = true;
						textBox25->Text = p2 + ") " + textBox7->Text + ". " + textBox8->Text + "/" + textBox9->Text + " " + comboBox2->SelectedItem + " " + textBox10->Text + ". " + textBox11->Text + "/" + textBox12->Text + " = " + textBox13->Text + ". " + textBox14->Text + "/" + textBox15->Text;
					}
					i2++; //Счетчик вычислений для дробей с целой частью
					p2++; //Счетчик общего количества вычислений (не сбрасывается) для дробей с целой частью
				}
				else { MessageBox::Show("Попытка деления на 0", "Ошибка"); } //Сообщение об ошибке
			}
			else {
				MessageBox::Show("Ошибка ввода", "Ошибка"); //Сообщение об ошибке
			}
		}
	}

	bool prot(Control^ ctl) { //Функция проверяющая, переданный textBox на правильность введенных символов
		for (int i = 0; i < ctl->Text->Length; i++) {
			if ((ctl->Text[i] < '0') || (ctl->Text[i] > '9')) { return false; }
		}
		return true;
	}

	//Функции защиты от неверного ввода
	bool Protect() { //Защита от неверного ввода для дроби без целой части
		//Если количество введенных символов равно 0, то возвращаем false
		if ((textBox1->Text->Length == 0) || (textBox2->Text->Length == 0) || (textBox3->Text->Length == 0) || (textBox1->Text->Length == 0)) { return false; }
		if (prot(textBox1) && prot(textBox2) && prot(textBox3) && prot(textBox4)) return true; //Если символы введены верно и их количество не равно 0, то возвращаем true
		else return false; //Иначе возвращаем false
	}

	bool Protect2() { //Защита от неверного ввода для дроби с целой частью
		if ((textBox7->Text->Length == 0) || (textBox8->Text->Length == 0) || (textBox9->Text->Length == 0) || (textBox10->Text->Length == 0) || (textBox11->Text->Length == 0) || (textBox12->Text->Length == 0)) { return false; }
		if (prot(textBox7) && prot(textBox8) && prot(textBox9) && prot(textBox10) && prot(textBox11) && prot(textBox12)) return true;
		else return false;
	}

	bool Protect3() { //Защита от неверного ввода в конвертере для дроби без целой части
		if ((textBox26->Text->Length == 0) || (textBox27->Text->Length == 0)) { return false; }
		if (prot(textBox26) && prot(textBox27)) return true;
		else return false;
	}

	bool Protect4() { //Защита от неверного ввода в конвертере для дроби с целой частью
		if ((textBox28->Text->Length == 0) || (textBox29->Text->Length == 0) || (textBox30->Text->Length == 0)) { return false; }
		if (prot(textBox28) && prot(textBox29) && prot(textBox30)) return true;
		else return false;
	}
	//Функция, очищающая текст в указанных textBox'ах по TabIndex
	void cleartextBoxes(int f, int s) { //int f - начальный элемент по TabIndex, int s - конечный элемент по TabIndex
		for each (Control ^ ctl in this->Controls) //Для каждого элемента
		//В диапазоне указанных TabIndex'ов и элемент не должен содержать текста "="(чтобы не очистить кнопку вычислений)
		if((dynamic_cast<Control^>(ctl)->TabIndex) <= s && (dynamic_cast<Control^>(ctl)->TabIndex >= f) && (dynamic_cast<Control^>(ctl)->Text != "=")) 
		ctl->Text = "";
	}
	//Функция, меняющая видимость объектов по TabIndex
	void Vision(int f, int s, bool vis) { //int f - начальный элемент по TabIndex, int s - конечный элемент по TabIndex, bool vis - видимый/невидимый
		for each (Control ^ ctl in this->Controls) //Для каждого элемента
			if ((dynamic_cast<Control^>(ctl)->TabIndex) <= s && (dynamic_cast<Control^>(ctl)->TabIndex >= f)) //В диапазоне указанных TabIndex'ов
				ctl->Visible = vis;
	}

public:     bool perexod = true; //Был ли совершен переход на дроби с целой частью
		    bool convert = true; //Был ли открыт конвертер
		    bool hist = true; //Была ли открыта вкладка с предыдущими вычислениями
			bool key1 = false; //Была ли нажата клавиша R (для горячих клавиш)
			bool key2 = false; //Была ли нажата клавина P (для горячих клавиш)
			int i1 = 1, i2 = 1, p1 = 1, p2 = 1; //Счетчики для запоминания предыдущих вычислений в дробях с целой и без целой части
		  
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { //Кнопка очистить
	if (perexod == true) { //Если не был выполнен переход на дроби с целой частью
		cleartextBoxes(0, 6);
		comboBox1->SelectedIndex = -1; //Очищается выбранное действие
	}
	else { //Иначе
		cleartextBoxes(14, 23);
		comboBox2->SelectedIndex = -1;
	}
}
	   //Горячие клавиши для переноса ответа
 private: System::Void Form1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) //Если нажата какая-либо клавиша
 { //Первый бинд
	 if (perexod == true) { //Если не был выполнен переход на дроби с целой частью
		 if ((e->KeyCode == Keys::R) && (key1 == false) && (textBox5->Text->Length != 0) && (textBox6->Text->Length != 0)) { //Если клавиша R нажата первый раз и в ответе есть числа
			 label2->Visible = true;
			 key1 = true;
		 }
		 if ((e->KeyCode == Keys::Y) && (key1 == true)){ //Если нажали Y, то переносим ответ в первую дробь и чистим поле ответа
			 textBox1->Text = textBox5->Text;
			 textBox2->Text = textBox6->Text;
			 cleartextBoxes(3, 6);
			 comboBox1->SelectedIndex = -1;
			 label2->Visible = false;
			 key1 = false;
		 }
		 if ((e->KeyCode == Keys::N) && (key1 == true)) { //Если нажали N, то отменяем все нажатия
			 label2->Visible = false;
			 key1 = false;
		 }
	 }
	 else { //Если был выполнен переход на дроби с целой частью
		 //Если клавиша R нажата первый раз и в ответе есть числа
		 if ((e->KeyCode == Keys::R) && (key1 == false) && (textBox13->Text->Length != 0) && (textBox14->Text->Length != 0) && (textBox15->Text->Length != 0)) {
			 label2->Visible = true;
			 key1 = true;
		 }
		 if ((e->KeyCode == Keys::Y) && (key1 == true)) { //Если нажали Y, то переносим ответ в первую дробь с целой частью и чистим поле ответа
			 textBox7->Text = textBox13->Text;
			 textBox8->Text = textBox14->Text;
			 textBox9->Text = textBox15->Text;
			 cleartextBoxes(18, 23);
			 comboBox2->SelectedIndex = -1;
			 label2->Visible = false;
			 key1 = false;
		 }
		 if ((e->KeyCode == Keys::N) && (key1 == true)){ //Если нажали N, то отменяем все нажатия
			 label2->Visible = false;
			 key1 = false;
		 }
	 }
	 //Второй бинд
	 if (convert == false) { //Если конвертер открыт
		 //Если нажата клавиша P и либо есть ответ для дроби без целой части и не был выполнен переход на дроби с целой частью, либо есть ответ для дроби с целой частью и переход был выполнен
		 if ((e->KeyCode == Keys::P) && (key2 == false) && ((textBox31->Text->Length != 0 && textBox32->Text->Length != 0 && perexod == true) || (textBox28->Text->Length != 0 && textBox29->Text->Length != 0 && textBox30->Text->Length != 0 && perexod == false))) {
			 label6->Visible = true;
			 key2 = true;
		 }
		 //Проверка конкретно для дроби без целой части и если нажата клавиша Y, то переносим ответ из конвертера в первую дробь и чистим поля конвертера
		 if ((e->KeyCode == Keys::Y) && (key2 == true) && (textBox31->Text->Length != 0 && textBox32->Text->Length != 0 && perexod == true)) {
				 textBox1->Text = textBox31->Text;
				 textBox2->Text = textBox32->Text;
				 cleartextBoxes(46, 47);
				 label6->Visible = false;
				 key2 = false;
		 }
		 //Проверка конкретно для дроби с целой частью и если нажата клавиша Y, то переносим ответ из конвертера в первую дробь и чистим поля конвертера
		 //Из двух условий выполняется всегда одно благодаря переменной key2
		 else if ((e->KeyCode == Keys::Y) && (key2 == true) && (textBox28->Text->Length != 0 && textBox29->Text->Length != 0 && textBox30->Text->Length != 0 && perexod == false)) {
				 textBox7->Text = textBox28->Text;
				 textBox8->Text = textBox29->Text;
				 textBox9->Text = textBox30->Text;
				 cleartextBoxes(42, 44);
				 label6->Visible = false;
				 key2 = false;
		 }
		 else if ((e->KeyCode == Keys::N) && (key2 == true)) { //Иначе если нажата N, то отменяем все нажатия
			 label6->Visible = false;
			 key2 = false;
		 }
	 }
 }

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) { //Кнопка перехода от дробей с целой частью к дробям без целой
	if (perexod == false) {
		Vision(50, 53, false);
		Vision(54, 57, true);
		Vision(0, 6, true);
		label1->Visible = true;
		label4->Visible = false;
		Vision(14, 23, false);
		//Предыдущие вычисления: в зависимости от вида текущих дробей выводятся соответствующие предыдущие вычисления 
		Vision(33, 37, false);
		if (p1 == 2) textBox16->Visible = true;
		if (p1 == 3) Vision(26, 27, true);
		if (p1 == 4) Vision(26, 28, true);
		if (p1 == 5) Vision(26, 29, true);
		if (p1 >= 6) Vision(26, 30, true);
		perexod = true;
	}
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) { //Кнопка перехода от дробей без целой части к дробям с целой
	if (perexod == true) {
		Vision(50, 53, true);
		Vision(54, 57, false);
		Vision(0, 6, false);
		label1->Visible = false;
		label4->Visible = true;
		Vision(14, 23, true);
		// Предыдущие вычисления: в зависимости от вида текущих дробей выводятся соответствующие предыдущие вычисления 
		Vision(26, 30, false);
		if (p2 == 2) textBox21->Visible = true;
		if (p2 == 3) Vision(33, 34, true);
		if (p2 == 4) Vision(33, 35, true);
		if (p2 == 5) Vision(33, 36, true);
		if (p2 >= 6) Vision(33, 37, true);
		perexod = false;
	}
}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) { //Кнопка открывания вкладки с предыдущими вычислениями
		if ((hist == true) && (convert == true)){ //Если конвертер не открыт и вкладка с историей тоже не открыта
			ClientSize = System::Drawing::Size(800, 285); //Меняем размер окна
			hist = false;
		}
		else  if((convert == true) && (hist == false)){ //Если вкладка с историей открыта и конвертер закрыт
			ClientSize = System::Drawing::Size(513, 285); //Меняем размер окна
			hist = true;
		}
	}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) { //Кнопка очистки истории(предыдущих вычислений)
	if (perexod == true) { //Если открыты дроби без целой части, то чистим историю для них
		cleartextBoxes(26, 30);
		Vision(26, 30, false);
		i1 = 1;
		p1 = 1;
	}
	else { //Иначе чистим историю для дробей с целой частью
		cleartextBoxes(33, 37);
		Vision(33, 37, false);
		i2 = 1;
		p2 = 1;
	}
}

private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) { //Кнопка открывания конвертера
	if ((hist == true) && (convert == true)){ //Если вкладка история закрыта и конвертер закрыт
		ClientSize = System::Drawing::Size(513, 470); //Меняем размер окна
		convert = false;
	}
	else if ((hist == true) && (convert == false)) { //Если вкладка история закрыта и конвертер открыт
		ClientSize = System::Drawing::Size(513, 285); //Меняем размер окна
		convert = true;
	}

}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) { //Кнопка преобразования из обычной дроби в дробь с целой частью в конвертере
	if (Protect3()) { //Если данные введены верно
		int ch1, zn1, c2;
		ch1 = System::Convert::ToInt32(textBox26->Text);
		zn1 = System::Convert::ToInt32(textBox27->Text);
		if (zn1 == 0) { MessageBox::Show("Попытка деления на 0", "Ошибка"); } //Проверка деления на ноль
		else {
		c2 = ch1 / zn1;
		ch1 = ch1 % zn1;
			textBox28->Text = System::Convert::ToString(c2);
			textBox29->Text = System::Convert::ToString(ch1);
			textBox30->Text = System::Convert::ToString(zn1);
		}
	}
	else { MessageBox::Show("Ошибка ввода", "Ошибка"); } //Если дробь не прошла проверку
}

private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) { //Кнопка преобразования из дроби с целой частью в обычную дробь в конвертере
	if (Protect4()) { //Если данные введены верно
		int c1, ch1, zn1;
		c1 = System::Convert::ToInt32(textBox28->Text);
		ch1 = System::Convert::ToInt32(textBox29->Text);
		zn1 = System::Convert::ToInt32(textBox30->Text);
		if(zn1 == 0) { MessageBox::Show("Попытка деления на 0", "Ошибка"); } //Проверка деления на ноль
		else {
			ch1 = c1 * zn1 + ch1;
			textBox31->Text = System::Convert::ToString(ch1);
			textBox32->Text = System::Convert::ToString(zn1);
		}
	}
	else { MessageBox::Show("Ошибка ввода", "Ошибка"); } //Если дробь не прошла проверку
}

private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) { //Кнопка очистки всех дробей в конвертере
	cleartextBoxes(39, 47);
}

private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) { //Кнопка информации, выводит сообщение на центр экрана при нажатии
	MessageBox::Show("R - переместить ответ в первую дробь\nP - переместить ответ из конвертера в дробь\nY - Да / N - Нет", "Горячие клавиши");
}
};
}
