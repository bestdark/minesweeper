﻿#pragma once
#include "field.h"
namespace minesweeper {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	TGameField GameField;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(0, 0);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->ClientSizeChanged += gcnew System::EventHandler(this, &MyForm::pictureBox1_ClientSizeChanged);
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseClick);
			this->pictureBox1->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseDoubleClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(114, 79);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Easy";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(114, 129);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Medium";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(114, 179);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Hard";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(143, 224);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Restart";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(301, 300);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		GameField = TGameField(9, 9, 10);
		button1->Visible = false;
		button2->Visible = false;
		button3->Visible = false;
		GameField.InitGraphics(pictureBox1, this);
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		GameField = TGameField(16, 16, 40);
		button1->Visible = false;
		button2->Visible = false;
		button3->Visible = false;
		GameField.InitGraphics(pictureBox1, this);
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
	{
		GameField = TGameField(24, 20, 99);
		button1->Visible = false;
		button2->Visible = false;
		button3->Visible = false;
		GameField.InitGraphics(pictureBox1, this);
	}
private: System::Void pictureBox1_ClientSizeChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	int x, y;
	System::Drawing::Rectangle screenRectangle = RectangleToScreen(this->ClientRectangle);
	x = MousePosition.X - screenRectangle.X - pictureBox1->Left;
	y = MousePosition.Y - screenRectangle.Y - pictureBox1->Top;
	x /= 25;
	y /= 25;
	if (e->Button==System::Windows::Forms::MouseButtons::Left)
		GameField.Click(x, y, pictureBox1, button4); else
		GameField.RClick(x, y, pictureBox1);
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Width = 317;
	this->Height = 339;
	pictureBox1->Width = 1;
	pictureBox1->Height = 1;
	button1->Visible = true;
	button2->Visible = true;
	button3->Visible = true;
	button4->Visible = false;
}
private: System::Void pictureBox1_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	int x, y;
	System::Drawing::Rectangle screenRectangle = RectangleToScreen(this->ClientRectangle);
	x = MousePosition.X - screenRectangle.X - pictureBox1->Left;
	y = MousePosition.Y - screenRectangle.Y - pictureBox1->Top;
	x /= 25;
	y /= 25;
	if (e->Button == System::Windows::Forms::MouseButtons::Left)
		GameField.SmartClick(x, y, pictureBox1, button4);
}
};
}
