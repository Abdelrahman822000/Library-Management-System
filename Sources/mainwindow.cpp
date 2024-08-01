#include "Headers\mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

// Constructor for MainWindow
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this); // Set up the user interface

    msgBox = new QMessageBox(this);

    // Load and scale the logo image, then set it to label_34
    QPixmap Pix("../../../Logos/Logo.jpg");

    if (Pix.isNull())
    {
        qWarning() << "Failed to load the image"; // Log a warning if the image fails to load
    }
    else
    {
        qDebug() << "Image loaded successfully"; // Log success if the image loads correctly
    }

    int w = ui->label_34->width(); // Get the width of label_2
    int h = ui->label_34->height(); // Get the height of label_2
    ui->label_34->setPixmap(Pix.scaled(w, h, Qt::KeepAspectRatio)); // Scale and set the image to label_34

    Memento = new UserState();
    ui->tabWidget->setCurrentIndex(0);
    ui->tabWidget->setTabEnabled(0, true); // Enable first tab
    ui->tabWidget->setTabEnabled(1, false); // Disable second tab
    ui->tabWidget->setTabEnabled(2, false); // Disable third tab
}

// Destructor for MainWindow
MainWindow::~MainWindow()
{
    delete ui; // Clean up UI object
    delete Memento; // Clean up Memento object
}

void MainWindow::showMessageBox(QString title, QString text, QMessageBox::Icon icon, QMessageBox::StandardButton button)
{
    msgBox->setWindowTitle(title);        // Set the title of the message box
    msgBox->setText(text);                // Set the text of the message box
    msgBox->setIcon(icon);                // Set the icon of the message box
    msgBox->setStandardButtons(button);  // Set the standard buttons of the message box
    msgBox->adjustSize();                 // Adjust the size of the message box
    msgBox->exec();                       // Show the message box
}

// Slot for Login button click event
void MainWindow::on_LoginButton_clicked()
{
    bool WrongFlag = true; // Flag to check if login credentials are wrong
    QString Name = ui->NamelineEdit_5->text(); // Get the name from the input field
    QString Password = ui->PasslineEdit_11->text(); // Get the password from the input field

    if(Name.isEmpty() || Password.isEmpty())
    {
        showMessageBox("Invalid Input", "Please fill all the fields correctly.", QMessageBox::Warning, QMessageBox::Ok);
        return;
    }
    qDebug() << "Name: " << Name << "Password: " << Password << Qt::endl;

    QFile file("../../../DataBase/LoginDB.json"); // Open the JSON file containing user data
    if (!file.open(QIODevice::ReadOnly)) // Check if the file opens successfully
    {
        qWarning() << "Couldn't open users file.";
    }

    QByteArray data = file.readAll(); // Read all data from the file
    QJsonDocument doc(QJsonDocument::fromJson(data)); // Parse JSON document
    QJsonArray users = doc.array(); // Get JSON array of users
    file.close(); // Close the file

    // Loop through all users in the JSON array
    foreach (const QJsonValue &value, users)
    {
        QJsonObject obj = value.toObject();
        qDebug() << "Name: " << obj["UserName"].toString() << "Password: " << obj["Password"].toString() << "Auth: " << obj["Auth"].toString() << Qt::endl;

        // Check if username and password match
        if (obj["UserName"].toString() == Name && obj["Password"].toString() == Password)
        {
            WrongFlag = false;

            // Check if user is an admin or a regular user
            if(obj["Auth"].toString() == "User")
            {
                showMessageBox("Login Done as user", "Hello " + Name + ", Welcome to Library Management System.", QMessageBox::Information, QMessageBox::Ok);
                qDebug() << "user" << Qt::endl;
                ui->tabWidget->setTabEnabled(0, false);
                ui->tabWidget->setTabEnabled(1, false);
                ui->tabWidget->setTabEnabled(2, true);
                ui->tabWidget->setCurrentIndex(2);
            }
            else if(obj["Auth"].toString() == "Admin")
            {
                showMessageBox("Login Done as admin", "Hello " + Name + ", Welcome to Library Management System.", QMessageBox::Information, QMessageBox::Ok);
                qDebug() << "admin" << Qt::endl;
                ui->tabWidget->setTabEnabled(0, false);
                ui->tabWidget->setTabEnabled(1, true);
                ui->tabWidget->setTabEnabled(2, false);
                ui->tabWidget->setCurrentIndex(1);
            }
            break;
        }
    }

    // Handle wrong username or password
    if(WrongFlag)
    {
        showMessageBox("Wrong Username or Password", "Check your username or password and try again.", QMessageBox::Warning, QMessageBox::Ok);
        ui->NamelineEdit_5->clear();
        ui->PasslineEdit_11->clear();
    }
    else
    {
        ui->NamelineEdit_5->clear();
        ui->PasslineEdit_11->clear();
    }
}

