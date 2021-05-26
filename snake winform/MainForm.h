#pragma once

namespace snakewinform {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ MainFormNewGameButton;
	protected:
	private: System::Windows::Forms::Button^ MainFormExitButton;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->MainFormNewGameButton = (gcnew System::Windows::Forms::Button());
			this->MainFormExitButton = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// MainFormNewGameButton
			// 
			this->MainFormNewGameButton->BackColor = System::Drawing::Color::Black;
			this->MainFormNewGameButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->MainFormNewGameButton->FlatAppearance->BorderSize = 0;
			this->MainFormNewGameButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->MainFormNewGameButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->MainFormNewGameButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->MainFormNewGameButton->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MainFormNewGameButton->ForeColor = System::Drawing::Color::White;
			this->MainFormNewGameButton->Location = System::Drawing::Point(12, 408);
			this->MainFormNewGameButton->Name = L"MainFormNewGameButton";
			this->MainFormNewGameButton->Size = System::Drawing::Size(158, 58);
			this->MainFormNewGameButton->TabIndex = 0;
			this->MainFormNewGameButton->Text = L"Новая игра";
			this->MainFormNewGameButton->UseVisualStyleBackColor = false;
			this->MainFormNewGameButton->Click += gcnew System::EventHandler(this, &MainForm::MainFormNewGameButton_Click);
			// 
			// MainFormExitButton
			// 
			this->MainFormExitButton->BackColor = System::Drawing::Color::Black;
			this->MainFormExitButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->MainFormExitButton->FlatAppearance->BorderSize = 0;
			this->MainFormExitButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->MainFormExitButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->MainFormExitButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->MainFormExitButton->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MainFormExitButton->ForeColor = System::Drawing::Color::White;
			this->MainFormExitButton->Location = System::Drawing::Point(219, 408);
			this->MainFormExitButton->Name = L"MainFormExitButton";
			this->MainFormExitButton->Size = System::Drawing::Size(158, 58);
			this->MainFormExitButton->TabIndex = 1;
			this->MainFormExitButton->Text = L"Выход";
			this->MainFormExitButton->UseVisualStyleBackColor = false;
			this->MainFormExitButton->Click += gcnew System::EventHandler(this, &MainForm::MainFormExitButton_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-1, -6);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(391, 487);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(389, 478);
			this->Controls->Add(this->MainFormNewGameButton);
			this->Controls->Add(this->MainFormExitButton);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Snake";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void MainFormNewGameButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void MainFormExitButton_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
