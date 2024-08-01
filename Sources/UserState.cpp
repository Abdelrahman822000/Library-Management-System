#include "Headers/UserState.h"

// Constructor
UserState::UserState()
{}

// Method to get the user's name
QString UserState::getName() const
{
    return m_name;
}

// Method to get the user's password
QString UserState::getPassword() const
{
    return m_password;
}

// Method to set the user's name
void UserState::setName(const QString& name)
{
    m_name = name;
}

// Method to set the user's password
void UserState::setPassword(const QString& password)
{
    m_password = password;
}
