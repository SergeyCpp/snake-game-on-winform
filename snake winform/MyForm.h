#pragma once

namespace snakewinform {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;
	using namespace System::IO;


	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void);
		

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ìåíşToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ íîâàÿÈãğàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïàóçàÏğîäîëæèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ èíôîğìàöèÿÎáÈãğåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;

	private: System::Windows::Forms::Label^ Score;
	private: System::Windows::Forms::PictureBox^ Topbound;
	private: System::Windows::Forms::PictureBox^ Bottombound;
	private: System::Windows::Forms::PictureBox^ Rightbound;
	private: System::Windows::Forms::PictureBox^ Leftbound;
	private: System::Windows::Forms::Timer^ timer;
	private: System::Windows::Forms::Label^ Game_over;
	private: System::Windows::Forms::Button^ MyFormMainFormMenu;



	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ìåíşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íîâàÿÈãğàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïàóçàÏğîäîëæèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èíôîğìàöèÿÎáÈãğåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Score = (gcnew System::Windows::Forms::Label());
			this->Topbound = (gcnew System::Windows::Forms::PictureBox());
			this->Bottombound = (gcnew System::Windows::Forms::PictureBox());
			this->Rightbound = (gcnew System::Windows::Forms::PictureBox());
			this->Leftbound = (gcnew System::Windows::Forms::PictureBox());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->Game_over = (gcnew System::Windows::Forms::Label());
			this->MyFormMainFormMenu = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Topbound))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bottombound))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Rightbound))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Leftbound))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ìåíşToolStripMenuItem,
					this->èíôîğìàöèÿÎáÈãğåToolStripMenuItem, this->âûõîäToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(657, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ìåíşToolStripMenuItem
			// 
			this->ìåíşToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->íîâàÿÈãğàToolStripMenuItem,
					this->ïàóçàÏğîäîëæèòüToolStripMenuItem
			});
			this->ìåíşToolStripMenuItem->Name = L"ìåíşToolStripMenuItem";
			this->ìåíşToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->ìåíşToolStripMenuItem->Text = L"Ìåíş";
			// 
			// íîâàÿÈãğàToolStripMenuItem
			// 
			this->íîâàÿÈãğàToolStripMenuItem->Name = L"íîâàÿÈãğàToolStripMenuItem";
			this->íîâàÿÈãğàToolStripMenuItem->Size = System::Drawing::Size(227, 26);
			this->íîâàÿÈãğàToolStripMenuItem->Text = L"Íîâàÿ èãğà";
			this->íîâàÿÈãğàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::íîâàÿÈãğàToolStripMenuItem_Click);
			// 
			// ïàóçàÏğîäîëæèòüToolStripMenuItem
			// 
			this->ïàóçàÏğîäîëæèòüToolStripMenuItem->Name = L"ïàóçàÏğîäîëæèòüToolStripMenuItem";
			this->ïàóçàÏğîäîëæèòüToolStripMenuItem->Size = System::Drawing::Size(227, 26);
			this->ïàóçàÏğîäîëæèòüToolStripMenuItem->Text = L"Ïàóçà/Ïğîäîëæèòü";
			this->ïàóçàÏğîäîëæèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïàóçàÏğîäîëæèòüToolStripMenuItem_Click);
			// 
			// èíôîğìàöèÿÎáÈãğåToolStripMenuItem
			// 
			this->èíôîğìàöèÿÎáÈãğåToolStripMenuItem->Name = L"èíôîğìàöèÿÎáÈãğåToolStripMenuItem";
			this->èíôîğìàöèÿÎáÈãğåToolStripMenuItem->Size = System::Drawing::Size(174, 24);
			this->èíôîğìàöèÿÎáÈãğåToolStripMenuItem->Text = L"Èíôîğìàöèÿ îá èãğå";
			this->èíôîğìàöèÿÎáÈãğåToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::èíôîğìàöèÿÎáÈãğåToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âûõîäToolStripMenuItem_Click);
			// 
			// Score
			// 
			this->Score->AutoSize = true;
			this->Score->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Score->ForeColor = System::Drawing::Color::DimGray;
			this->Score->Location = System::Drawing::Point(290, 49);
			this->Score->Name = L"Score";
			this->Score->Size = System::Drawing::Size(95, 30);
			this->Score->TabIndex = 0;
			this->Score->Text = L"Ñ÷åò: 0";
			// 
			// Topbound
			// 
			this->Topbound->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Topbound->Location = System::Drawing::Point(0, 97);
			this->Topbound->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Topbound->Name = L"Topbound";
			this->Topbound->Size = System::Drawing::Size(657, 5);
			this->Topbound->TabIndex = 3;
			this->Topbound->TabStop = false;
			// 
			// Bottombound
			// 
			this->Bottombound->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Bottombound->Location = System::Drawing::Point(0, 603);
			this->Bottombound->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Bottombound->Name = L"Bottombound";
			this->Bottombound->Size = System::Drawing::Size(657, 5);
			this->Bottombound->TabIndex = 4;
			this->Bottombound->TabStop = false;
			// 
			// Rightbound
			// 
			this->Rightbound->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Rightbound->Location = System::Drawing::Point(652, 98);
			this->Rightbound->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Rightbound->Name = L"Rightbound";
			this->Rightbound->Size = System::Drawing::Size(5, 510);
			this->Rightbound->TabIndex = 5;
			this->Rightbound->TabStop = false;
			// 
			// Leftbound
			// 
			this->Leftbound->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Leftbound->Location = System::Drawing::Point(0, 98);
			this->Leftbound->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Leftbound->Name = L"Leftbound";
			this->Leftbound->Size = System::Drawing::Size(5, 510);
			this->Leftbound->TabIndex = 6;
			this->Leftbound->TabStop = false;
			// 
			// timer
			// 
			this->timer->Tick += gcnew System::EventHandler(this, &MyForm::GameForm_Update);
			// 
			// Game_over
			// 
			this->Game_over->AutoSize = true;
			this->Game_over->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Game_over->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Game_over->ForeColor = System::Drawing::Color::DimGray;
			this->Game_over->Location = System::Drawing::Point(142, 319);
			this->Game_over->Name = L"Game_over";
			this->Game_over->Size = System::Drawing::Size(378, 62);
			this->Game_over->TabIndex = 7;
			this->Game_over->Text = L"GAME OVER";
			this->Game_over->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Game_over->Visible = false;
			// 
			// MyFormMainFormMenu
			// 
			this->MyFormMainFormMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(78)));
			this->MyFormMainFormMenu->FlatAppearance->BorderSize = 0;
			this->MyFormMainFormMenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MyFormMainFormMenu->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MyFormMainFormMenu->ForeColor = System::Drawing::Color::DimGray;
			this->MyFormMainFormMenu->Location = System::Drawing::Point(153, 384);
			this->MyFormMainFormMenu->Name = L"MyFormMainFormMenu";
			this->MyFormMainFormMenu->Size = System::Drawing::Size(367, 74);
			this->MyFormMainFormMenu->TabIndex = 8;
			this->MyFormMainFormMenu->Text = L"Âûõîä â ìåíş";
			this->MyFormMainFormMenu->UseVisualStyleBackColor = false;
			this->MyFormMainFormMenu->Click += gcnew System::EventHandler(this, &MyForm::MyFormMainFormMenu_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(78)));
			this->ClientSize = System::Drawing::Size(657, 608);
			this->Controls->Add(this->Score);
			this->Controls->Add(this->MyFormMainFormMenu);
			this->Controls->Add(this->Game_over);
			this->Controls->Add(this->Leftbound);
			this->Controls->Add(this->Rightbound);
			this->Controls->Add(this->Bottombound);
			this->Controls->Add(this->Topbound);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Snake";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Topbound))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bottombound))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Rightbound))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Leftbound))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//äàííûå îá èãğå
	private: PictureBox^ fruit;//ôğóêò
	private: array<PictureBox^>^ snake;//ìàññèâ çìå¸
	private: Bitmap^ bit;
	private: bool play;//èãğà
	private: bool die;//ñìåğòü
	private: bool firstLaunch;//ïåğâûé çàïóñê
	private: int step = 10;//øàã ñåòêè
	private: float updateInterval = 80;//èíòåğâàë îáíîâëåíèÿ
	private: int score = 0;//ñ÷åò 

	//ìåòîäû èãğû
	private: void GeneratePositionFruit();
	private: void Eating();
	private: void Movement();
	private: void EatYourself();
	private: void GameOver();
	private: void NewGame();
	private: void CheckBorders();

	//îáğàáîò÷èêè íàæàòèÿ êíîïîê íà ôîğìå
private: System::Void íîâàÿÈãğàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ïàóçàÏğîäîëæèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void èíôîğìàöèÿÎáÈãğåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void MyFormMainFormMenu_Click(System::Object^ sender, System::EventArgs^ e);

	//íàæàòèå êëàâèøè
private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);

	//îáíîâëåíèå èãğû
private: void GameForm_Update(Object^ obgect, EventArgs^ e);

};
}
