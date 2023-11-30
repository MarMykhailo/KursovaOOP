#pragma once
#include "SongManager.h"
#include <msclr\marshal_cppstd.h>
#include <msclr/marshal.h>
#include <Windows.h> // Додайте це для використання SetWindowRgn

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
	private: System::Windows::Forms::ToolStripMenuItem^ tsmiSDuration;
	private: System::Windows::Forms::Label^ lDuration;

	private: System::Windows::Forms::ToolStripTextBox^ tstbDuration;
	private: System::Windows::Forms::ToolStripTextBox^ cmstbDuration;
	private: System::Windows::Forms::ToolStripMenuItem^ cmsClear;
	private: System::Windows::Forms::ToolStripMenuItem^ cmsEdit;
	private: System::Windows::Forms::ToolStripMenuItem^ tsddmSelect;
	private: System::Windows::Forms::ToolStripTextBox^ tsddmtbSelect;


	private: System::Windows::Forms::ToolStripTextBox^ tsddmtbSongers;
	private: System::Windows::Forms::ToolStripTextBox^ tsddmtbName;
	private: System::Windows::Forms::ToolStripTextBox^ tsddmtbAlbom;
	private: System::Windows::Forms::ToolStripTextBox^ tsddmtbYear;
	private: System::Windows::Forms::ToolStripTextBox^ tsddmtbDuration;
	private: System::Windows::Forms::ToolStripTextBox^ tsddmtbFormat;
	private: System::Windows::Forms::ToolStripTextBox^ tsddmtbSize;
	private: System::Windows::Forms::ToolStripTextBox^ tsddmtbIsImport;
	private: System::Windows::Forms::ToolStripDropDownButton^ tsddbStyle;
	private: System::Windows::Forms::ToolStripMenuItem^ tsmiFont;
	private: System::Windows::Forms::ToolStripMenuItem^ tsmiTheme;































	public:
		Dlist<Song>* Current;
		Kursova(void)
		{
			InitializeComponent();
			songManager = new SongManager();
			Current = &songManager->songList;
			//
			//TODO: Add the constructor code here
			//
			
		}

	protected:
		/// <summary>/
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
	private: System::Windows::Forms::ToolStrip^ tbMenu;












	private: System::Windows::Forms::ToolStripMenuItem^ msSort;

private: System::Windows::Forms::ToolStripMenuItem^ tsmiSSonger;
private: System::Windows::Forms::ToolStripMenuItem^ tsmiSName;
private: System::Windows::Forms::ToolStripMenuItem^ tsmiSAlbom;
private: System::Windows::Forms::ToolStripMenuItem^ tsmiSYear;
private: System::Windows::Forms::ToolStripMenuItem^ tsmiSFormat;
private: System::Windows::Forms::ToolStripMenuItem^ tsmiSSize;
private: System::Windows::Forms::ToolStripMenuItem^ tsmiSImport;



















private: System::Windows::Forms::ToolStripMenuItem^ msFile;
private: System::Windows::Forms::ToolStripMenuItem^ msbFileIn;
private: System::Windows::Forms::ToolStripMenuItem^ msbFileOut;



private: System::Windows::Forms::ToolStripTextBox^ mstbNameFileIn;
private: System::Windows::Forms::ToolStripTextBox^ mstbNameFileOut;

private: System::Windows::Forms::ContextMenuStrip^ cmsMenu;
private: System::Windows::Forms::ToolStripMenuItem^ cmsDelete;
private: System::Windows::Forms::ToolStripMenuItem^ cmsAdd;
private: System::Windows::Forms::ToolStripTextBox^ cmstbSongers;

private: System::Windows::Forms::ToolStripTextBox^ cmstbName;

private: System::Windows::Forms::ToolStripTextBox^ cmstbAlbom;

private: System::Windows::Forms::ToolStripTextBox^ cmstbYear;

