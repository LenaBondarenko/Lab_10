#pragma once
#include<cstdlib>
#include<ctime>
#using<Microsoft.VisualBasic.dll>

namespace Lab10 {

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
			srand(time(0));
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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ListBox^ listBox1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Salmon;
			this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(479, 87);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 42);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Додати елемент";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Salmon;
			this->button2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(479, 150);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(97, 42);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Видалити елемент";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Salmon;
			this->button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(479, 213);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(97, 45);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Обчислити";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Crimson;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(92, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(512, 23);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Створити чергу цілих чисел. Знайти найменший елемент черги.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Crimson;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(25, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(156, 22);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Ввести розмір черги";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Bisque;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(187, 75);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(123, 26);
			this->textBox1->TabIndex = 5;
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::Bisque;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 19;
			this->listBox1->Location = System::Drawing::Point(187, 121);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(123, 137);
			this->listBox1->TabIndex = 6;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::RosyBrown;
			this->ClientSize = System::Drawing::Size(667, 336);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		System::Collections::Generic::Queue<int> myQueue1; //Оголошення черги

		int lastAddedValue;
		bool isQueueIntialized = false;
		int maxQueueSize = 10;
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!isQueueIntialized) 
		{
			isQueueIntialized = true;
		}
		int size = Convert::ToInt32(textBox1->Text);
		if (myQueue1.Count < size) 
		{
			int randomValue = rand() % 100 + 1; // Генерує випадкове число від 1 до 100

			myQueue1.Enqueue(randomValue);
			listBox1->Items->Add(randomValue.ToString());
			lastAddedValue = randomValue;
		}
		else 
		{
			MessageBox::Show("Досягнуто ліміт чисел");
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (isQueueIntialized) {
		if (myQueue1.Count == maxQueueSize) 
		{
			MessageBox::Show("Черга повна");
		}
		else if (myQueue1.Count > 0) {
			myQueue1.Dequeue();
			listBox1->Items->Clear();
			for each (int value in myQueue1) {
				listBox1->Items->Add(value.ToString());
			}
		}
		else {
			listBox1->Items->Add("Черга порожня");
		}
	}
	else {
		listBox1->Items->Add("Черга ще не була ініціалізована");
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int min = myQueue1.Peek(); // Ініціалізуємо мінімум першим елементом черги
	for each (int value in myQueue1) {
		if (value < min) {
			min = value;
		}
	}

	MessageBox::Show("Найменший елемент черги: " + min.ToString());
}
};
}
