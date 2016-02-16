#pragma once

namespace Insertar_Orden_y_Eliminar {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Button^  button1;

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(35, 18);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(308, 50);
			this->textBox1->TabIndex = 0;
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 42;
			this->listBox1->Location = System::Drawing::Point(376, 9);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(302, 424);
			this->listBox1->TabIndex = 1;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(33, 101);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(308, 204);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Opciones";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(21, 110);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(266, 46);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->Text = L"Eliminar Nodo";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton_Is_On);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Arial", 28));
			this->radioButton1->Location = System::Drawing::Point(21, 53);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(282, 47);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Insertar Orden";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton_Is_On);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 28));
			this->button1->Location = System::Drawing::Point(33, 334);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(308, 72);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Ejecutar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(704, 442);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox1);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F));
			this->Name = L"Form1";
			this->Text = L"Insertar_Orden_y_Eliminar";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
		ref struct Nodo{
			String^ info;
			Nodo^ link;
		};
		static Nodo^ PTR = nullptr;

		void Eliminar(String^ dato){
			Nodo^ P = gcnew Nodo();
			Nodo^ antP = gcnew Nodo();
			P=PTR;
			antP=nullptr;
			while(P != nullptr && P->info != dato){
				antP = P;
				P=P->link;
			}
			if(P->info == dato){
				if (P==PTR)
				{
					PTR = P->link;
					P->link=nullptr;
				}else{
					antP->link = P->link;
					P->link = nullptr;
				}
				P=nullptr;
			}
		}

		void insertar(String^ elem){
			Nodo^ Q = gcnew Nodo();
			Q->info = elem;
			if (PTR==nullptr){
				PTR=Q;
			}else{
				Nodo^ AntP=nullptr;
				Nodo^ P=PTR;
				P = PTR;
				antP = nullptr;
				while (P !=nullptr){
					if (P->info->CompareTo(Q->info) ==1){
						break;
					}else{
						AntP=P;
						P=P->link;
					}
				}
				if (P==PTR){
					Q->link=PTR;
					PTR=Q;
				}else{
					Q->link=P;
					AntP->link=Q;
				}
			}
		}

		Boolean Existe(String^ elem){
			Nodo^ Q = gcnew Nodo();
			Q=PTR;
			while(Q != nullptr && Q->info->CompareTo(elem) != 0){
				Q=Q->link;
			}
			if(Q != nullptr){
				return true;
			}else{
				return false;
			}
		}

		void mostrar(){
			listBox1->Items->Clear();
			Nodo^ P = gcnew Nodo();
			P=PTR;
			while(P != nullptr){
				listBox1->Items->Add(P->info);
				P=P->link;
			}
			textBox1->Text="";
		}

#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				String^ info;
				 if(radioButton1->Checked==true){
					 info = textBox1->Text;
					 if(Existe(info)){
						 MessageBox::Show("Error no se pueden agregar elementos que ya esten en la lista");
						 return;
					 }
					 insertar(info);
				 }else{
					 if(listBox1->SelectedItem == nullptr){
						 MessageBox::Show("Seleccione un elemento del listbox");
						 return;
					 }else{
						info=listBox1->SelectedItem->ToString();
					 }
					 Eliminar(info);
				 }
				 mostrar();
			 }

	private: System::Void radioButton_Is_On(System::Object^  sender, System::EventArgs^  e) {
				 if(radioButton1->Checked){
					 textBox1->Enabled=true;
				 }else{
					 textBox1->Enabled=false;
				 }
			 }
};
}