// Slot for Exit button click event on admin tab
void MainWindow::on_Exit_clicked()
{
    ui->listWidget->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_6->clear();
    ui->lineEdit_7->clear();
    ui->lineEdit_8->clear();
    ui->lineEdit_9->clear();
    ui->lineEdit_10->clear();
    ui->tabWidget->setTabEnabled(0, true);
    ui->tabWidget->setTabEnabled(1, false);
    ui->tabWidget->setTabEnabled(2, false);
    ui->tabWidget->setCurrentIndex(0);
}

// Slot for Exit button click event on user tab
void MainWindow::on_Exit_2_clicked()
{
    ui->listWidget_2->clear();
    ui->lineEdit_4->clear();
    ui->tabWidget->setTabEnabled(0, true);
    ui->tabWidget->setTabEnabled(1, false);
    ui->tabWidget->setTabEnabled(2, false);
    ui->tabWidget->setCurrentIndex(0);
}

// Slot for Search button click event on admin tab
void MainWindow::on_SearchButton_clicked()
{
    bool BookFound = false; // Flag to check if the book is found
    QString Title = ui->lineEdit_3->text(); // Get the title from the input field
    QString Filter = ui->comboBox_2->currentText(); // Get the filter from the combo box
    QFile file("../../../Library/Library.json"); // Open the JSON file containing book data

    if (!file.open(QIODevice::ReadOnly)) // Check if the file opens successfully
    {
        qWarning() << "Couldn't open books file.";
    }

    QByteArray data = file.readAll(); // Read all data from the file
    QJsonDocument doc(QJsonDocument::fromJson(data)); // Parse JSON document
    QJsonArray users = doc.array(); // Get JSON array of books
    file.close(); // Close the file
    QStringList bookList;

    // Loop through all books in the JSON array
    foreach (const QJsonValue &value, users)
    {
        QJsonObject bookObject = value.toObject();

        // Check if the book matches the filter and title
        if(Title == "" && bookObject["category"].toString() == Filter)
        {
            BookFound = true;
            QString title = bookObject["title"].toString();
            QString author = bookObject["author"].toString();
            QString category = bookObject["category"].toString();
            QString barcode = bookObject["barcode"].toString();

            QString bookInfo = QString("Title: %1\nAuthor: %2\nCategory: %3\nBarcode: %4\n")
                                   .arg(title)
                                   .arg(author)
                                   .arg(category)
                                   .arg(barcode);

            bookList.append(bookInfo);
        }
        else if (bookObject["category"].toString() == Filter && bookObject["title"].toString() == Title)
        {
            BookFound = true;
            QString title = bookObject["title"].toString();
            QString author = bookObject["author"].toString();
            QString category = bookObject["category"].toString();
            QString barcode = bookObject["barcode"].toString();

            QString bookInfo = QString("Title: %1\nAuthor: %2\nCategory: %3\nBarcode: %4\n")
                                   .arg(title)
                                   .arg(author)
                                   .arg(category)
                                   .arg(barcode);

            bookList.append(bookInfo);

            QFile book("../../../Library/"+barcode+".txt");
            if (!book.open(QIODevice::ReadOnly))
            {
                qWarning() << "Couldn't open book file.";
            }

            QString bookContent = QString("Book: %1").arg(book.readAll());
            bookList.append(bookContent);
            break;
        }
    }

    // Handle book not found
    if(!BookFound)
    {
        bookList.append("Book not Found");
        showMessageBox("Search failed", "Book not Found.", QMessageBox::Warning, QMessageBox::Ok);
    }
    else
    {
        showMessageBox("Search done", "Book found successfully.", QMessageBox::Information, QMessageBox::Ok);
    }

    ui->listWidget->addItems(bookList);
    ui->lineEdit_3->clear();
}

