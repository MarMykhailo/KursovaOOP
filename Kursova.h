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
		Kursova(void)
		{
			InitializeComponent();
			songManager = new SongManager();
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
	private: System::Windows::Forms::ToolStripMenuItem^ tsmiSNumber;
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

private: System::Windows::Forms::ToolStripTextBox^ mstbFileNameInOut;

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
			this->tbMenu = (gcnew System::Windows::Forms::ToolStrip());
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
			this->cmsMenu = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->cmsDelete = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cmstbDelete = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->cmsAdd = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cmstbSongers = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->cmstbName = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->cmstbAlbom = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->cmstbYear = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->cmstbFormat = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->cmstbSize = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->cmstbIsImport = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->tsmiSearch = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tstbSongers = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->tstbName = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->tstbAlbom = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->tstbYear = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->tstbFormat = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->tstbSize = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->tstbIsImport = (gcnew System::Windows::Forms::ToolStripTextBox());
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
			this->bSearch->Click += gcnew System::EventHandler(this, &Kursova::bSearch_Click);
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
			this->gbIterface->MouseCaptureChanged += gcnew System::EventHandler(this, &Kursova::tlpTable_Click);
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
			// lIsImport
			// 
			this->lIsImport->AutoSize = true;
			this->lIsImport->Location = System::Drawing::Point(408, 1);
			this->lIsImport->Name = L"lIsImport";
			this->lIsImport->Size = System::Drawing::Size(76, 16);
			this->lIsImport->TabIndex = 7;
			this->lIsImport->Text = L"Зарубіжна";
			this->lIsImport->Click += gcnew System::EventHandler(this, &Kursova::tlpTable_Click);
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
			// lSize
			// 
			this->lSize->AutoSize = true;
			this->lSize->Location = System::Drawing::Point(349, 1);
			this->lSize->Name = L"lSize";
			this->lSize->Size = System::Drawing::Size(52, 16);
			this->lSize->TabIndex = 6;
			this->lSize->Text = L"Розмір";
			this->lSize->Click += gcnew System::EventHandler(this, &Kursova::tlpTable_Click);
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
			// lFormat
			// 
			this->lFormat->AutoSize = true;
			this->lFormat->Location = System::Drawing::Point(284, 1);
			this->lFormat->Name = L"lFormat";
			this->lFormat->Size = System::Drawing::Size(58, 16);
			this->lFormat->TabIndex = 5;
			this->lFormat->Text = L"Формат";
			this->lFormat->Click += gcnew System::EventHandler(this, &Kursova::tlpTable_Click);
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
			// tbMenu
			// 
			this->tbMenu->ImageScalingSize = System::Drawing::Size(20, 20);
			this->tbMenu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->msFile, this->msSort });
			this->tbMenu->Location = System::Drawing::Point(0, 0);
			this->tbMenu->Name = L"tbMenu";
			this->tbMenu->Size = System::Drawing::Size(516, 25);
			this->tbMenu->TabIndex = 2;
			this->tbMenu->Text = L"toolStrip1";
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
			// cmsMenu
			// 
			this->cmsMenu->ImageScalingSize = System::Drawing::Size(20, 20);
			this->cmsMenu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->cmsDelete, this->cmsAdd,
					this->tsmiSearch
			});
			this->cmsMenu->Name = L"contextMenuStrip1";
			this->cmsMenu->RenderMode = System::Windows::Forms::ToolStripRenderMode::System;
			this->cmsMenu->ShowImageMargin = false;
			this->cmsMenu->Size = System::Drawing::Size(186, 104);
			this->cmsMenu->Text = L"cmsMenu";
			// 
			// cmsDelete
			// 
			this->cmsDelete->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->cmstbDelete });
			this->cmsDelete->Name = L"cmsDelete";
			this->cmsDelete->Size = System::Drawing::Size(122, 24);
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
			// cmsAdd
			// 
			this->cmsAdd->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->cmstbSongers,
					this->cmstbName, this->cmstbAlbom, this->cmstbYear, this->cmstbFormat, this->cmstbSize, this->cmstbIsImport
			});
			this->cmsAdd->Name = L"cmsAdd";
			this->cmsAdd->Size = System::Drawing::Size(122, 24);
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
			// tsmiSearch
			// 
			this->tsmiSearch->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->tstbSongers,
					this->tstbName, this->tstbAlbom, this->tstbYear, this->tstbFormat, this->tstbSize, this->tstbIsImport
			});
			this->tsmiSearch->Name = L"tsmiSearch";
			this->tsmiSearch->Size = System::Drawing::Size(185, 24);
			this->tsmiSearch->Text = L"Детальний пошук";
			this->tsmiSearch->Click += gcnew System::EventHandler(this, &Kursova::tsmiSearch_Click);
			// 
			// tstbSongers
			// 
			this->tstbSongers->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->tstbSongers->Name = L"tstbSongers";
			this->tstbSongers->Size = System::Drawing::Size(100, 27);
			// 
			// tstbName
			// 
			this->tstbName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->tstbName->Name = L"tstbName";
			this->tstbName->Size = System::Drawing::Size(100, 27);
			// 
			// tstbAlbom
			// 
			this->tstbAlbom->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->tstbAlbom->Name = L"tstbAlbom";
			this->tstbAlbom->Size = System::Drawing::Size(100, 27);
			// 
			// tstbYear
			// 
			this->tstbYear->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->tstbYear->Name = L"tstbYear";
			this->tstbYear->Size = System::Drawing::Size(100, 27);
			// 
			// tstbFormat
			// 
			this->tstbFormat->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->tstbFormat->Name = L"tstbFormat";
			this->tstbFormat->Size = System::Drawing::Size(100, 27);
			// 
			// tstbSize
			// 
			this->tstbSize->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->tstbSize->Name = L"tstbSize";
			this->tstbSize->Size = System::Drawing::Size(100, 27);
			// 
			// tstbIsImport
			// 
			this->tstbIsImport->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->tstbIsImport->Name = L"tstbIsImport";
			this->tstbIsImport->Size = System::Drawing::Size(100, 27);
			// 
			// Kursova
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(516, 542);
			this->Controls->Add(this->tbMenu);
			this->Controls->Add(this->gbIterface);
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
private: System::Void tsmiSFormat_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void tsmiSSize_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void tsmiSImport_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void tlpTable_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void cmsDelete_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void tlpTable_PreviewKeyDown(System::Object^ sender, System::Windows::Forms::PreviewKeyDownEventArgs^ e);
private: System::Void cmsAdd_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void bSearch_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void tsmiSearch_Click(System::Object^ sender, System::EventArgs^ e);
};
}
