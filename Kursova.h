#pragma once
#include "SongManager.h"
namespace KursovaOOP {

	//class SongManager;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Kursova
	/// </summary>
	public ref class Kursova : public System::Windows::Forms::Form
	{
	public:
		//SongManager* songManager;

		Kursova(void)
		{
			InitializeComponent();
			//songManager = new SongManager();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Kursova()
		{
			//delete songManager;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ gbMenu;
	protected:
	private: System::Windows::Forms::GroupBox^ gbIterface;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ tsFile;


	private: System::Windows::Forms::ToolStripMenuItem^ msbFileIn;
	private: System::Windows::Forms::ToolStripTextBox^ mstbFileNameIn;

	private: System::Windows::Forms::ToolStripMenuItem^ msbFileOut;
	private: System::Windows::Forms::ToolStripTextBox^ mstbFileNameOut;






	private: System::Windows::Forms::ToolStripTextBox^ mstbFileNameInOut;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;










	private: System::Windows::Forms::ToolStripMenuItem^ сортуванняToolStripMenuItem;





	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;





	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripComboBox2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ToolStripMenuItem^ вибірToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ виконавToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ назваToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ альбомToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ рікToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ форматToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ розмірToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ зарубіжнаToolStripMenuItem;






















	protected:



	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->gbMenu = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->gbIterface = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->tsFile = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->msbFileIn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mstbFileNameIn = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->msbFileOut = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mstbFileNameOut = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->mstbFileNameInOut = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->сортуванняToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->виконавToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->назваToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->альбомToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->рікToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->форматToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->розмірToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->зарубіжнаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripComboBox2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вибірToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gbMenu->SuspendLayout();
			this->gbIterface->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// gbMenu
			// 
			this->gbMenu->Controls->Add(this->button1);
			this->gbMenu->Controls->Add(this->textBox1);
			this->gbMenu->Dock = System::Windows::Forms::DockStyle::Top;
			this->gbMenu->Location = System::Drawing::Point(3, 18);
			this->gbMenu->Name = L"gbMenu";
			this->gbMenu->Size = System::Drawing::Size(543, 77);
			this->gbMenu->TabIndex = 0;
			this->gbMenu->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(9, 30);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(68, 34);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Пошук";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(92, 30);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(486, 34);
			this->textBox1->TabIndex = 0;
			// 
			// gbIterface
			// 
			this->gbIterface->Controls->Add(this->tableLayoutPanel1);
			this->gbIterface->Controls->Add(this->gbMenu);
			this->gbIterface->Dock = System::Windows::Forms::DockStyle::Fill;
			this->gbIterface->Location = System::Drawing::Point(0, 0);
			this->gbIterface->Name = L"gbIterface";
			this->gbIterface->Size = System::Drawing::Size(549, 542);
			this->gbIterface->TabIndex = 0;
			this->gbIterface->TabStop = false;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 8;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label8, 7, 0);
			this->tableLayoutPanel1->Controls->Add(this->label2, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label7, 6, 0);
			this->tableLayoutPanel1->Controls->Add(this->label3, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->label6, 5, 0);
			this->tableLayoutPanel1->Controls->Add(this->label4, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->label5, 4, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 95);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->Size = System::Drawing::Size(543, 444);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"№";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(400, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(76, 16);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Зарубіжна";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(30, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Виконавець\\і";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(342, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Розмір";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(129, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Назва";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(278, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(58, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Формат";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(184, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Альбом";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(246, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(26, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Рік";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->tsFile, this->сортуванняToolStripMenuItem,
					this->toolStripComboBox2, this->вибірToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(549, 28);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// tsFile
			// 
			this->tsFile->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->msbFileIn, this->msbFileOut,
					this->mstbFileNameInOut
			});
			this->tsFile->Name = L"tsFile";
			this->tsFile->Size = System::Drawing::Size(59, 24);
			this->tsFile->Text = L"Файл";
			// 
			// msbFileIn
			// 
			this->msbFileIn->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->mstbFileNameIn });
			this->msbFileIn->Name = L"msbFileIn";
			this->msbFileIn->Size = System::Drawing::Size(224, 26);
			this->msbFileIn->Text = L"Ввід у файл";
			this->msbFileIn->Click += gcnew System::EventHandler(this, &Kursova::msbFileIn_Click);
			// 
			// mstbFileNameIn
			// 
			this->mstbFileNameIn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->mstbFileNameIn->Name = L"mstbFileNameIn";
			this->mstbFileNameIn->Size = System::Drawing::Size(100, 27);
			// 
			// msbFileOut
			// 
			this->msbFileOut->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->mstbFileNameOut });
			this->msbFileOut->Name = L"msbFileOut";
			this->msbFileOut->Size = System::Drawing::Size(224, 26);
			this->msbFileOut->Text = L"Вивід з файлу";
			this->msbFileOut->Click += gcnew System::EventHandler(this, &Kursova::msbFileOut_Click);
			// 
			// mstbFileNameOut
			// 
			this->mstbFileNameOut->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->mstbFileNameOut->Name = L"mstbFileNameOut";
			this->mstbFileNameOut->Size = System::Drawing::Size(100, 27);
			// 
			// mstbFileNameInOut
			// 
			this->mstbFileNameInOut->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->mstbFileNameInOut->Name = L"mstbFileNameInOut";
			this->mstbFileNameInOut->Size = System::Drawing::Size(100, 27);
			// 
			// сортуванняToolStripMenuItem
			// 
			this->сортуванняToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->toolStripMenuItem1,
					this->виконавToolStripMenuItem, this->назваToolStripMenuItem, this->альбомToolStripMenuItem, this->рікToolStripMenuItem, this->форматToolStripMenuItem,
					this->розмірToolStripMenuItem, this->зарубіжнаToolStripMenuItem
			});
			this->сортуванняToolStripMenuItem->Name = L"сортуванняToolStripMenuItem";
			this->сортуванняToolStripMenuItem->Size = System::Drawing::Size(105, 24);
			this->сортуванняToolStripMenuItem->Text = L"Сортування";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(186, 26);
			this->toolStripMenuItem1->Text = L"№";
			// 
			// виконавToolStripMenuItem
			// 
			this->виконавToolStripMenuItem->Name = L"виконавToolStripMenuItem";
			this->виконавToolStripMenuItem->Size = System::Drawing::Size(186, 26);
			this->виконавToolStripMenuItem->Text = L"Виконавець\\і";
			// 
			// назваToolStripMenuItem
			// 
			this->назваToolStripMenuItem->Name = L"назваToolStripMenuItem";
			this->назваToolStripMenuItem->Size = System::Drawing::Size(186, 26);
			this->назваToolStripMenuItem->Text = L"Назва";
			// 
			// альбомToolStripMenuItem
			// 
			this->альбомToolStripMenuItem->Name = L"альбомToolStripMenuItem";
			this->альбомToolStripMenuItem->Size = System::Drawing::Size(186, 26);
			this->альбомToolStripMenuItem->Text = L"Альбом";
			// 
			// рікToolStripMenuItem
			// 
			this->рікToolStripMenuItem->Name = L"рікToolStripMenuItem";
			this->рікToolStripMenuItem->Size = System::Drawing::Size(186, 26);
			this->рікToolStripMenuItem->Text = L"Рік";
			// 
			// форматToolStripMenuItem
			// 
			this->форматToolStripMenuItem->Name = L"форматToolStripMenuItem";
			this->форматToolStripMenuItem->Size = System::Drawing::Size(186, 26);
			this->форматToolStripMenuItem->Text = L"Формат";
			// 
			// розмірToolStripMenuItem
			// 
			this->розмірToolStripMenuItem->Name = L"розмірToolStripMenuItem";
			this->розмірToolStripMenuItem->Size = System::Drawing::Size(186, 26);
			this->розмірToolStripMenuItem->Text = L"Розмір";
			// 
			// зарубіжнаToolStripMenuItem
			// 
			this->зарубіжнаToolStripMenuItem->Name = L"зарубіжнаToolStripMenuItem";
			this->зарубіжнаToolStripMenuItem->Size = System::Drawing::Size(186, 26);
			this->зарубіжнаToolStripMenuItem->Text = L"Зарубіжна";
			// 
			// toolStripComboBox2
			// 
			this->toolStripComboBox2->Name = L"toolStripComboBox2";
			this->toolStripComboBox2->Size = System::Drawing::Size(14, 24);
			// 
			// вибірToolStripMenuItem
			// 
			this->вибірToolStripMenuItem->Name = L"вибірToolStripMenuItem";
			this->вибірToolStripMenuItem->Size = System::Drawing::Size(63, 24);
			this->вибірToolStripMenuItem->Text = L"Вибір";
			// 
			// Kursova
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(549, 542);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->gbIterface);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Kursova";
			this->Text = L"Kursova";
			this->gbMenu->ResumeLayout(false);
			this->gbMenu->PerformLayout();
			this->gbIterface->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void msbFileOut_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void msbFileIn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void UpdateTable();
};
}