// Slot for Add button click event on admin tab
void MainWindow::on_AddButton_clicked()
{
    QStringList bookList;

    // Retrieve input values from UI
    QString title = ui->lineEdit_6->text();
    QString category = ui->lineEdit_7->text();
    QString barcode = ui->lineEdit_8->text();
    QString author = ui->lineEdit_9->text();

    if(title.isEmpty() || category.isEmpty() || barcode.isEmpty() || author.isEmpty())
    {
        showMessageBox("Invalid Input", "Please fill all the fields correctly.", QMessageBox::Warning, QMessageBox::Ok);
        return;
    }

    // Open the JSON file that stores book information
    QFile file("../../../Library/Library.json");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qWarning() << "Couldn't open file";
        showMessageBox("Add failed", "Library file not found.", QMessageBox::Warning, QMessageBox::Ok);
        return;
    }

    // Read the file content into a QByteArray
    QByteArray jsonData = file.readAll();
    file.close();

    // Parse the JSON data
    QJsonDocument document = QJsonDocument::fromJson(jsonData);
    if (!document.isArray())
    {
        qWarning() << "JSON is not an array.";
        showMessageBox("Add failed", "Library data is corrupted.", QMessageBox::Warning, QMessageBox::Ok);
        return;
    }

    // Convert the JSON document to a JSON array
    QJsonArray jsonArray = document.array();

    // Check if the book title already exists in the JSON array
    for (const QJsonValue& value : jsonArray)
    {
        QJsonObject obj = value.toObject();
        if (obj["title"].toString().compare(title, Qt::CaseInsensitive) == 0)
        {
            showMessageBox("Add failed", "A book with this title already exists.", QMessageBox::Warning, QMessageBox::Ok);
            return;
        }
    }

    QJsonObject newBook;
    // Set the new book details
    newBook["title"] = title;
    newBook["category"] = category;
    newBook["barcode"] = barcode;
    newBook["author"] = author;

    // Check if the category is already in the combo boxes
    int index = ui->comboBox->findText(category);
    if (index == -1)
    {
        qDebug() << "Category not found in the combo box.";
        ui->comboBox->addItem(category);
    }
    else
    {
        qDebug() << "Category found at index: " << index;
    }

    index = ui->comboBox_2->findText(category);
    if (index == -1)
    {
        qDebug() << "Category not found in the combo box.";
        ui->comboBox_2->addItem(category);
    }
    else
    {
        qDebug() << "Category found at index: " << index;
    }

    // Add the new book object to the JSON array
    jsonArray.append(newBook);

    // Open the file again to write the updated JSON array
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qWarning() << "Couldn't open file";
        showMessageBox("Add failed", "Library file not found.", QMessageBox::Warning, QMessageBox::Ok);
        return;
    }

    // Create a new JSON document with the updated array and write it to the file
    QJsonDocument document1(jsonArray);
    file.write(document1.toJson());
    file.close();

    // Prepare a string with the new book information for display
    QString bookInfo = QString("New book added\n Title: %1\nAuthor: %2\nCategory: %3\nBarcode: %4\n")
                           .arg(title)
                           .arg(author)
                           .arg(category)
                           .arg(barcode);

    // Add the new book information to the book list
    bookList.append(bookInfo);

    // Create a new file for the book's content
    QFile book("../../../Library/" + barcode + ".txt");
    if (!book.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qWarning() << "Couldn't open file for writing";
    }
    QTextStream out(&book);
    out << title << " - Page 1" << Qt::endl << "content" << Qt::endl;

    // Close the book file
    book.close();

    // Add the new book information to the list widget in the UI
    ui->listWidget->addItems(bookList);

    showMessageBox("Add done", "Book added successfully.", QMessageBox::Information, QMessageBox::Ok);

    // Clear the input fields in the UI
    ui->lineEdit_6->clear();
    ui->lineEdit_7->clear();
    ui->lineEdit_8->clear();
    ui->lineEdit_9->clear();
}



