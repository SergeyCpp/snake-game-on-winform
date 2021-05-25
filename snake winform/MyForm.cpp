﻿#include "pch.h"
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
	
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	
	snakewinform::MyForm form;
	Application::Run(% form);
}


struct Vector2 {
	int X, Y;
};

Vector2 direction;//направление змейки
Vector2 positionFruit;//позиция фрукта
Vector2 gameArea;//игровая зона

//конструктор формы
snakewinform::MyForm::MyForm(void)
{
	InitializeComponent();

	//Размеры игровой зоны
	gameArea.X = 500;
	gameArea.Y = 500;

	firstLaunch = true;//первый запуск
	NewGame();//новая игра
	
}


//реализаци действий игры
void snakewinform::MyForm::GeneratePositionFruit()
{
	//генерация случайной позиции фрукта
	Random^ rand = gcnew Random();
	positionFruit.X = rand->Next(10, gameArea.X - 50);//10 - смещение относительно боков формы
	positionFruit.Y = rand->Next(120, gameArea.Y - 50);//120 - смещение верхней позиции относительно верха формы

	//проверка что фрукт не создался на змейке
	for (int i = 0; i < score; i++) {
		if (positionFruit.X == snake[i]->Location.X &&
			positionFruit.Y == snake[i]->Location.Y)
			GeneratePositionFruit();
	}

	//преобразуем значение чтобы было кратно шагу
	int tempX = positionFruit.X % step;
	positionFruit.X -= tempX;

	int tempY = positionFruit.Y % step;
	positionFruit.Y -= tempY;

	//присваеваем позицию фрукту
	fruit->Location = Point(positionFruit.X, positionFruit.Y);

	//добавляем объект на форму
	this->Controls->Add(fruit);
}

void snakewinform::MyForm::Eating()
{
	//проверим голову змеи и позицию фрукта
	if (snake[0]->Location.X == positionFruit.X && snake[0]->Location.Y == positionFruit.Y) {
		Score->Text = "Счет: " + ++score;

		//добавляем новыый элемент змейке
		snake[score] = gcnew PictureBox();
		snake[score]->Location = Point(snake[score - 1]->Location.X + step * direction.X, snake[score - 1]->Location.Y - step * direction.Y);
		snake[score]->BackColor = Color::Red;
		snake[score]->Width = step;
		snake[score]->Height = step;
		this->Controls->Add(snake[score]);

		GeneratePositionFruit();
	}
}

void snakewinform::MyForm::Movement()
{
	//двигаем каждый элемент змейки
	for (int i = score; i >= 1; i--) {
		snake[i]->Location = snake[i - 1]->Location;
	}
	snake[0]->Location = Point(snake[0]->Location.X + direction.X * step, snake[0]->Location.Y + direction.Y * step);
}

void snakewinform::MyForm::EatYourself()
{
	//проверка позиции каждой части змейки
	for (int i = 1; i < score; i++) {
		if (snake[0]->Location == snake[i]->Location) {
			GameOver();
		}
	}
}

void snakewinform::MyForm::GameOver()
{
	play = false;
	die = true;

	Game_over->Visible = true;
}

void snakewinform::MyForm::NewGame()
{
	//если инициализация была, то удаляем объекты с формы
	if (!firstLaunch)
	{
		this->Controls->Remove(fruit);
		if (!firstLaunch) {
			for (int i = 0; i <= score; i++)
			{
				this->Controls->Remove(snake[i]);
			}
		}
	}
	else
	{
		firstLaunch = false;
	}
	//можно играть
	play = true;
	die = false;

	
	score = 0;
	//создаем змейку
	snake = gcnew array <PictureBox^, 1>(100);
	snake[0] = gcnew PictureBox();
	snake[0]->Location = Point(250, 250);
	snake[0]->BackColor = Color::Green;//голова будет зеленой
	snake[0]->Width = step;
	snake[0]->Height = step;

	
	this->Controls->Add(snake[0]);

	//создаем фрукт
	fruit = gcnew PictureBox();
	fruit->BackColor = Color::Blue;
	fruit->Width = step;
	fruit->Height = step;
	GeneratePositionFruit();

	//задаем таймер для обновления и запускаем таймер для обновления 
	timer->Interval = updateInterval;
	timer->Start();

	//задаем направление на запуске
	direction.X = 0;
	direction.Y = 0;

	Score->Text = "Счет: 0";

	//скрываем ненужные компоненты на форме
	Game_over->Visible = false;
	GameSettings->Visible = false;
}

