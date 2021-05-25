#pragma once

namespace snakewinform {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void);
		

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
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
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ GameData;
	private: System::Windows::Forms::Label^ Score;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ SnakeSpeed;
	private: System::Windows::Forms::GroupBox^ GameSettings;
	private: System::Windows::Forms::Button^ Applay;


	private: System::Windows::Forms::PictureBox^ Topbound;
	private: System::Windows::Forms::PictureBox^ Bottombound;
	private: System::Windows::Forms::PictureBox^ Rightbound;

	private: System::Windows::Forms::PictureBox^ Leftbound;




	private: System::Windows::Forms::Timer^ timer;

	private: System::Windows::Forms::Label^ Game_over;
	private: System::Windows::Forms::Label^ Fruitcoord;
	private: System::Windows::Forms::Label^ Snakecoord;


	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->GameData = (gcnew System::Windows::Forms::GroupBox());
			this->Score = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SnakeSpeed = (gcnew System::Windows::Forms::NumericUpDown());
			this->GameSettings = (gcnew System::Windows::Forms::GroupBox());
			this->Applay = (gcnew System::Windows::Forms::Button());
			this->Topbound = (gcnew System::Windows::Forms::PictureBox());
			this->Bottombound = (gcnew System::Windows::Forms::PictureBox());
			this->Rightbound = (gcnew System::Windows::Forms::PictureBox());
			this->Leftbound = (gcnew System::Windows::Forms::PictureBox());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->Game_over = (gcnew System::Windows::Forms::Label());
			this->Fruitcoord = (gcnew System::Windows::Forms::Label());
			this->Snakecoord = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->GameData->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SnakeSpeed))->BeginInit();
			this->GameSettings->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Topbound))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bottombound))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Rightbound))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Leftbound))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->����ToolStripMenuItem,
					this->����������������ToolStripMenuItem, this->�����ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(493, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->���������ToolStripMenuItem,
					this->���������������ToolStripMenuItem, this->���������ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->���������ToolStripMenuItem->Text = L"����� ����";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::���������ToolStripMenuItem_Click);
			// 
			// ���������������ToolStripMenuItem
			// 
			this->���������������ToolStripMenuItem->Name = L"���������������ToolStripMenuItem";
			this->���������������ToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->���������������ToolStripMenuItem->Text = L"�����/����������";
			this->���������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::���������������ToolStripMenuItem_Click);
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->���������ToolStripMenuItem->Text = L"���������";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::���������ToolStripMenuItem_Click);
			// 
			// ����������������ToolStripMenuItem
			// 
			this->����������������ToolStripMenuItem->Name = L"����������������ToolStripMenuItem";
			this->����������������ToolStripMenuItem->Size = System::Drawing::Size(138, 20);
			this->����������������ToolStripMenuItem->Text = L"���������� �� ����";
			this->����������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����������������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem_Click);
			// 
			// GameData
			// 
			this->GameData->Controls->Add(this->Score);
			this->GameData->Location = System::Drawing::Point(9, 25);
			this->GameData->Margin = System::Windows::Forms::Padding(2);
			this->GameData->Name = L"GameData";
			this->GameData->Padding = System::Windows::Forms::Padding(2);
			this->GameData->Size = System::Drawing::Size(135, 49);
			this->GameData->TabIndex = 1;
			this->GameData->TabStop = false;
			this->GameData->Text = L"������ ����";
			// 
			// Score
			// 
			this->Score->AutoSize = true;
			this->Score->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Score->Location = System::Drawing::Point(5, 18);
			this->Score->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Score->Name = L"Score";
			this->Score->Size = System::Drawing::Size(72, 24);
			this->Score->TabIndex = 0;
			this->Score->Text = L"����: 0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(14, 41);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(166, 24);
			this->label2->TabIndex = 0;
			this->label2->Text = L"������� ��������";
			// 
			// SnakeSpeed
			// 
			this->SnakeSpeed->Location = System::Drawing::Point(184, 46);
			this->SnakeSpeed->Margin = System::Windows::Forms::Padding(2);
			this->SnakeSpeed->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->SnakeSpeed->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->SnakeSpeed->Name = L"SnakeSpeed";
			this->SnakeSpeed->Size = System::Drawing::Size(90, 20);
			this->SnakeSpeed->TabIndex = 1;
			this->SnakeSpeed->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// GameSettings
			// 
			this->GameSettings->Controls->Add(this->Applay);
			this->GameSettings->Controls->Add(this->SnakeSpeed);
			this->GameSettings->Controls->Add(this->label2);
			this->GameSettings->Location = System::Drawing::Point(88, 206);
			this->GameSettings->Margin = System::Windows::Forms::Padding(2);
			this->GameSettings->Name = L"GameSettings";
			this->GameSettings->Padding = System::Windows::Forms::Padding(2);
			this->GameSettings->Size = System::Drawing::Size(291, 137);
			this->GameSettings->TabIndex = 2;
			this->GameSettings->TabStop = false;
			this->GameSettings->Text = L"���������";
			this->GameSettings->Visible = false;
			// 
			// Applay
			// 
			this->Applay->Location = System::Drawing::Point(109, 87);
			this->Applay->Margin = System::Windows::Forms::Padding(2);
			this->Applay->Name = L"Applay";
			this->Applay->Size = System::Drawing::Size(71, 32);
			this->Applay->TabIndex = 2;
			this->Applay->Text = L"���������";
			this->Applay->UseVisualStyleBackColor = true;
			this->Applay->Click += gcnew System::EventHandler(this, &MyForm::Applay_Click);
			// 
			// Topbound
			// 
			this->Topbound->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Topbound->Location = System::Drawing::Point(0, 79);
			this->Topbound->Margin = System::Windows::Forms::Padding(2);
			this->Topbound->Name = L"Topbound";
			this->Topbound->Size = System::Drawing::Size(493, 4);
			this->Topbound->TabIndex = 3;
			this->Topbound->TabStop = false;
			// 
			// Bottombound
			// 
			this->Bottombound->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Bottombound->Location = System::Drawing::Point(0, 490);
			this->Bottombound->Margin = System::Windows::Forms::Padding(2);
			this->Bottombound->Name = L"Bottombound";
			this->Bottombound->Size = System::Drawing::Size(493, 4);
			this->Bottombound->TabIndex = 4;
			this->Bottombound->TabStop = false;
			// 
			// Rightbound
			// 
			this->Rightbound->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Rightbound->Location = System::Drawing::Point(489, 80);
			this->Rightbound->Margin = System::Windows::Forms::Padding(2);
			this->Rightbound->Name = L"Rightbound";
			this->Rightbound->Size = System::Drawing::Size(4, 414);
			this->Rightbound->TabIndex = 5;
			this->Rightbound->TabStop = false;
			// 
			// Leftbound
			// 
			this->Leftbound->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Leftbound->Location = System::Drawing::Point(0, 80);
			this->Leftbound->Margin = System::Windows::Forms::Padding(2);
			this->Leftbound->Name = L"Leftbound";
			this->Leftbound->Size = System::Drawing::Size(4, 414);
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
			this->Game_over->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Game_over->Location = System::Drawing::Point(80, 130);
			this->Game_over->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Game_over->Name = L"Game_over";
			this->Game_over->Size = System::Drawing::Size(302, 50);
			this->Game_over->TabIndex = 7;
			this->Game_over->Text = L"GAME OVER";
			this->Game_over->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Game_over->Visible = false;
			// 
			// Fruitcoord
			// 
			this->Fruitcoord->AutoSize = true;
			this->Fruitcoord->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Fruitcoord->Location = System::Drawing::Point(171, 25);
			this->Fruitcoord->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Fruitcoord->Name = L"Fruitcoord";
			this->Fruitcoord->Size = System::Drawing::Size(209, 21);
			this->Fruitcoord->TabIndex = 8;
			this->Fruitcoord->Text = L"���������� ������ : (x, y)";
			// 
			// Snakecoord
			// 
			this->Snakecoord->AutoSize = true;
			this->Snakecoord->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Snakecoord->Location = System::Drawing::Point(171, 54);
			this->Snakecoord->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Snakecoord->Name = L"Snakecoord";
			this->Snakecoord->Size = System::Drawing::Size(204, 21);
			this->Snakecoord->TabIndex = 9;
			this->Snakecoord->Text = L"���������� ������: (x, y)";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(493, 494);
			this->Controls->Add(this->Snakecoord);
			this->Controls->Add(this->Fruitcoord);
			this->Controls->Add(this->Game_over);
			this->Controls->Add(this->Leftbound);
			this->Controls->Add(this->Rightbound);
			this->Controls->Add(this->Bottombound);
			this->Controls->Add(this->Topbound);
			this->Controls->Add(this->GameSettings);
			this->Controls->Add(this->GameData);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Snake";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->GameData->ResumeLayout(false);
			this->GameData->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SnakeSpeed))->EndInit();
			this->GameSettings->ResumeLayout(false);
			this->GameSettings->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Topbound))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bottombound))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Rightbound))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Leftbound))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//������ �� ����
	private: PictureBox^ fruit;//�����
	private: array<PictureBox^>^ snake;//����
	private: bool play;//����
	private: bool die;//������
	private: bool firstLaunch;//������ ������
	private: int step = 10;//���
	private: float updateInterval = 100;//��������� ����������
	private: int score = 0;//���� 
		   private: int some = 0;

	//������ ����
	private: void GeneratePositionFruit();
	private: void Eating();
	private: void Movement();
	private: void EatYourself();
	private: void GameOver();
	private: void NewGame();
	private: void CheckBorders();

	//����������� ������� ������ �� �����
private: System::Void ���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ���������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Applay_Click(System::Object^ sender, System::EventArgs^ e);

	//������� �������
private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);

	//���������� ����
private: void GameForm_Update(Object^ obgect, EventArgs^ e);
};
}
