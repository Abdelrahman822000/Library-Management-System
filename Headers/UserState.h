#ifndef USERSTATE_H
#define USERSTATE_H

#include <QString>

// UserState class to represent the state of a user
class UserState
{
public:
    // Constructor
    UserState();

    // Getter method to retrieve the user's name
    QString getName() const;

    // Getter method to retrieve the user's password
    QString getPassword() const;

    // Setter method to set the user's name
    void setName(const QString& name);

    // Setter method to set the user's password
    void setPassword(const QString& password);

private:
    // Member variable to store the user's name
    QString m_name;

    // Member variable to store the user's password
    QString m_password;
};

#endif // USERSTATE_H