private: System::Windows::Forms::ToolStripTextBox^ cmstbFormat;

private: System::Windows::Forms::ToolStripTextBox^ cmstbSize;










private: System::Windows::Forms::ToolTip^ ttTip;
private: System::Windows::Forms::ToolStripTextBox^ cmstbIsImport;
private: System::Windows::Forms::ToolStripTextBox^ cmstbDelete;
private: System::Windows::Forms::ToolStripMenuItem^ tsmiSearch;
private: System::Windows::Forms::ToolStripTextBox^ tstbSongers;
private: System::Windows::Forms::ToolStripTextBox^ tstbName;
private: System::Windows::Forms::ToolStripTextBox^ tstbAlbom;
private: System::Windows::Forms::ToolStripTextBox^ tstbYear;
private: System::Windows::Forms::ToolStripTextBox^ tstbFormat;
private: System::Windows::Forms::ToolStripTextBox^ tstbSize;
private: System::Windows::Forms::ToolStripTextBox^ tstbIsImport;

















































































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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Kursova::typeid));
			this->gbMenu = (gcnew System::Windows::Forms::GroupBox());
			this->bSearch = (gcnew System::Windows::Forms::Button());
			this->tbSearch = (gcnew System::Windows::Forms::TextBox());
			this->gbIterface = (gcnew System::Windows::Forms::GroupBox());
			this->tlpTable = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->lNumber = (gcnew System::Windows::Forms::Label());
			this->lSonger = (gcnew System::Windows::Forms::Label());
			this->lName = (gcnew System::Windows::Forms::Label());
			this->lAlbom = (gcnew System::Windows::Forms::Label());
			this->lYear = (gcnew System::Windows::Forms::Label());
			this->lDuration = (gcnew System::Windows::Forms::Label());
			this->lIsImport = (gcnew System::Windows::Forms::Label());
			this->lFormat = (gcnew System::Windows::Forms::Label());
			this->lSize = (gcnew System::Windows::Forms::Label());
			this->tbMenu = (gcnew System::Windows::Forms::ToolStrip());
			this->msFile = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->msbFileIn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mstbNameFileIn = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->msbFileOut = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mstbNameFileOut = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->msSort = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiSSonger = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiSName = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiSAlbom = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiSYear = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiSDuration = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiSFormat = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiSSize = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiSImport = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsddbStyle = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->tsmiFont = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiTheme = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cmsMenu = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->cmsAdd = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cmstbSongers = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->cmstbName = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->cmstbAlbom = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->cmstbYear = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->cmstbDuration = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->cmstbFormat = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->cmstbSize = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->cmstbIsImport = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->cmsEdit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsddmSelect = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsddmtbSelect = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->tsddmtbSongers = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->tsddmtbName = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->tsddmtbAlbom = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->tsddmtbYear = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->tsddmtbDuration = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->tsddmtbFormat = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->tsddmtbSize = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->tsddmtbIsImport = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->cmsDelete = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cmstbDelete = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->tsmiSearch = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tstbSongers = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->tstbName = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->tstbAlbom = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->tstbYear = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->tstbDuration = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->tstbFormat = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->tstbSize = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->tstbIsImport = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->cmsClear = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ttTip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->gbMenu->SuspendLayout();
			this->gbIterface->SuspendLayout();
			this->tlpTable->SuspendLayout();
			this->tbMenu->SuspendLayout();
			this->cmsMenu->SuspendLayout();
			this->SuspendLayout();
			// 
			// gbMenu
			// 
			this->gbMenu->Controls->Add(this->bSearch);
			this->gbMenu->Controls->Add(this->tbSearch);
			this->gbMenu->Dock = System::Windows::Forms::DockStyle::Top;
			this->gbMenu->Location = System::Drawing::Point(3, 18);
			this->gbMenu->Name = L"gbMenu";
			this->gbMenu->Size = System::Drawing::Size(596, 77);
			this->gbMenu->TabIndex = 0;
			this->gbMenu->TabStop = false;
			// 
			// bSearch
			// 
			this->bSearch->AutoSize = true;
			this->bSearch->Location = System::Drawing::Point(23, 28);
			this->bSearch->Name = L"bSearch";
			this->bSearch->Size = System::Drawing::Size(68, 34);
			this->bSearch->TabIndex = 1;
			this->bSearch->Text = L"Пошук";
			this->bSearch->UseVisualStyleBackColor = true;
			this->bSearch->Click += gcnew System::EventHandler(this, &Kursova::bSearch_Click);
			// 
			// tbSearch
			// 
			this->tbSearch->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbSearch->Location = System::Drawing::Point(168, 28);
			this->tbSearch->Multiline = true;
			this->tbSearch->Name = L"tbSearch";
			this->tbSearch->Size = System::Drawing::Size(386, 34);
			this->tbSearch->TabIndex = 0;
			// 
			// gbIterface
			// 
			this->gbIterface->Controls->Add(this->tlpTable);
			this->gbIterface->Controls->Add(this->gbMenu);
			this->gbIterface->Dock = System::Windows::Forms::DockStyle::Fill;
			this->gbIterface->Location = System::Drawing::Point(0, 0);
			this->gbIterface->Name = L"gbIterface";
			this->gbIterface->Size = System::Drawing::Size(602, 542);
			this->gbIterface->TabIndex = 0;
			this->gbIterface->TabStop = false;
			this->gbIterface->MouseCaptureChanged += gcnew System::EventHandler(this, &Kursova::tlpTable_Click);
			// 
			// tlpTable
			// 
			this->tlpTable->AutoScroll = true;
			this->tlpTable->BackColor = System::Drawing::SystemColors::ControlLight;
			this->tlpTable->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tlpTable->ColumnCount = 9;
			this->tlpTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tlpTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tlpTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tlpTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tlpTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tlpTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tlpTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tlpTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tlpTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tlpTable->Controls->Add(this->lNumber, 0, 0);
			this->tlpTable->Controls->Add(this->lSonger, 1, 0);
			this->tlpTable->Controls->Add(this->lName, 2, 0);
			this->tlpTable->Controls->Add(this->lAlbom, 3, 0);
			this->tlpTable->Controls->Add(this->lYear, 4, 0);
			this->tlpTable->Controls->Add(this->lDuration, 5, 0);
			this->tlpTable->Controls->Add(this->lIsImport, 8, 0);
			this->tlpTable->Controls->Add(this->lFormat, 6, 0);
			this->tlpTable->Controls->Add(this->lSize, 7, 0);
			this->tlpTable->Location = System::Drawing::Point(3, 95);
			this->tlpTable->Name = L"tlpTable";
			this->tlpTable->RowCount = 2;
			this->tlpTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tlpTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tlpTable->Size = System::Drawing::Size(592, 444);
			this->tlpTable->TabIndex = 1;
			this->tlpTable->Click += gcnew System::EventHandler(this, &Kursova::tlpTable_Click);
			this->tlpTable->PreviewKeyDown += gcnew System::Windows::Forms::PreviewKeyDownEventHandler(this, &Kursova::tlpTable_PreviewKeyDown);
			// 
			// lNumber
			// 
			this->lNumber->AutoSize = true;
			this->lNumber->Location = System::Drawing::Point(4, 1);
			this->lNumber->Name = L"lNumber";
			this->lNumber->Size = System::Drawing::Size(21, 16);
			this->lNumber->TabIndex = 0;
			this->lNumber->Text = L"№";
			this->lNumber->Click += gcnew System::EventHandler(this, &Kursova::tlpTable_Click);
			// 
			// lSonger
			// 
			this->lSonger->AutoSize = true;
			this->lSonger->Location = System::Drawing::Point(32, 1);
			this->lSonger->Name = L"lSonger";
			this->lSonger->Size = System::Drawing::Size(93, 16);
			this->lSonger->TabIndex = 1;
			this->lSonger->Text = L"Виконавець\\і";
			this->lSonger->Click += gcnew System::EventHandler(this, &Kursova::tlpTable_Click);
			// 
			// lName
			// 
			this->lName->AutoSize = true;
			this->lName->Location = System::Drawing::Point(132, 1);
			this->lName->Name = L"lName";
			this->lName->Size = System::Drawing::Size(49, 16);
			this->lName->TabIndex = 2;
			this->lName->Text = L"Назва";
			this->lName->Click += gcnew System::EventHandler(this, &Kursova::tlpTable_Click);
			// 
			// lAlbom
			// 
			this->lAlbom->AutoSize = true;
			this->lAlbom->Location = System::Drawing::Point(188, 1);
			this->lAlbom->Name = L"lAlbom";
			this->lAlbom->Size = System::Drawing::Size(56, 16);
			this->lAlbom->TabIndex = 3;
			this->lAlbom->Text = L"Альбом";
			this->lAlbom->Click += gcnew System::EventHandler(this, &Kursova::tlpTable_Click);
			// 
			// lYear
			// 
			this->lYear->AutoSize = true;
			this->lYear->Location = System::Drawing::Point(251, 1);
			this->lYear->Name = L"lYear";
			this->lYear->Size = System::Drawing::Size(26, 16);
			this->lYear->TabIndex = 4;
			this->lYear->Text = L"Рік";
			this->lYear->Click += gcnew System::EventHandler(this, &Kursova::tlpTable_Click);
			// 
			// lDuration
			// 
			this->lDuration->AutoSize = true;
			this->lDuration->Location = System::Drawing::Point(284, 1);
			this->lDuration->Name = L"lDuration";
			this->lDuration->Size = System::Drawing::Size(80, 16);
			this->lDuration->TabIndex = 8;
			this->lDuration->Text = L"Тривалість";
			// 
			// lIsImport
			// 
			this->lIsImport->AutoSize = true;
			this->lIsImport->Location = System::Drawing::Point(495, 1);
			this->lIsImport->Name = L"lIsImport";
			this->lIsImport->Size = System::Drawing::Size(76, 16);
			this->lIsImport->TabIndex = 7;
			this->lIsImport->Text = L"Зарубіжна";
			this->lIsImport->Click += gcnew System::EventHandler(this, &Kursova::tlpTable_Click);
			// 
			// lFormat
			// 
			this->lFormat->AutoSize = true;
			this->lFormat->Location = System::Drawing::Point(371, 1);
			this->lFormat->Name = L"lFormat";
			this->lFormat->Size = System::Drawing::Size(58, 16);
			this->lFormat->TabIndex = 5;
			this->lFormat->Text = L"Формат";
			this->lFormat->Click += gcnew System::EventHandler(this, &Kursova::tlpTable_Click);
			// 
			// lSize
			// 
			this->lSize->AutoSize = true;
			this->lSize->Location = System::Drawing::Point(436, 1);
			this->lSize->Name = L"lSize";
			this->lSize->Size = System::Drawing::Size(52, 16);
			this->lSize->TabIndex = 6;
			this->lSize->Text = L"Розмір";
			this->lSize->Click += gcnew System::EventHandler(this, &Kursova::tlpTable_Click);
			// 
			// tbMenu
			// 
			this->tbMenu->ImageScalingSize = System::Drawing::Size(20, 20);
			this->tbMenu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->msFile, this->msSort,
					this->tsddbStyle
			});
			this->tbMenu->Location = System::Drawing::Point(0, 0);
			this->tbMenu->Name = L"tbMenu";
			this->tbMenu->Size = System::Drawing::Size(602, 31);
			this->tbMenu->TabIndex = 2;
			this->tbMenu->Text = L"toolStrip1";
			// 
			// msFile
			// 
			this->msFile->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->msbFileIn, this->msbFileOut });
			this->msFile->Name = L"msFile";
			this->msFile->Size = System::Drawing::Size(59, 31);
			this->msFile->Text = L"Файл";
			// 
			// msbFileIn
			// 
			this->msbFileIn->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->mstbNameFileIn });
			this->msbFileIn->Name = L"msbFileIn";
			this->msbFileIn->Size = System::Drawing::Size(224, 26);
			this->msbFileIn->Text = L"Зчитати";
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
			this->msbFileOut->Size = System::Drawing::Size(224, 26);
			this->msbFileOut->Text = L"Записати";
			this->msbFileOut->Click += gcnew System::EventHandler(this, &Kursova::msbFileOut_Click);
			// 
			// mstbNameFileOut
			// 
			this->mstbNameFileOut->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->mstbNameFileOut->Name = L"mstbNameFileOut";
			this->mstbNameFileOut->Size = System::Drawing::Size(100, 27);
			// 
			// msSort
			// 
			this->msSort->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->tsmiSSonger,
					this->tsmiSName, this->tsmiSAlbom, this->tsmiSYear, this->tsmiSDuration, this->tsmiSFormat, this->tsmiSSize, this->tsmiSImport
			});
			this->msSort->Name = L"msSort";
			this->msSort->Size = System::Drawing::Size(105, 27);
			this->msSort->Text = L"Сортування";
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
			// tsmiSDuration
			// 
			this->tsmiSDuration->Name = L"tsmiSDuration";
			this->tsmiSDuration->Size = System::Drawing::Size(186, 26);
			this->tsmiSDuration->Text = L"Тривалість";
			this->tsmiSDuration->Click += gcnew System::EventHandler(this, &Kursova::tsmiSDuration_Click);
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
			// tsddbStyle
			// 
			this->tsddbStyle->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->tsddbStyle->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->tsmiFont,
					this->tsmiTheme
			});
			this->tsddbStyle->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsddbStyle.Image")));
			this->tsddbStyle->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsddbStyle->Name = L"tsddbStyle";
			this->tsddbStyle->Size = System::Drawing::Size(63, 28);
			this->tsddbStyle->Text = L"Стиль";
			// 
			// tsmiFont
			// 
			this->tsmiFont->Name = L"tsmiFont";
			this->tsmiFont->Size = System::Drawing::Size(140, 26);
			this->tsmiFont->Text = L"Шрифт";
			this->tsmiFont->Click += gcnew System::EventHandler(this, &Kursova::tsmiFont_Click);
			// 
			// tsmiTheme
			// 
			this->tsmiTheme->Name = L"tsmiTheme";
			this->tsmiTheme->Size = System::Drawing::Size(140, 26);
			this->tsmiTheme->Text = L"Тема";
			this->tsmiTheme->Click += gcnew System::EventHandler(this, &Kursova::tsmiTheme_Click);
			// 
			// cmsMenu
			// 
			this->cmsMenu->ImageScalingSize = System::Drawing::Size(20, 20);
			this->cmsMenu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->cmsAdd, this->cmsEdit,
					this->cmsDelete, this->tsmiSearch, this->cmsClear
			});
			this->cmsMenu->Name = L"contextMenuStrip1";
			this->cmsMenu->RenderMode = System::Windows::Forms::ToolStripRenderMode::System;
			this->cmsMenu->ShowImageMargin = false;
			this->cmsMenu->Size = System::Drawing::Size(177, 124);
			this->cmsMenu->Text = L"cmsMenu";
			// 
			// cmsAdd
			// 
			this->cmsAdd->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->cmstbSongers,
					this->cmstbName, this->cmstbAlbom, this->cmstbYear, this->cmstbDuration, this->cmstbFormat, this->cmstbSize, this->cmstbIsImport
			});
			this->cmsAdd->Name = L"cmsAdd";
			this->cmsAdd->Size = System::Drawing::Size(176, 24);
			this->cmsAdd->Text = L"Додати";
			this->cmsAdd->ToolTipText = L"Натиснікть коли дадасте всю наявну інормацію";
			this->cmsAdd->Click += gcnew System::EventHandler(this, &Kursova::cmsAdd_Click);
			// 
			// cmstbSongers
			// 
			this->cmstbSongers->AutoToolTip = true;
			this->cmstbSongers->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->cmstbSongers->Name = L"cmstbSongers";
			this->cmstbSongers->Size = System::Drawing::Size(100, 27);
			this->cmstbSongers->Tag = L"";
			this->cmstbSongers->ToolTipText = L"Виконавець\\і";
			// 
			// cmstbName
			// 
			this->cmstbName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->cmstbName->Name = L"cmstbName";
			this->cmstbName->Size = System::Drawing::Size(100, 27);
			this->cmstbName->ToolTipText = L"Назва";
			// 
			// cmstbAlbom
			// 
			this->cmstbAlbom->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->cmstbAlbom->Name = L"cmstbAlbom";
			this->cmstbAlbom->Size = System::Drawing::Size(100, 27);
			this->cmstbAlbom->ToolTipText = L"Альбом";
			// 
			// cmstbYear
			// 
			this->cmstbYear->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->cmstbYear->Name = L"cmstbYear";
			this->cmstbYear->Size = System::Drawing::Size(100, 27);
			this->cmstbYear->ToolTipText = L"Рік";
			// 
			// cmstbDuration
			// 
			this->cmstbDuration->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->cmstbDuration->Name = L"cmstbDuration";
			this->cmstbDuration->Size = System::Drawing::Size(100, 27);
			this->cmstbDuration->ToolTipText = L"Тривалість (хв)";
			// 
			// cmstbFormat
			// 
			this->cmstbFormat->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->cmstbFormat->Name = L"cmstbFormat";
			this->cmstbFormat->Size = System::Drawing::Size(100, 27);
			this->cmstbFormat->ToolTipText = L"Формат";
			// 
			// cmstbSize
			// 
			this->cmstbSize->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->cmstbSize->Name = L"cmstbSize";
			this->cmstbSize->Size = System::Drawing::Size(100, 27);
			this->cmstbSize->ToolTipText = L"Розмір";
			// 
			// cmstbIsImport
			// 
			this->cmstbIsImport->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->cmstbIsImport->Name = L"cmstbIsImport";
			this->cmstbIsImport->Size = System::Drawing::Size(100, 27);
			this->cmstbIsImport->ToolTipText = L"Зарубіжна\? (Так\\Ні)";
			// 
			// cmsEdit
			// 
			this->cmsEdit->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->tsddmSelect,
					this->tsddmtbSongers, this->tsddmtbName, this->tsddmtbAlbom, this->tsddmtbYear, this->tsddmtbDuration, this->tsddmtbFormat, this->tsddmtbSize,
					this->tsddmtbIsImport
			});
			this->cmsEdit->Name = L"cmsEdit";
			this->cmsEdit->Size = System::Drawing::Size(176, 24);
			this->cmsEdit->Text = L"Редагувати";
			this->cmsEdit->Click += gcnew System::EventHandler(this, &Kursova::cmsEdit_Click);
			// 
			// tsddmSelect
			// 
			this->tsddmSelect->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->tsddmtbSelect });
			this->tsddmSelect->Name = L"tsddmSelect";
			this->tsddmSelect->Size = System::Drawing::Size(174, 26);
			this->tsddmSelect->Text = L"Вибрати";
			this->tsddmSelect->Click += gcnew System::EventHandler(this, &Kursova::tsddmSelect_Click);
			// 
			// tsddmtbSelect
			// 
			this->tsddmtbSelect->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->tsddmtbSelect->Name = L"tsddmtbSelect";
			this->tsddmtbSelect->Size = System::Drawing::Size(100, 27);
			this->tsddmtbSelect->ToolTipText = L"Індекс";
			// 
			// tsddmtbSongers
			// 
			this->tsddmtbSongers->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->tsddmtbSongers->Name = L"tsddmtbSongers";
			this->tsddmtbSongers->Size = System::Drawing::Size(100, 27);
			this->tsddmtbSongers->ToolTipText = L"Виконавець\\і";
			// 
			// tsddmtbName
			// 
			this->tsddmtbName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->tsddmtbName->Name = L"tsddmtbName";
			this->tsddmtbName->Size = System::Drawing::Size(100, 27);
			this->tsddmtbName->ToolTipText = L"Назва";
			// 
			// tsddmtbAlbom
			// 
			this->tsddmtbAlbom->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->tsddmtbAlbom->Name = L"tsddmtbAlbom";
			this->tsddmtbAlbom->Size = System::Drawing::Size(100, 27);
			this->tsddmtbAlbom->ToolTipText = L"Альбом";
			// 
			// tsddmtbYear
			// 
			this->tsddmtbYear->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->tsddmtbYear->Name = L"tsddmtbYear";
			this->tsddmtbYear->Size = System::Drawing::Size(100, 27);
			this->tsddmtbYear->ToolTipText = L"Рік";
			// 
			// tsddmtbDuration
			// 
			this->tsddmtbDuration->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->tsddmtbDuration->Name = L"tsddmtbDuration";
			this->tsddmtbDuration->Size = System::Drawing::Size(100, 27);
			this->tsddmtbDuration->ToolTipText = L"Тривалість";
			// 
			// tsddmtbFormat
			// 
			this->tsddmtbFormat->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->tsddmtbFormat->Name = L"tsddmtbFormat";
			this->tsddmtbFormat->Size = System::Drawing::Size(100, 27);
			this->tsddmtbFormat->ToolTipText = L"Формат";
			// 
			// tsddmtbSize
			// 
			this->tsddmtbSize->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->tsddmtbSize->Name = L"tsddmtbSize";
			this->tsddmtbSize->Size = System::Drawing::Size(100, 27);
			this->tsddmtbSize->ToolTipText = L"Розмір";
			// 
			// tsddmtbIsImport
			// 
			this->tsddmtbIsImport->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->tsddmtbIsImport->Name = L"tsddmtbIsImport";
			this->tsddmtbIsImport->Size = System::Drawing::Size(100, 27);
			this->tsddmtbIsImport->ToolTipText = L"Зарубіжна(Так\\Ні)";
			// 
			// cmsDelete
			// 
			this->cmsDelete->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->cmstbDelete });
			this->cmsDelete->Name = L"cmsDelete";
			this->cmsDelete->Size = System::Drawing::Size(176, 24);
			this->cmsDelete->Text = L"Видалити";
			this->cmsDelete->Click += gcnew System::EventHandler(this, &Kursova::cmsDelete_Click);
			// 
			// cmstbDelete
			// 
			this->cmstbDelete->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->cmstbDelete->Name = L"cmstbDelete";
			this->cmstbDelete->Size = System::Drawing::Size(100, 27);
			this->cmstbDelete->ToolTipText = L"Індекс елемента який треба видалити";
			// 
			// tsmiSearch
			// 
			this->tsmiSearch->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->tstbSongers,
					this->tstbName, this->tstbAlbom, this->tstbYear, this->tstbDuration, this->tstbFormat, this->tstbSize, this->tstbIsImport
			});
			this->tsmiSearch->Name = L"tsmiSearch";
			this->tsmiSearch->Size = System::Drawing::Size(176, 24);
			this->tsmiSearch->Text = L"Детальний пошук";
			this->tsmiSearch->Click += gcnew System::EventHandler(this, &Kursova::tsmiSearch_Click);
			// 
			// tstbSongers
			// 
			this->tstbSongers->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->tstbSongers->Name = L"tstbSongers";
			this->tstbSongers->Size = System::Drawing::Size(100, 27);
			this->tstbSongers->ToolTipText = L"Виконавець\\ці";
			// 
			// tstbName
			// 
			this->tstbName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->tstbName->Name = L"tstbName";
			this->tstbName->Size = System::Drawing::Size(100, 27);
			this->tstbName->ToolTipText = L"Назва";
			// 
			// tstbAlbom
			// 
			this->tstbAlbom->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->tstbAlbom->Name = L"tstbAlbom";
			this->tstbAlbom->Size = System::Drawing::Size(100, 27);
			this->tstbAlbom->ToolTipText = L"Альбом";
			// 
			// tstbYear
			// 
			this->tstbYear->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->tstbYear->Name = L"tstbYear";
			this->tstbYear->Size = System::Drawing::Size(100, 27);
			this->tstbYear->ToolTipText = L"Рік";
			// 
			// tstbDuration
			// 
			this->tstbDuration->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->tstbDuration->Name = L"tstbDuration";
			this->tstbDuration->Size = System::Drawing::Size(100, 27);
			this->tstbDuration->ToolTipText = L"Тривалість (хв)";
			// 
			// tstbFormat
			// 
			this->tstbFormat->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->tstbFormat->Name = L"tstbFormat";
			this->tstbFormat->Size = System::Drawing::Size(100, 27);
			this->tstbFormat->ToolTipText = L"Формат";
			// 
			// tstbSize
			// 
			this->tstbSize->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->tstbSize->Name = L"tstbSize";
			this->tstbSize->Size = System::Drawing::Size(100, 27);
			this->tstbSize->ToolTipText = L"Розмір";
			// 
			// tstbIsImport
			// 
			this->tstbIsImport->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->tstbIsImport->Name = L"tstbIsImport";
			this->tstbIsImport->Size = System::Drawing::Size(100, 27);
			this->tstbIsImport->ToolTipText = L"Зарубіжна (Так\\Ні)";
			// 
			// cmsClear
			// 
			this->cmsClear->Name = L"cmsClear";
			this->cmsClear->Size = System::Drawing::Size(176, 24);
			this->cmsClear->Text = L"Очистити ";
			this->cmsClear->Click += gcnew System::EventHandler(this, &Kursova::cmsClear_Click);
			// 
			// Kursova
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(602, 542);
			this->Controls->Add(this->tbMenu);
			this->Controls->Add(this->gbIterface);
			this->MaximumSize = System::Drawing::Size(620, 589);
			this->MinimumSize = System::Drawing::Size(620, 589);
			this->Name = L"Kursova";
			this->Text = L"Kursova";
			this->gbMenu->ResumeLayout(false);
			this->gbMenu->PerformLayout();
			this->gbIterface->ResumeLayout(false);
			this->tlpTable->ResumeLayout(false);
			this->tlpTable->PerformLayout();
			this->tbMenu->ResumeLayout(false);
			this->tbMenu->PerformLayout();
			this->cmsMenu->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void msbFileOut_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void msbFileIn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void UpdateTable(Dlist<Song>& DList);
private: System::Void tsmiSSonger_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void tsmiSName_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void tsmiSAlbom_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void tsmiSYear_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void tsmiSDuration_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void tsmiSFormat_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void tsmiSSize_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void tsmiSImport_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void tlpTable_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void cmsDelete_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void tlpTable_PreviewKeyDown(System::Object^ sender, System::Windows::Forms::PreviewKeyDownEventArgs^ e);
private: System::Void cmsAdd_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void bSearch_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void tsmiSearch_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void cmsClear_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void tsmiFont_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void tsmiTheme_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void tsddmSelect_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void cmsEdit_Click(System::Object^ sender, System::EventArgs^ e);
};
}
