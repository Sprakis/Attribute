#include <iostream>
#include <string>
using namespace std;
class man
{
public:
	string name,
		post;
};
class object
{
public:
	string name,
		host,
		type;
};
string user_list[5] = { "Roma","Dima","Maks","Diana","Golew" }, post_list[4] = {"Worker","Boss","Manager","Worker"};
int main()
{
	setlocale(LC_ALL, "ru");
#pragma region Perm
	man man;
	object object1, object2, object3;
	bool check_username,check_answer;
	string user,answer;
	int number, number2;
#pragma endregion
#pragma region object_construct
	object1.name = "text";
	object1.type = "txt";
	object1.host = "Golew";

	object2.name = "document";
	object2.type = "doc";
	object2.host = "Dima";

	object3.name = "game";
	object3.type = "exe";
	object3.host = "Maks";
#pragma endregion

	check_username = false;
	while (true)
	{
		while (check_username==false)
		{
			cout << "User: ";
			getline(cin, user);
			if (user.length() == 0)
			{
				cout << "Выход!";
				system("pause");
				return 0;
			}
			else
			{
				check_username = false;
				for (int i = 0; i < 5; i++)
				{
					if (user_list[i] == user)
					{
						check_username = true;
						man.name = user;
					}
				}
				if (check_username == false)
				{
					cout << "Данный пользователь не зарегестрирован!\n";
				}
			}
		}
		check_username = false;
		if (man.name == "Roma")
		{
			man.post = post_list[0];
		}
		else
		{
			if (man.name == "Dima")
			{
				man.post = post_list[1];
			}
			else
			{
				if (man.name == "Maks")
				{
					man.post = post_list[2];
				}
				else
				{
					if (man.name == "Golew")
					{
						man.post = post_list[3];
					}
					else
					{
						man.post = post_list[3];
					}
				}
			}
		}
		cout << "Идентификация прошла успешно, добро пожаловать в систему.\n\nПеречень доступных объектов:\n";
#pragma region object1
		cout << "object_1: " << object1.name << "." << object1.type;
		if (man.post == "Guest")
		{
			//Гость
			cout << " чтение\n";
		}
		else
		{
			if (man.post == "Boss")
			{
				//Босс
				cout << " чтение, запись\n";
			}
			else
			{
				if (man.post == "Manager")
				{
					//Манагер
					if (object1.host == "Dima")
					{
						cout << " чтение\n";
					}
					else
					{
						cout << " чтение, запись\n";
					}
				}
				else
				{
					if (man.post == "Worker")
					{
						//Работник
						if (object1.type == "doc")
						{
							cout << " чтение\n";
						}
						else
						{
							if (object1.host == man.name)
							{
								cout << " чтение, запись\n";
							}
							else
							{
								cout << " чтение\n";
							}
						}
					}
				}
			}
		}
#pragma endregion
#pragma region object2
		cout << "object_2: " << object2.name << "." << object2.type;
		if (man.post == "Guest")
		{
			//Гость
			cout << " чтение\n";
		}
		else
		{
			if (man.post == "Boss")
			{
				//Босс
				cout << " чтение, запись\n";
			}
			else
			{
				if (man.post == "Manager")
				{
					//Манагер
					if (object2.host == "Dima")
					{
						cout << " чтение\n";
					}
					else
					{
						cout << " чтение, запись\n";
					}
				}
				else
				{
					if (man.post == "Worker")
					{
						//Работник
						if (object2.type == "doc")
						{
							cout << " чтение\n";
						}
						else
						{
							if (object2.host == man.name)
							{
								cout << " чтение, запись\n";
							}
							else
							{
								cout << " чтение\n";
							}
						}
					}
				}
			}
		}
#pragma endregion
#pragma region object3
		cout << "object_3: " << object3.name << "." << object3.type;
		if (man.post == "Guest")
		{
			//Гость
			cout << " чтение\n";
		}
		else
		{
			if (man.post == "Boss")
			{
				//Босс
				cout << " чтение, запись\n";
			}
			else
			{
				if (man.post == "Manager")
				{
					//Манагер
					if (object3.host == "Dima")
					{
						cout << " чтение\n";
					}
					else
					{
						cout << " чтение, запись\n";
					}
				}
				else
				{
					if (man.post == "Worker")
					{
						//Работник
						if (object3.type == "doc")
						{
							cout << " чтение\n";
						}
						else
						{
							if (object3.host == man.name)
							{
								cout << " чтение, запись\n";
							}
							else
							{
								cout << " чтение\n";
							}
						}
					}
				}
			}
		}
#pragma endregion
		cout << "Ваша роль: " << man.post<<endl<<"Жду ваших указаний > ";
		getline(cin, answer);
		if (answer.length() == 0)
		{
			check_answer = false;
			while (check_answer == false)
			{
				cout << "\nЖду ваших указаний > ";
				getline(cin, answer);
				if (answer.length() != 0)
				{
					check_answer = true;
				}
			}
		}
		if (check_answer = true)
		{
			if (answer == "quit")
			{
				cout << "Работа пользователя " << man.name << " завершена. До свидания!\n";
			}
			else
			{
				if (answer == "grant")
				{
					if (man.post == "Guest")
					{
						cout << "В операции отказано!\n";
					}
					else
					{
						if (man.post == "Worker")
						{
							cout << "В операции отказано!\n";
						}
						else
						{
							cout << "Какому пользователю вы хотите передать роль?\n1)Roma\n2)Dima\n3)Maks\n4)Diana\n5)Golew\nНомер: ";
							cin >> number;
							switch (number)
							{
							case 1:
								cout << "Какую роль вы хотите ему добавить?";
								if (man.post == "Manager")
								{
									cout << "\n1)Guest\n2)Worker\nНомер: ";
									cin >> number2;
									switch (number2)
									{
									case 1:
										post_list[number] = "Guest";
										cout << "Операция прошла успешно!\n";
										break;
									case 2:
										post_list[number] = "Worker";
										cout << "Операция прошла успешно!\n";
										break;
									}
								}
								else
								{
									cout << "\n1)Guest\n2)Worker\n3)Manager\n4)Boss\nНомер: ";
									cin >> number2;
									switch (number2)
									{
									case 1:
										post_list[number] = "Guest";
										cout << "Операция прошла успешно!\n";
										break;
									case 2:
										post_list[number] = "Worker";
										cout << "Операция прошла успешно!\n";
										break;
									case 3:
										post_list[number] = "Manager";
										cout << "Операция прошла успешно!\n";
										break;
									case 4:
										post_list[number] = "Boss";
										cout << "Операция прошла успешно!\n";
										break;
									}
								}
									break;
							case 2:
								cout << "Какую роль вы хотите ему добавить?";
								if (man.post == "Manager")
								{
									cout << "\n1)Guest\n2)Worker\nНомер: ";
									cin >> number2;
									switch (number2)
									{
									case 1:
										post_list[number] = "Guest";
										cout << "Операция прошла успешно!\n";
										break;
									case 2:
										post_list[number] = "Worker";
										cout << "Операция прошла успешно!\n";
										break;
									}
								}
								else
								{
									cout << "\n1)Guest\n2)Worker\n3)Manager\n4)Boss\nНомер: ";
									cin >> number2;
									switch (number2)
									{
									case 1:
										post_list[number] = "Guest";
										cout << "Операция прошла успешно!\n";
										break;
									case 2:
										post_list[number] = "Worker";
										cout << "Операция прошла успешно!\n";
										break;
									case 3:
										post_list[number] = "Manager";
										cout << "Операция прошла успешно!\n";
										break;
									case 4:
										post_list[number] = "Boss";
										cout << "Операция прошла успешно!\n";
										break;
									}
								}
								break;
							case 3:
								cout << "Какую роль вы хотите ему добавить?";
								if (man.post == "Manager")
								{
									cout << "\n1)Guest\n2)Worker\nНомер: ";
									cin >> number2;
									switch (number2)
									{
									case 1:
										post_list[number] = "Guest";
										cout << "Операция прошла успешно!\n";
										break;
									case 2:
										post_list[number] = "Worker";
										cout << "Операция прошла успешно!\n";
										break;
									}
								}
								else
								{
									cout << "\n1)Guest\n2)Worker\n3)Manager\n4)Boss\nНомер: ";
									cin >> number2;
									switch (number2)
									{
									case 1:
										post_list[number] = "Guest";
										cout << "Операция прошла успешно!\n";
										break;
									case 2:
										post_list[number] = "Worker";
										cout << "Операция прошла успешно!\n";
										break;
									case 3:
										post_list[number] = "Manager";
										cout << "Операция прошла успешно!\n";
										break;
									case 4:
										post_list[number] = "Boss";
										cout << "Операция прошла успешно!\n";
										break;
									}
								}
								break;
							case 4:
								cout << "Какую роль вы хотите ему добавить?";
								if (man.post == "Manager")
								{
									cout << "\n1)Guest\n2)Worker\nНомер: ";
									cin >> number2;
									switch (number2)
									{
									case 1:
										post_list[number] = "Guest";
										cout << "Операция прошла успешно!\n";
										break;
									case 2:
										post_list[number] = "Worker";
										cout << "Операция прошла успешно!\n";
										break;
									}
								}
								else
								{
									cout << "\n1)Guest\n2)Worker\n3)Manager\n4)Boss\nНомер: ";
									cin >> number2;
									switch (number2)
									{
									case 1:
										post_list[number] = "Guest";
										cout << "Операция прошла успешно!\n";
										break;
									case 2:
										post_list[number] = "Worker";
										cout << "Операция прошла успешно!\n";
										break;
									case 3:
										post_list[number] = "Manager";
										cout << "Операция прошла успешно!\n";
										break;
									case 4:
										post_list[number] = "Boss";
										cout << "Операция прошла успешно!\n";
										break;
									}
								}
								break;
							case 5:
								cout << "Какую роль вы хотите ему добавить?";
								if (man.post == "Manager")
								{
									cout << "\n1)Guest\n2)Worker\nНомер: ";
									cin >> number2;
									switch (number2)
									{
									case 1:
										post_list[number] = "Guest";
										cout << "Операция прошла успешно!\n";
										break;
									case 2:
										post_list[number] = "Worker";
										cout << "Операция прошла успешно!\n";
										break;
									}
								}
								else
								{
									cout << "\n1)Guest\n2)Worker\n3)Manager\n4)Boss\nНомер: ";
									cin >> number2;
									switch (number2)
									{
									case 1:
										post_list[number] = "Guest";
										cout << "Операция прошла успешно!\n";
										break;
									case 2:
										post_list[number] = "Worker";
										cout << "Операция прошла успешно!\n";
										break;
									case 3:
										post_list[number] = "Manager";
										cout << "Операция прошла успешно!\n";
										break;
									case 4:
										post_list[number] = "Boss";
										cout << "Операция прошла успешно!\n";
										break;
									}
								}
								break;
							}
						}
					}
				}
				else
				{
					if (answer == "read")
					{
						cout << "Операция прошла успешно!\n";
					}
					else
					{
						if (answer == "write")
						{
							cout << "В какой объект вы хотите сделать запись?\n1)Объект1\n2)Объект2\n3)Объект3\nНомер объекта: ";
							cin >> number;
							if (man.post == "Guest")
							{
								cout << "В операции отказано!\n";
							}
							else
							{
								if (man.post == "Boss")
								{
									cout << "Операция прошла успешно!\n";
								}
								else
								{
									if (man.post == "Manager")
									{
										switch (number)
										{
										case 1:
											if (object1.host == "Dima")
											{
												cout << "В операции отказано!\n";
											}
											else
											{
												cout << "Операция прошла успешно!\n";
											}
											break;
										case 2:
											if (object2.host == "Dima")
											{
												cout << "В операции отказано!\n";
											}
											else
											{
												cout << "Операция прошла успешно!\n";
											}
											break;
										case 3:
											if (object3.host == "Dima")
											{
												cout << "В операции отказано!\n";
											}
											else
											{
												cout << "Операция прошла успешно!\n";
											}
											break;
										}
									}
									else
									{
										if (man.post == "Worker")
										{
											switch (number)
											{
											case 1:
												if (object1.type == "doc")
												{
													cout << "В операции отказано!\n";
												}
												else
												{
													if (object1.host != man.name)
													{
														cout << "В операции отказано!\n";
													}
													else
													{
														cout << "Операция прошла успешно!\n";
													}
												}
												break;
											case 2:
												if (object2.type == "doc")
												{
													cout << "В операции отказано!\n";
												}
												else
												{
													if (object2.host != man.name)
													{
														cout << "В операции отказано!\n";
													}
													else
													{
														cout << "Операция прошла успешно!\n";
													}
												}
												break;
											case 3:
												if (object3.type == "doc")
												{
													cout << "В операции отказано!\n";
												}
												else
												{
													if (object3.host != man.name)
													{
														cout << "В операции отказано!\n";
													}
													else
													{
														cout << "Операция прошла успешно!\n";
													}
												}
												break;
											}
										}
									}
								}
							}
						}
						else
						{
							cout << "\nТакой командый не найдено!\n";
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}
