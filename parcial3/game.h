#pragma once

namespace parcial3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de game
	/// </summary>
	public ref class game : public System::Windows::Forms::Form
	{
	public:
		game(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			iniciar();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txt1;
	private: System::Windows::Forms::TextBox^  txt2;
	private: System::Windows::Forms::TextBox^  txt3;
	private: System::Windows::Forms::TextBox^  txt4;
	private: System::Windows::Forms::TextBox^  txt5;
	private: System::Windows::Forms::TextBox^  txt6;
	private: System::Windows::Forms::TextBox^  txt7;
	private: System::Windows::Forms::TextBox^  txt8;
	private: System::Windows::Forms::TextBox^  txt9;
	private: System::Windows::Forms::TextBox^  txt14;
	private: System::Windows::Forms::TextBox^  txt13;
	private: System::Windows::Forms::TextBox^  txt12;
	private: System::Windows::Forms::TextBox^  txt11;
	private: System::Windows::Forms::TextBox^  txt10;
	private: System::Windows::Forms::TextBox^  txt15;
	private: System::Windows::Forms::TextBox^  txt16;
	private: System::Windows::Forms::TextBox^  txt17;
	private: System::Windows::Forms::TextBox^  txt18;
	private: System::Windows::Forms::TextBox^  txt20;
	private: System::Windows::Forms::TextBox^  txt19;
	private: System::Windows::Forms::TextBox^  txt21;
	private: System::Windows::Forms::TextBox^  txt22;
	private: System::Windows::Forms::TextBox^  txt23;
	private: System::Windows::Forms::TextBox^  txt24;
	private: System::Windows::Forms::TextBox^  txt25;
	private: System::Windows::Forms::TextBox^  txt26;
	private: System::Windows::Forms::TextBox^  txt27;
	private: System::Windows::Forms::TextBox^  txt28;
	private: System::Windows::Forms::TextBox^  txt29;
	private: System::Windows::Forms::TextBox^  txt30;
	private: System::Windows::Forms::TextBox^  txt32;
	private: System::Windows::Forms::TextBox^  txt31;
	private: System::Windows::Forms::TextBox^  txt33;
	private: System::Windows::Forms::TextBox^  txt35;
	private: System::Windows::Forms::TextBox^  txt34;
	private: System::Windows::Forms::TextBox^  txt36;
	private: System::Windows::Forms::TextBox^  txt37;
	private: System::Windows::Forms::TextBox^  txt40;
	private: System::Windows::Forms::TextBox^  txt39;
	private: System::Windows::Forms::TextBox^  txt38;
	private: System::Windows::Forms::TextBox^  txt41;
	private: System::Windows::Forms::TextBox^  txt42;
	private: System::Windows::Forms::TextBox^  txt43;
	private: System::Windows::Forms::TextBox^  txt44;
	private: System::Windows::Forms::TextBox^  txt45;
	private: System::Windows::Forms::TextBox^  txt46;
	private: System::Windows::Forms::Button^  btnCheck;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  lblTimer;
	private: System::Windows::Forms::Label^  lblPrimero;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;


	private: System::ComponentModel::IContainer^  components;



	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(game::typeid));
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->txt2 = (gcnew System::Windows::Forms::TextBox());
			this->txt3 = (gcnew System::Windows::Forms::TextBox());
			this->txt4 = (gcnew System::Windows::Forms::TextBox());
			this->txt5 = (gcnew System::Windows::Forms::TextBox());
			this->txt6 = (gcnew System::Windows::Forms::TextBox());
			this->txt7 = (gcnew System::Windows::Forms::TextBox());
			this->txt8 = (gcnew System::Windows::Forms::TextBox());
			this->txt9 = (gcnew System::Windows::Forms::TextBox());
			this->txt14 = (gcnew System::Windows::Forms::TextBox());
			this->txt13 = (gcnew System::Windows::Forms::TextBox());
			this->txt12 = (gcnew System::Windows::Forms::TextBox());
			this->txt11 = (gcnew System::Windows::Forms::TextBox());
			this->txt10 = (gcnew System::Windows::Forms::TextBox());
			this->txt15 = (gcnew System::Windows::Forms::TextBox());
			this->txt16 = (gcnew System::Windows::Forms::TextBox());
			this->txt17 = (gcnew System::Windows::Forms::TextBox());
			this->txt18 = (gcnew System::Windows::Forms::TextBox());
			this->txt20 = (gcnew System::Windows::Forms::TextBox());
			this->txt19 = (gcnew System::Windows::Forms::TextBox());
			this->txt21 = (gcnew System::Windows::Forms::TextBox());
			this->txt22 = (gcnew System::Windows::Forms::TextBox());
			this->txt23 = (gcnew System::Windows::Forms::TextBox());
			this->txt24 = (gcnew System::Windows::Forms::TextBox());
			this->txt25 = (gcnew System::Windows::Forms::TextBox());
			this->txt26 = (gcnew System::Windows::Forms::TextBox());
			this->txt27 = (gcnew System::Windows::Forms::TextBox());
			this->txt28 = (gcnew System::Windows::Forms::TextBox());
			this->txt29 = (gcnew System::Windows::Forms::TextBox());
			this->txt30 = (gcnew System::Windows::Forms::TextBox());
			this->txt32 = (gcnew System::Windows::Forms::TextBox());
			this->txt31 = (gcnew System::Windows::Forms::TextBox());
			this->txt33 = (gcnew System::Windows::Forms::TextBox());
			this->txt35 = (gcnew System::Windows::Forms::TextBox());
			this->txt34 = (gcnew System::Windows::Forms::TextBox());
			this->txt36 = (gcnew System::Windows::Forms::TextBox());
			this->txt37 = (gcnew System::Windows::Forms::TextBox());
			this->txt40 = (gcnew System::Windows::Forms::TextBox());
			this->txt39 = (gcnew System::Windows::Forms::TextBox());
			this->txt38 = (gcnew System::Windows::Forms::TextBox());
			this->txt41 = (gcnew System::Windows::Forms::TextBox());
			this->txt42 = (gcnew System::Windows::Forms::TextBox());
			this->txt43 = (gcnew System::Windows::Forms::TextBox());
			this->txt44 = (gcnew System::Windows::Forms::TextBox());
			this->txt45 = (gcnew System::Windows::Forms::TextBox());
			this->txt46 = (gcnew System::Windows::Forms::TextBox());
			this->btnCheck = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->lblTimer = (gcnew System::Windows::Forms::Label());
			this->lblPrimero = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txt1
			// 
			this->txt1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt1->Location = System::Drawing::Point(269, 68);
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(40, 26);
			this->txt1->TabIndex = 38;
			this->txt1->Text = L"-";
			this->txt1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt2
			// 
			this->txt2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt2->Location = System::Drawing::Point(269, 100);
			this->txt2->Name = L"txt2";
			this->txt2->Size = System::Drawing::Size(40, 26);
			this->txt2->TabIndex = 6;
			this->txt2->Text = L"-";
			this->txt2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt3
			// 
			this->txt3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt3->Location = System::Drawing::Point(269, 132);
			this->txt3->Name = L"txt3";
			this->txt3->Size = System::Drawing::Size(40, 26);
			this->txt3->TabIndex = 8;
			this->txt3->Text = L"-";
			this->txt3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt4
			// 
			this->txt4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt4->Location = System::Drawing::Point(269, 164);
			this->txt4->Name = L"txt4";
			this->txt4->Size = System::Drawing::Size(40, 26);
			this->txt4->TabIndex = 13;
			this->txt4->Text = L"-";
			this->txt4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt5
			// 
			this->txt5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt5->Location = System::Drawing::Point(269, 196);
			this->txt5->Name = L"txt5";
			this->txt5->Size = System::Drawing::Size(40, 26);
			this->txt5->TabIndex = 39;
			this->txt5->Text = L"-";
			this->txt5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt6
			// 
			this->txt6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt6->Location = System::Drawing::Point(269, 228);
			this->txt6->Name = L"txt6";
			this->txt6->Size = System::Drawing::Size(40, 26);
			this->txt6->TabIndex = 40;
			this->txt6->Text = L"-";
			this->txt6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt7
			// 
			this->txt7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt7->Location = System::Drawing::Point(269, 260);
			this->txt7->Name = L"txt7";
			this->txt7->Size = System::Drawing::Size(40, 26);
			this->txt7->TabIndex = 18;
			this->txt7->Text = L"-";
			this->txt7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt8
			// 
			this->txt8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt8->Location = System::Drawing::Point(269, 292);
			this->txt8->Name = L"txt8";
			this->txt8->Size = System::Drawing::Size(40, 26);
			this->txt8->TabIndex = 41;
			this->txt8->Text = L"-";
			this->txt8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt9
			// 
			this->txt9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt9->Location = System::Drawing::Point(269, 324);
			this->txt9->Name = L"txt9";
			this->txt9->Size = System::Drawing::Size(40, 26);
			this->txt9->TabIndex = 26;
			this->txt9->Text = L"-";
			this->txt9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt14
			// 
			this->txt14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt14->Location = System::Drawing::Point(223, 100);
			this->txt14->Name = L"txt14";
			this->txt14->Size = System::Drawing::Size(40, 26);
			this->txt14->TabIndex = 5;
			this->txt14->Text = L"-";
			this->txt14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt13
			// 
			this->txt13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt13->Location = System::Drawing::Point(177, 100);
			this->txt13->Name = L"txt13";
			this->txt13->Size = System::Drawing::Size(40, 26);
			this->txt13->TabIndex = 4;
			this->txt13->Text = L"-";
			this->txt13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt12
			// 
			this->txt12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt12->Location = System::Drawing::Point(131, 100);
			this->txt12->Name = L"txt12";
			this->txt12->Size = System::Drawing::Size(40, 26);
			this->txt12->TabIndex = 3;
			this->txt12->Text = L"-";
			this->txt12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt11
			// 
			this->txt11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt11->Location = System::Drawing::Point(85, 100);
			this->txt11->Name = L"txt11";
			this->txt11->Size = System::Drawing::Size(40, 26);
			this->txt11->TabIndex = 2;
			this->txt11->Text = L"-";
			this->txt11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt10
			// 
			this->txt10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt10->Location = System::Drawing::Point(39, 100);
			this->txt10->Name = L"txt10";
			this->txt10->Size = System::Drawing::Size(40, 26);
			this->txt10->TabIndex = 1;
			this->txt10->Text = L"-";
			this->txt10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt15
			// 
			this->txt15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt15->Location = System::Drawing::Point(223, 132);
			this->txt15->Name = L"txt15";
			this->txt15->Size = System::Drawing::Size(40, 26);
			this->txt15->TabIndex = 7;
			this->txt15->Text = L"-";
			this->txt15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt16
			// 
			this->txt16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt16->Location = System::Drawing::Point(315, 132);
			this->txt16->Name = L"txt16";
			this->txt16->Size = System::Drawing::Size(40, 26);
			this->txt16->TabIndex = 9;
			this->txt16->Text = L"-";
			this->txt16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt17
			// 
			this->txt17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt17->Location = System::Drawing::Point(361, 132);
			this->txt17->Name = L"txt17";
			this->txt17->Size = System::Drawing::Size(40, 26);
			this->txt17->TabIndex = 10;
			this->txt17->Text = L"-";
			this->txt17->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt18
			// 
			this->txt18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt18->Location = System::Drawing::Point(407, 132);
			this->txt18->Name = L"txt18";
			this->txt18->Size = System::Drawing::Size(40, 26);
			this->txt18->TabIndex = 11;
			this->txt18->Text = L"-";
			this->txt18->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt20
			// 
			this->txt20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt20->Location = System::Drawing::Point(223, 260);
			this->txt20->Name = L"txt20";
			this->txt20->Size = System::Drawing::Size(40, 26);
			this->txt20->TabIndex = 17;
			this->txt20->Text = L"-";
			this->txt20->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt19
			// 
			this->txt19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt19->Location = System::Drawing::Point(177, 260);
			this->txt19->Name = L"txt19";
			this->txt19->Size = System::Drawing::Size(40, 26);
			this->txt19->TabIndex = 16;
			this->txt19->Text = L"-";
			this->txt19->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt21
			// 
			this->txt21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt21->Location = System::Drawing::Point(315, 260);
			this->txt21->Name = L"txt21";
			this->txt21->Size = System::Drawing::Size(40, 26);
			this->txt21->TabIndex = 19;
			this->txt21->Text = L"-";
			this->txt21->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt22
			// 
			this->txt22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt22->Location = System::Drawing::Point(361, 260);
			this->txt22->Name = L"txt22";
			this->txt22->Size = System::Drawing::Size(40, 26);
			this->txt22->TabIndex = 20;
			this->txt22->Text = L"-";
			this->txt22->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt23
			// 
			this->txt23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt23->Location = System::Drawing::Point(407, 260);
			this->txt23->Name = L"txt23";
			this->txt23->Size = System::Drawing::Size(40, 26);
			this->txt23->TabIndex = 21;
			this->txt23->Text = L"-";
			this->txt23->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt24
			// 
			this->txt24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt24->Location = System::Drawing::Point(453, 260);
			this->txt24->Name = L"txt24";
			this->txt24->Size = System::Drawing::Size(40, 26);
			this->txt24->TabIndex = 22;
			this->txt24->Text = L"-";
			this->txt24->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt25
			// 
			this->txt25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt25->Location = System::Drawing::Point(407, 228);
			this->txt25->Name = L"txt25";
			this->txt25->Size = System::Drawing::Size(40, 26);
			this->txt25->TabIndex = 42;
			this->txt25->Text = L"-";
			this->txt25->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt26
			// 
			this->txt26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt26->Location = System::Drawing::Point(407, 292);
			this->txt26->Name = L"txt26";
			this->txt26->Size = System::Drawing::Size(40, 26);
			this->txt26->TabIndex = 43;
			this->txt26->Text = L"-";
			this->txt26->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt27
			// 
			this->txt27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt27->Location = System::Drawing::Point(407, 324);
			this->txt27->Name = L"txt27";
			this->txt27->Size = System::Drawing::Size(40, 26);
			this->txt27->TabIndex = 44;
			this->txt27->Text = L"-";
			this->txt27->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt28
			// 
			this->txt28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt28->Location = System::Drawing::Point(407, 356);
			this->txt28->Name = L"txt28";
			this->txt28->Size = System::Drawing::Size(40, 26);
			this->txt28->TabIndex = 45;
			this->txt28->Text = L"-";
			this->txt28->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt29
			// 
			this->txt29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt29->Location = System::Drawing::Point(407, 388);
			this->txt29->Name = L"txt29";
			this->txt29->Size = System::Drawing::Size(40, 26);
			this->txt29->TabIndex = 46;
			this->txt29->Text = L"-";
			this->txt29->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt30
			// 
			this->txt30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt30->Location = System::Drawing::Point(407, 420);
			this->txt30->Name = L"txt30";
			this->txt30->Size = System::Drawing::Size(40, 26);
			this->txt30->TabIndex = 33;
			this->txt30->Text = L"-";
			this->txt30->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt32
			// 
			this->txt32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt32->Location = System::Drawing::Point(177, 324);
			this->txt32->Name = L"txt32";
			this->txt32->Size = System::Drawing::Size(40, 26);
			this->txt32->TabIndex = 24;
			this->txt32->Text = L"-";
			this->txt32->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt31
			// 
			this->txt31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt31->Location = System::Drawing::Point(131, 324);
			this->txt31->Name = L"txt31";
			this->txt31->Size = System::Drawing::Size(40, 26);
			this->txt31->TabIndex = 23;
			this->txt31->Text = L"-";
			this->txt31->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt33
			// 
			this->txt33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt33->Location = System::Drawing::Point(223, 324);
			this->txt33->Name = L"txt33";
			this->txt33->Size = System::Drawing::Size(40, 26);
			this->txt33->TabIndex = 25;
			this->txt33->Text = L"-";
			this->txt33->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt35
			// 
			this->txt35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt35->Location = System::Drawing::Point(361, 420);
			this->txt35->Name = L"txt35";
			this->txt35->Size = System::Drawing::Size(40, 26);
			this->txt35->TabIndex = 32;
			this->txt35->Text = L"-";
			this->txt35->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt34
			// 
			this->txt34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt34->Location = System::Drawing::Point(315, 420);
			this->txt34->Name = L"txt34";
			this->txt34->Size = System::Drawing::Size(40, 26);
			this->txt34->TabIndex = 31;
			this->txt34->Text = L"-";
			this->txt34->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt36
			// 
			this->txt36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt36->Location = System::Drawing::Point(453, 420);
			this->txt36->Name = L"txt36";
			this->txt36->Size = System::Drawing::Size(40, 26);
			this->txt36->TabIndex = 34;
			this->txt36->Text = L"-";
			this->txt36->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt37
			// 
			this->txt37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt37->Location = System::Drawing::Point(499, 420);
			this->txt37->Name = L"txt37";
			this->txt37->Size = System::Drawing::Size(40, 26);
			this->txt37->TabIndex = 35;
			this->txt37->Text = L"-";
			this->txt37->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt40
			// 
			this->txt40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt40->Location = System::Drawing::Point(499, 388);
			this->txt40->Name = L"txt40";
			this->txt40->Size = System::Drawing::Size(40, 26);
			this->txt40->TabIndex = 48;
			this->txt40->Text = L"-";
			this->txt40->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt39
			// 
			this->txt39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt39->Location = System::Drawing::Point(499, 356);
			this->txt39->Name = L"txt39";
			this->txt39->Size = System::Drawing::Size(40, 26);
			this->txt39->TabIndex = 47;
			this->txt39->Text = L"-";
			this->txt39->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt38
			// 
			this->txt38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt38->Location = System::Drawing::Point(499, 324);
			this->txt38->Name = L"txt38";
			this->txt38->Size = System::Drawing::Size(40, 26);
			this->txt38->TabIndex = 27;
			this->txt38->Text = L"-";
			this->txt38->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt41
			// 
			this->txt41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt41->Location = System::Drawing::Point(545, 324);
			this->txt41->Name = L"txt41";
			this->txt41->Size = System::Drawing::Size(40, 26);
			this->txt41->TabIndex = 28;
			this->txt41->Text = L"-";
			this->txt41->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt42
			// 
			this->txt42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt42->Location = System::Drawing::Point(591, 324);
			this->txt42->Name = L"txt42";
			this->txt42->Size = System::Drawing::Size(40, 26);
			this->txt42->TabIndex = 29;
			this->txt42->Text = L"-";
			this->txt42->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt43
			// 
			this->txt43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt43->Location = System::Drawing::Point(637, 324);
			this->txt43->Name = L"txt43";
			this->txt43->Size = System::Drawing::Size(40, 26);
			this->txt43->TabIndex = 30;
			this->txt43->Text = L"-";
			this->txt43->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt44
			// 
			this->txt44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt44->Location = System::Drawing::Point(223, 164);
			this->txt44->Name = L"txt44";
			this->txt44->Size = System::Drawing::Size(40, 26);
			this->txt44->TabIndex = 12;
			this->txt44->Text = L"-";
			this->txt44->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt45
			// 
			this->txt45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt45->Location = System::Drawing::Point(315, 164);
			this->txt45->Name = L"txt45";
			this->txt45->Size = System::Drawing::Size(40, 26);
			this->txt45->TabIndex = 14;
			this->txt45->Text = L"-";
			this->txt45->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt46
			// 
			this->txt46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt46->Location = System::Drawing::Point(361, 164);
			this->txt46->Name = L"txt46";
			this->txt46->Size = System::Drawing::Size(40, 26);
			this->txt46->TabIndex = 15;
			this->txt46->Text = L"-";
			this->txt46->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btnCheck
			// 
			this->btnCheck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCheck->Location = System::Drawing::Point(147, 459);
			this->btnCheck->Name = L"btnCheck";
			this->btnCheck->Size = System::Drawing::Size(151, 72);
			this->btnCheck->TabIndex = 46;
			this->btnCheck->Text = L"CHECK";
			this->btnCheck->UseVisualStyleBackColor = true;
			this->btnCheck->Click += gcnew System::EventHandler(this, &game::btnCheck_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &game::timer1_Tick);
			// 
			// lblTimer
			// 
			this->lblTimer->AutoSize = true;
			this->lblTimer->Cursor = System::Windows::Forms::Cursors::Default;
			this->lblTimer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTimer->Location = System::Drawing::Point(9, 12);
			this->lblTimer->Name = L"lblTimer";
			this->lblTimer->Size = System::Drawing::Size(193, 37);
			this->lblTimer->TabIndex = 47;
			this->lblTimer->Text = L"0 segundos";
			// 
			// lblPrimero
			// 
			this->lblPrimero->AutoSize = true;
			this->lblPrimero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPrimero->Location = System::Drawing::Point(692, 21);
			this->lblPrimero->Name = L"lblPrimero";
			this->lblPrimero->Size = System::Drawing::Size(197, 24);
			this->lblPrimero->TabIndex = 48;
			this->lblPrimero->Text = L"Mejor jugador: ----------";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(361, 478);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 41);
			this->button1->TabIndex = 50;
			this->button1->Text = L"Revelar resultados";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &game::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(16, 100);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 24);
			this->label1->TabIndex = 51;
			this->label1->Text = L"1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(196, 133);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 24);
			this->label2->TabIndex = 52;
			this->label2->Text = L"2";
			this->label2->Click += gcnew System::EventHandler(this, &game::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(196, 164);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 24);
			this->label3->TabIndex = 53;
			this->label3->Text = L"3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(150, 260);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(21, 24);
			this->label4->TabIndex = 54;
			this->label4->Text = L"4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(104, 326);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 24);
			this->label5->TabIndex = 55;
			this->label5->Text = L"5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(472, 324);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(21, 24);
			this->label6->TabIndex = 56;
			this->label6->Text = L"6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(288, 420);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(21, 24);
			this->label7->TabIndex = 57;
			this->label7->Text = L"7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(277, 41);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(21, 24);
			this->label8->TabIndex = 58;
			this->label8->Text = L"1";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(415, 201);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(21, 24);
			this->label9->TabIndex = 59;
			this->label9->Text = L"2";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(508, 294);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(21, 24);
			this->label10->TabIndex = 60;
			this->label10->Text = L"3";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(689, 82);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(126, 25);
			this->label11->TabIndex = 61;
			this->label11->Text = L"Horizontal:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(689, 372);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(99, 25);
			this->label12->TabIndex = 62;
			this->label12->Text = L"Vertical:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(691, 115);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(399, 36);
			this->label13->TabIndex = 63;
			this->label13->Text = L"1.- Buen centinela, es un experto en la vigilancia y capaz de \nadelantarse a los "
				L"movimientos de los enemigos.";
			this->label13->Click += gcnew System::EventHandler(this, &game::label13_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(691, 155);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(417, 18);
			this->label14->TabIndex = 64;
			this->label14->Text = L"2.- Es una agente centrada en aspectos toxicos  y venenosos.";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(691, 179);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(411, 36);
			this->label15->TabIndex = 65;
			this->label15->Text = L"3.- Es una especie de cazador de las sombras que puede ser\n muy escurridizo en ma"
				L"nos hábiles.";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(693, 218);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(379, 18);
			this->label16->TabIndex = 66;
			this->label16->Text = L"4.- Es un dualista muy habil y le encanta jugar con fuego.";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(693, 243);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(373, 36);
			this->label17->TabIndex = 67;
			this->label17->Text = L"5.- Es un personaje muy relacionado con la naturaleza, \nuna de sus especialidades"
				L" es convertirse en un lobo.";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(693, 282);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(332, 36);
			this->label18->TabIndex = 68;
			this->label18->Text = L"6.- Es el personaje médico y sanador del equipo, \ntambien es el mas nerfeado del "
				L"juego";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(693, 324);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(402, 36);
			this->label19->TabIndex = 69;
			this->label19->Text = L"7.- Es dualista, es capaz de recuperar vida con los muertos \ne incluso volverse i"
				L"ntocable por unos segundos";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(691, 403);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(409, 36);
			this->label20->TabIndex = 70;
			this->label20->Text = L"1.- Funciona un poco como el clásico personaje \"soldado\". \nEs capaz de tirar 3 hu"
				L"mos y llamar un laser enorme del cielo.";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(692, 444);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(444, 36);
			this->label21->TabIndex = 71;
			this->label21->Text = L"2.- Es una centinela y una genio que posee un arsenal de inventos \nentre los que "
				L"se encuentran unos bots muy interesantes.";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(692, 483);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(492, 36);
			this->label22->TabIndex = 72;
			this->label22->Text = L"3.- Es un personaje ideado para los jugadores más \"rastreadores\". \nGracias a su a"
				L"rco podrás ir siempre un paso por delante de tus enemigos";
			this->label22->Click += gcnew System::EventHandler(this, &game::label22_Click);
			// 
			// game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1200, 557);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lblPrimero);
			this->Controls->Add(this->lblTimer);
			this->Controls->Add(this->btnCheck);
			this->Controls->Add(this->txt46);
			this->Controls->Add(this->txt45);
			this->Controls->Add(this->txt44);
			this->Controls->Add(this->txt43);
			this->Controls->Add(this->txt42);
			this->Controls->Add(this->txt41);
			this->Controls->Add(this->txt38);
			this->Controls->Add(this->txt39);
			this->Controls->Add(this->txt40);
			this->Controls->Add(this->txt37);
			this->Controls->Add(this->txt36);
			this->Controls->Add(this->txt34);
			this->Controls->Add(this->txt35);
			this->Controls->Add(this->txt33);
			this->Controls->Add(this->txt31);
			this->Controls->Add(this->txt32);
			this->Controls->Add(this->txt30);
			this->Controls->Add(this->txt29);
			this->Controls->Add(this->txt28);
			this->Controls->Add(this->txt27);
			this->Controls->Add(this->txt26);
			this->Controls->Add(this->txt25);
			this->Controls->Add(this->txt24);
			this->Controls->Add(this->txt23);
			this->Controls->Add(this->txt22);
			this->Controls->Add(this->txt21);
			this->Controls->Add(this->txt19);
			this->Controls->Add(this->txt20);
			this->Controls->Add(this->txt18);
			this->Controls->Add(this->txt17);
			this->Controls->Add(this->txt16);
			this->Controls->Add(this->txt15);
			this->Controls->Add(this->txt10);
			this->Controls->Add(this->txt11);
			this->Controls->Add(this->txt12);
			this->Controls->Add(this->txt13);
			this->Controls->Add(this->txt14);
			this->Controls->Add(this->txt9);
			this->Controls->Add(this->txt8);
			this->Controls->Add(this->txt7);
			this->Controls->Add(this->txt6);
			this->Controls->Add(this->txt5);
			this->Controls->Add(this->txt4);
			this->Controls->Add(this->txt3);
			this->Controls->Add(this->txt2);
			this->Controls->Add(this->txt1);
			this->Name = L"game";
			this->Text = L"Valorant - Crucigrama";
			this->Load += gcnew System::EventHandler(this, &game::game_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void game_Load(System::Object^  sender, System::EventArgs^  e) {
		
	}
			 //void test();
			 void check();
			 void iniciar();
			 void reiniciar();
			 void revelarResultados();
	
	
private: System::Void btnCheck_Click(System::Object^  sender, System::EventArgs^  e) {
	check();
	
	
}
		 int timer;
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	timer++;
	lblTimer->Text = timer+" segundos";
	
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	revelarResultados();
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label13_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label22_Click(System::Object^  sender, System::EventArgs^  e) {
}
};



}