// Slot for Remove button click event on admin tab
void MainWindow::on_Remove_clicked()
{
    bool BookFound = false;

    QString Barcode = ui->lineEdit_10->text();

    if(Barcode.isEmpty())
    {
        showMessageBox("Invalid Input", "Please fill all the fields correctly.", QMessageBox::Warning, QMessageBox::Ok);
        return;
    }

    QStringList bookList;
    QFile file("../../../Library/Library.json");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qWarning() << "Couldn't open file";
        return;
    }

    QByteArray jsonData = file.readAll();
    file.close();

    QJsonDocument document = QJsonDocument::fromJson(jsonData);
    if (!document.isArray())
    {
        qWarning() << "JSON is not an array.";
    }

    QJsonArray jsonArray = document.array();

    for (int i = 0; i < jsonArray.size(); i++)
    {
        QJsonObject bookObject = jsonArray[i].toObject();
        if (bookObject["barcode"].toString() == Barcode)
        {
            QString bookInfo = QString("Book Removed\n Title: %1\nAuthor: %2\nCategory: %3\nBarcode: %4\n")
                                   .arg(jsonArray.at(i)["title"].toString())
                                   .arg(jsonArray.at(i)["author"].toString())
                                   .arg(jsonArray.at(i)["category"].toString())
                                   .arg(jsonArray.at(i)["barcode"].toString());
            bookList.append(bookInfo);

            jsonArray.removeAt(i);

            BookFound = true;
        }
    }

    // Handle book not found
    if(!BookFound)
    {
        bookList.append("Book not Found\n");
        showMessageBox("Remove failed", "Book not found.", QMessageBox::Warning, QMessageBox::Ok);
    }
    else
    {
        showMessageBox("Remove done", "Removed book.", QMessageBox::Information, QMessageBox::Ok);

        if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        {
            qWarning() << "Couldn't open file";
        }

        QJsonDocument document(jsonArray);
        file.write(document.toJson());
        file.close();
    }

    // Check if the file exists
    if (QFile::exists("../../../Library/"+Barcode+".txt"))
    {
        // Try to remove the file
        if (QFile::remove("../../../Library/"+Barcode+".txt"))
        {
            qDebug() << "File deleted successfully.";
        }
        else
        {
            qWarning() << "File could not be deleted.";
        }
    }
    else
    {
        qWarning() << "File does not exist.";
    }

    ui->listWidget->addItems(bookList);
    ui->lineEdit_10->clear();
}

// Slot for Clear button click event on admin tab
void MainWindow::on_Clear_clicked()
{
    ui->listWidget->clear();
}

// Slot for Search button click event on user tab
void MainWindow::on_SearchButton_2_clicked()
{
    bool BookFound = false;
    QString Title = ui->lineEdit_4->text();
    QString Filter = ui->comboBox->currentText();
    QFile file("../../../Library/Library.json");

    if (!file.open(QIODevice::ReadOnly))
    {
        qWarning() << "Couldn't open books file.";
    }

    QByteArray data = file.readAll();
    QJsonDocument doc(QJsonDocument::fromJson(data));
    QJsonArray users = doc.array();
    file.close();
    QStringList bookList;

    // Loop through all books in the JSON array
    foreach (const QJsonValue &value, users)
    {
        QJsonObject bookObject = value.toObject();

        // Check if the book matches the filter and title
        if(Title == "" && bookObject["category"].toString() == Filter)
        {
            BookFound = true;
            QString title = bookObject["title"].toString();
            QString author = bookObject["author"].toString();
            QString category = bookObject["category"].toString();
            QString barcode = bookObject["barcode"].toString();

            QString bookInfo = QString("Title: %1\nAuthor: %2\nCategory: %3\nBarcode: %4\n")
                                   .arg(title)
                                   .arg(author)
                                   .arg(category)
                                   .arg(barcode);

            bookList.append(bookInfo);
        }
        else if (bookObject["category"].toString() == Filter && bookObject["title"].toString() == Title)
        {
            BookFound = true;
            QString title = bookObject["title"].toString();
            QString author = bookObject["author"].toString();
            QString category = bookObject["category"].toString();
            QString barcode = bookObject["barcode"].toString();

            QString bookInfo = QString("Title: %1\nAuthor: %2\nCategory: %3\nBarcode: %4\n")
                                   .arg(title)
                                   .arg(author)
                                   .arg(category)
                                   .arg(barcode);

            bookList.append(bookInfo);

            QFile book("../../../Library/"+barcode+".txt");
            if (!book.open(QIODevice::ReadOnly))
            {
                qWarning() << "Couldn't open book file.";
            }

            QString bookContent = QString("Book: %1").arg(book.readAll());
            bookList.append(bookContent);
            break;
        }
    }

    // Handle book not found
    if(!BookFound)
    {
        bookList.append("Book not Found");
    }

    ui->listWidget_2->addItems(bookList);
    ui->lineEdit_4->clear();
}