void snakewinform::MyForm::CheckBorders()
{
	if (snake[0]->Location.X >= Rightbound->Location.X || snake[0]->Location.X <= Leftbound->Location.X) {
		//direction.X *= -1;//развернуть в обратном направлении
		GameOver();
	}

	if (snake[0]->Location.Y <= Topbound->Location.Y || snake[0]->Location.Y >= Bottombound->Location.Y) {
		//direction.Y *= -1;//развернуть в обратном направлении
		GameOver();
	}

	Fruitcoord->Text = "Координаты фрукта: (" + Convert::ToString(fruit->Location.X) + ", " + Convert::ToString(fruit->Location.Y) + ")";
	Snakecoord->Text = "Координаты змейки: (" + Convert::ToString(snake[0]->Location.X) + ", " + Convert::ToString(snake[0]->Location.Y) + ")";
}

//реализация событий
System::Void snakewinform::MyForm::новаяИграToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	NewGame();
}

System::Void snakewinform::MyForm::паузаПродолжитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (play) {
		play = false;
	}
	else
	{
		play = true;
		timer->Start();
	}

	return System::Void();
	
}

System::Void snakewinform::MyForm::настройкиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (GameSettings->Visible == false) {
		//приостановить игру
		play = false;

		Applay->Enabled = true;
		SnakeSpeed->Enabled = true;
		GameSettings->Visible = true;
	}
	else {
		//запустить игру
		play = true;
		timer->Start();

		Applay->Enabled = false;
		SnakeSpeed->Enabled = false;
		GameSettings->Visible = false;
	}
}

System::Void snakewinform::MyForm::информацияОбИгреToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (play) {
		play = false;
	}
	MessageBox::Show("Правила игры:\n1. Для управления используйте стрелки\n2. Ешьте фрукты чтобы расти\n3. Нельзя есть себя и врезаться в стены.", "Правила игры!");

	return System::Void();
}

System::Void snakewinform::MyForm::выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void snakewinform::MyForm::Applay_Click(System::Object^ sender, System::EventArgs^ e)
{
	updateInterval = Convert::ToSingle(SnakeSpeed->Value);
	timer->Interval = updateInterval;

	Applay->Enabled = false;
	SnakeSpeed->Enabled = false;
	GameSettings->Visible = false;

	//запускаем игру
	play = true;
	timer->Start();

	return System::Void();
}

System::Void snakewinform::MyForm::MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	//считываем нажатую клавишу
	if (e->KeyCode.ToString() == "Right")
	{
		if (direction.X != -1)
		{
			direction.X = 1;
			direction.Y = 0;
		}

	}
	else if (e->KeyCode.ToString() == "Left") 
	{
		if (direction.X != 1)
		{
			direction.X = -1;
			direction.Y = 0;
		}
		
	}
	else if (e->KeyCode.ToString() == "Up") 
	{
		if (direction.Y != 1)
		{
			direction.Y = -1;
			direction.X = 0;
		}
		
	}
	else if (e->KeyCode.ToString() == "Down") 
	{
		if (direction.Y != -1)
		{
			direction.Y = 1;
			direction.X = 0;
		}
		
	}

	return System::Void();
}

void snakewinform::MyForm::GameForm_Update(Object^ obgect, EventArgs^ e)
{
	if (!die && play)
	{
		Movement();//задает движение змейки
		Eating();//проверка что съели фрукт
		EatYourself();//проверка что съели себя
		CheckBorders();//проверка на столкновение со стеной 
	}
	else if (die && play)
	{
		timer->Stop();
		MessageBox::Show("Игра окончена!", "Внимание!");
	}
	else if (!play && !die)
	{
		timer->Stop();
		MessageBox::Show("Игра приостановлена!", "Внимание!");
	}
}