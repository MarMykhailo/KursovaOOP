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
		SongManager* songManager;
		Kursova(void)
		{
			InitializeComponent();
			songManager = new SongManager();
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
	private: System::Windows::Forms::TextBox^ tbSearch;

















	private: System::Windows::Forms::Button^ bSearch;


















	private: System::Windows::Forms::Label^ lNumber;
	private: System::Windows::Forms::Label^ lName;
	private: System::Windows::Forms::Label^ lAlbom;
	private: System::Windows::Forms::Label^ lYear;
	private: System::Windows::Forms::Label^ lFormat;
	private: System::Windows::Forms::Label^ lSize;
	private: System::Windows::Forms::Label^ lIsImport;














	private: System::Windows::Forms::TableLayoutPanel^ tlpTable;
	private: System::Windows::Forms::Label^ lSonger;











	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ msSort;
	private: System::Windows::Forms::ToolStripMenuItem^ tsmiSNumber;
private: System::Windows::Forms::ToolStripMenuItem^ tsmiSSonger;
private: System::Windows::Forms::ToolStripMenuItem^ tsmiSName;
private: System::Windows::Forms::ToolStripMenuItem^ tsmiSAlbom;
private: System::Windows::Forms::ToolStripMenuItem^ tsmiSYear;
private: System::Windows::Forms::ToolStripMenuItem^ tsmiSFormat;
private: System::Windows::Forms::ToolStripMenuItem^ tsmiSSize;
private: System::Windows::Forms::ToolStripMenuItem^ tsmiSImport;

















private: System::Windows::Forms::ToolStripMenuItem^ msSelekt;

private: System::Windows::Forms::ToolStripMenuItem^ msFile;
private: System::Windows::Forms::ToolStripMenuItem^ msbFileIn;
private: System::Windows::Forms::ToolStripMenuItem^ msbFileOut;

private: System::Windows::Forms::ToolStripTextBox^ mstbFileNameInOut;

private: System::Windows::Forms::ToolStripTextBox^ mstbNameFileIn;
private: System::Windows::Forms::ToolStripTextBox^ mstbNameFileOut;


























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
			this->bSearch = (gcnew System::Windows::Forms::Button());
			this->tbSearch = (gcnew System::Windows::Forms::TextBox());
			this->gbIterface = (gcnew System::Windows::Forms::GroupBox());
			this->tlpTable = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->lNumber = (gcnew System::Windows::Forms::Label());
			this->lIsImport = (gcnew System::Windows::Forms::Label());
			this->lSonger = (gcnew System::Windows::Forms::Label());
			this->lSize = (gcnew System::Windows::Forms::Label());
			this->lName = (gcnew System::Windows::Forms::Label());
			this->lFormat = (gcnew System::Windows::Forms::Label());
			this->lAlbom = (gcnew System::Windows::Forms::Label());
			this->lYear = (gcnew System::Windows::Forms::Label());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->msFile = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->msbFileIn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mstbNameFileIn = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->msbFileOut = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mstbNameFileOut = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->mstbFileNameInOut = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->msSort = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiSNumber = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiSSonger = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiSName = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiSAlbom = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiSYear = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiSFormat = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiSSize = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiSImport = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->msSelekt = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gbMenu->SuspendLayout();
			this->gbIterface->SuspendLayout();
			this->tlpTable->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// gbMenu
			// 
			this->gbMenu->Controls->Add(this->bSearch);
			this->gbMenu->Controls->Add(this->tbSearch);
			this->gbMenu->Dock = System::Windows::Forms::DockStyle::Top;
			this->gbMenu->Location = System::Drawing::Point(3, 18);
			this->gbMenu->Name = L"gbMenu";
			this->gbMenu->Size = System::Drawing::Size(510, 77);
			this->gbMenu->TabIndex = 0;
			this->gbMenu->TabStop = false;
			// 
			// bSearch
			// 
			this->bSearch->Location = System::Drawing::Point(9, 30);
			this->bSearch->Name = L"bSearch";
			this->bSearch->Size = System::Drawing::Size(68, 34);
			this->bSearch->TabIndex = 1;
			this->bSearch->Text = L"Пошук";
			this->bSearch->UseVisualStyleBackColor = true;
			// 
			// tbSearch
			// 
			this->tbSearch->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbSearch->Location = System::Drawing::Point(92, 30);
			this->tbSearch->Multiline = true;
			this->tbSearch->Name = L"tbSearch";
			this->tbSearch->Size = System::Drawing::Size(361, 34);
			this->tbSearch->TabIndex = 0;
			// 
			// gbIterface
			// 
			this->gbIterface->Controls->Add(this->tlpTable);
			this->gbIterface->Controls->Add(this->gbMenu);
			this->gbIterface->Dock = System::Windows::Forms::DockStyle::Fill;
			this->gbIterface->Location = System::Drawing::Point(0, 0);
			this->gbIterface->Name = L"gbIterface";
			this->gbIterface->Size = System::Drawing::Size(516, 542);
			this->gbIterface->TabIndex = 0;
			this->gbIterface->TabStop = false;
			// 
			// tlpTable
			// 
			this->tlpTable->AutoScroll = true;
			this->tlpTable->BackColor = System::Drawing::SystemColors::ControlLight;
			this->tlpTable->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tlpTable->ColumnCount = 8;
			this->tlpTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tlpTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tlpTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tlpTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tlpTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tlpTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tlpTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tlpTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tlpTable->Controls->Add(this->lNumber, 0, 0);
			this->tlpTable->Controls->Add(this->lIsImport, 7, 0);
			this->tlpTable->Controls->Add(this->lSonger, 1, 0);
			this->tlpTable->Controls->Add(this->lSize, 6, 0);
			this->tlpTable->Controls->Add(this->lName, 2, 0);
			this->tlpTable->Controls->Add(this->lFormat, 5, 0);
			this->tlpTable->Controls->Add(this->lAlbom, 3, 0);
			this->tlpTable->Controls->Add(this->lYear, 4, 0);
			this->tlpTable->Location = System::Drawing::Point(3, 95);
			this->tlpTable->Name = L"tlpTable";
			this->tlpTable->RowCount = 2;
			this->tlpTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tlpTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tlpTable->Size = System::Drawing::Size(507, 444);
			this->tlpTable->TabIndex = 1;
			// 
			// lNumber
			// 
			this->lNumber->AutoSize = true;
			this->lNumber->Location = System::Drawing::Point(4, 1);
			this->lNumber->Name = L"lNumber";
			this->lNumber->Size = System::Drawing::Size(21, 16);
			this->lNumber->TabIndex = 0;
			this->lNumber->Text = L"№";
			// 
			// lIsImport
			// 
			this->lIsImport->AutoSize = true;
			this->lIsImport->Location = System::Drawing::Point(408, 1);
			this->lIsImport->Name = L"lIsImport";
			this->lIsImport->Size = System::Drawing::Size(76, 16);
			this->lIsImport->TabIndex = 7;
			this->lIsImport->Text = L"Зарубіжна";
			// 
			// lSonger
			// 
			this->lSonger->AutoSize = true;
			this->lSonger->Location = System::Drawing::Point(32, 1);
			this->lSonger->Name = L"lSonger";
			this->lSonger->Size = System::Drawing::Size(93, 16);
			this->lSonger->TabIndex = 1;
			this->lSonger->Text = L"Виконавець\\і";
			// 
			// lSize
			// 
			this->lSize->AutoSize = true;
			this->lSize->Location = System::Drawing::Point(349, 1);
			this->lSize->Name = L"lSize";
			this->lSize->Size = System::Drawing::Size(52, 16);
			this->lSize->TabIndex = 6;
			this->lSize->Text = L"Розмір";
			// 
			// lName
			// 
			this->lName->AutoSize = true;
			this->lName->Location = System::Drawing::Point(132, 1);
			this->lName->Name = L"lName";
			this->lName->Size = System::Drawing::Size(49, 16);
			this->lName->TabIndex = 2;
			this->lName->Text = L"Назва";
			// 
			// lFormat
			// 
			this->lFormat->AutoSize = true;
			this->lFormat->Location = System::Drawing::Point(284, 1);
			this->lFormat->Name = L"lFormat";
			this->lFormat->Size = System::Drawing::Size(58, 16);
			this->lFormat->TabIndex = 5;
			this->lFormat->Text = L"Формат";
			// 
			// lAlbom
			// 
			this->lAlbom->AutoSize = true;
			this->lAlbom->Location = System::Drawing::Point(188, 1);
			this->lAlbom->Name = L"lAlbom";
			this->lAlbom->Size = System::Drawing::Size(56, 16);
			this->lAlbom->TabIndex = 3;
			this->lAlbom->Text = L"Альбом";
			// 
			// lYear
			// 
			this->lYear->AutoSize = true;
			this->lYear->Location = System::Drawing::Point(251, 1);
			this->lYear->Name = L"lYear";
			this->lYear->Size = System::Drawing::Size(26, 16);
			this->lYear->TabIndex = 4;
			this->lYear->Text = L"Рік";
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->msFile, this->msSort,
					this->msSelekt
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(516, 25);
			this->toolStrip1->TabIndex = 2;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// msFile
			// 
			this->msFile->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->msbFileIn, this->msbFileOut,
					this->mstbFileNameInOut
			});
			this->msFile->Name = L"msFile";
			this->msFile->Size = System::Drawing::Size(59, 25);
			this->msFile->Text = L"Файл";
			// 
			// msbFileIn
			// 
			this->msbFileIn->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->mstbNameFileIn });
			this->msbFileIn->Name = L"msbFileIn";
			this->msbFileIn->Size = System::Drawing::Size(188, 26);
			this->msbFileIn->Text = L"Вивід з файла";
			this->msbFileIn->Click += gcnew System::EventHandler(this, &Kursova::msbFileIn_Click);
			// 
			// mstbNameFileIn
			// 
			this->mstbNameFileIn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->mstbNameFileIn->Name = L"mstbNameFileIn";
			this->mstbNameFileIn->Size = System::Drawing::Size(100, 27);
			// 
			// msbFileOut
			// 
			this->msbFileOut->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->mstbNameFileOut });
			this->msbFileOut->Name = L"msbFileOut";
			this->msbFileOut->Size = System::Drawing::Size(188, 26);
			this->msbFileOut->Text = L"Ввід у файл";
			this->msbFileOut->Click += gcnew System::EventHandler(this, &Kursova::msbFileOut_Click);
			// 
			// mstbNameFileOut
			// 
			this->mstbNameFileOut->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->mstbNameFileOut->Name = L"mstbNameFileOut";
			this->mstbNameFileOut->Size = System::Drawing::Size(100, 27);
			// 
			// mstbFileNameInOut
			// 
			this->mstbFileNameInOut->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->mstbFileNameInOut->Name = L"mstbFileNameInOut";
			this->mstbFileNameInOut->Size = System::Drawing::Size(100, 27);
			// 
			// msSort
			// 
			this->msSort->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->tsmiSNumber,
					this->tsmiSSonger, this->tsmiSName, this->tsmiSAlbom, this->tsmiSYear, this->tsmiSFormat, this->tsmiSSize, this->tsmiSImport
			});
			this->msSort->Name = L"msSort";
			this->msSort->Size = System::Drawing::Size(105, 25);
			this->msSort->Text = L"Сортування";
			// 
			// tsmiSNumber
			// 
			this->tsmiSNumber->Name = L"tsmiSNumber";
			this->tsmiSNumber->Size = System::Drawing::Size(186, 26);
			this->tsmiSNumber->Text = L"№";
			// 
			// tsmiSSonger
			// 
			this->tsmiSSonger->Name = L"tsmiSSonger";
			this->tsmiSSonger->Size = System::Drawing::Size(186, 26);
			this->tsmiSSonger->Text = L"Виконавець\\і";
			this->tsmiSSonger->Click += gcnew System::EventHandler(this, &Kursova::tsmiSSonger_Click);
			// 
			// tsmiSName
			// 
			this->tsmiSName->Name = L"tsmiSName";
			this->tsmiSName->Size = System::Drawing::Size(186, 26);
			this->tsmiSName->Text = L"Назва";
			this->tsmiSName->Click += gcnew System::EventHandler(this, &Kursova::tsmiSName_Click);
			// 
			// tsmiSAlbom
			// 
			this->tsmiSAlbom->Name = L"tsmiSAlbom";
			this->tsmiSAlbom->Size = System::Drawing::Size(186, 26);
			this->tsmiSAlbom->Text = L"Альбом";
			this->tsmiSAlbom->Click += gcnew System::EventHandler(this, &Kursova::tsmiSAlbom_Click);
			// 
			// tsmiSYear
			// 
			this->tsmiSYear->Name = L"tsmiSYear";
			this->tsmiSYear->Size = System::Drawing::Size(186, 26);
			this->tsmiSYear->Text = L"Рік";
			this->tsmiSYear->Click += gcnew System::EventHandler(this, &Kursova::tsmiSYear_Click);
			// 
			// tsmiSFormat
			// 
			this->tsmiSFormat->Name = L"tsmiSFormat";
			this->tsmiSFormat->Size = System::Drawing::Size(186, 26);
			this->tsmiSFormat->Text = L"Формат";
			this->tsmiSFormat->Click += gcnew System::EventHandler(this, &Kursova::tsmiSFormat_Click);
			// 
			// tsmiSSize
			// 
			this->tsmiSSize->Name = L"tsmiSSize";
			this->tsmiSSize->Size = System::Drawing::Size(186, 26);
			this->tsmiSSize->Text = L"Розмір";
			this->tsmiSSize->Click += gcnew System::EventHandler(this, &Kursova::tsmiSSize_Click);
			// 
			// tsmiSImport
			// 
			this->tsmiSImport->Name = L"tsmiSImport";
			this->tsmiSImport->Size = System::Drawing::Size(186, 26);
			this->tsmiSImport->Text = L"Зарубіжна";
			this->tsmiSImport->Click += gcnew System::EventHandler(this, &Kursova::tsmiSImport_Click);
			// 
			// msSelekt
			// 
			this->msSelekt->Name = L"msSelekt";
			this->msSelekt->Size = System::Drawing::Size(63, 25);
			this->msSelekt->Text = L"Вибір";
			// 
			// Kursova
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(516, 542);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->gbIterface);
			this->Name = L"Kursova";
			this->Text = L"Kursova";
			this->gbMenu->ResumeLayout(false);
			this->gbMenu->PerformLayout();
			this->gbIterface->ResumeLayout(false);
			this->tlpTable->ResumeLayout(false);
			this->tlpTable->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void msbFileOut_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void msbFileIn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void UpdateTable();
private: System::Void tsmiSSonger_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void tsmiSName_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void tsmiSAlbom_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void tsmiSYear_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void tsmiSFormat_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void tsmiSSize_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void tsmiSImport_Click(System::Object^ sender, System::EventArgs^ e);
};
}