// Slot for Clear button click event on user tab
void MainWindow::on_Clear_2_clicked()
{
    ui->listWidget_2->clear();
}

// Slot for Store button click event (save user state)
void MainWindow::on_Store_clicked()
{
    QString Name = ui->NamelineEdit_5->text();
    QString Password = ui->PasslineEdit_11->text();

    if(Name.isEmpty() || Password.isEmpty())
    {
        showMessageBox("Invalid Input", "Please fill all the fields correctly.", QMessageBox::Warning, QMessageBox::Ok);
        return;
    }

    Memento->setName(Name);
    Memento->setPassword(Password);
}

// Slot for Restore button click event (restore user state)
void MainWindow::on_Restore_clicked()
{
    QString Name = Memento->getName();
    QString Password = Memento->getPassword();

    if(Name.isEmpty() || Password.isEmpty())
    {
        showMessageBox("No Data", "No data stored.", QMessageBox::Warning, QMessageBox::Ok);
        return;
    }

    ui->NamelineEdit_5->setText(Name);
    ui->PasslineEdit_11->setText(Password);
}

// Slot for Remove button click event (clear user state)
void MainWindow::on_Remove_2_clicked()
{
    ui->NamelineEdit_5->clear();
    ui->PasslineEdit_11->clear();
}

// Slot for combo box current text change event on admin tab
void MainWindow::on_comboBox_2_currentTextChanged(const QString &arg1)
{
    ui->listWidget->clear();

    bool CategoryFound = false;
    QString Filter = arg1;
    QFile file("../../../Library/Library.json");

    if (!file.open(QIODevice::ReadOnly))
    {
        qWarning() << "Couldn't open books file.";

    }

    QByteArray data = file.readAll();
    QJsonDocument doc(QJsonDocument::fromJson(data));
    QJsonArray users = doc.array();
    file.close();
    QStringList bookList;

    // Loop through all books in the JSON array
    foreach (const QJsonValue &value, users)
    {
        QJsonObject bookObject = value.toObject();
        if (bookObject["category"].toString() == Filter)
        {
            CategoryFound = true;
            QString title = bookObject["title"].toString();
            QString author = bookObject["author"].toString();
            QString category = bookObject["category"].toString();
            QString barcode = bookObject["barcode"].toString();

            QString bookInfo = QString("Title: %1\nAuthor: %2\nCategory: %3\nBarcode: %4\n")
                                   .arg(title)
                                   .arg(author)
                                   .arg(category)
                                   .arg(barcode);

            bookList.append(bookInfo);
        }
    }

    // Handle category not found
    if(!CategoryFound)
    {
        bookList.append("Category not Found");
    }

    ui->listWidget->addItems(bookList);
}

// Slot for combo box current text change event on user tab
void MainWindow::on_comboBox_currentTextChanged(const QString &arg1)
{
    ui->listWidget_2->clear();

    bool CategoryFound = false;
    QString Filter = arg1;
    QFile file("../../../Library/Library.json");

    if (!file.open(QIODevice::ReadOnly))
    {
        qWarning() << "Couldn't open books file.";
    }

    QByteArray data = file.readAll();
    QJsonDocument doc(QJsonDocument::fromJson(data));
    QJsonArray users = doc.array();
    file.close();
    QStringList bookList;

    // Loop through all books in the JSON array
    foreach (const QJsonValue &value, users)
    {
        QJsonObject bookObject = value.toObject();
        if (bookObject["category"].toString() == Filter)
        {
            CategoryFound = true;
            QString title = bookObject["title"].toString();
            QString author = bookObject["author"].toString();
            QString category = bookObject["category"].toString();
            QString barcode = bookObject["barcode"].toString();

            QString bookInfo = QString("Title: %1\nAuthor: %2\nCategory: %3\nBarcode: %4\n")
                                   .arg(title)
                                   .arg(author)
                                   .arg(category)
                                   .arg(barcode);

            bookList.append(bookInfo);
        }
    }

    // Handle category not found
    if(!CategoryFound)
    {
        bookList.append("Category not Found");
    }

    ui->listWidget_2->addItems(bookList);
}

