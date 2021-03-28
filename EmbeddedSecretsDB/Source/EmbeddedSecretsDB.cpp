/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/DiplodocusDB/SecretsDB/blob/main/LICENSE.txt
*/

#include "EmbeddedSecretsDB.h"
#include "EmbeddedSecretsDBImpl.h"

namespace DiplodocusDB
{

EmbeddedSecretsDB::EmbeddedSecretsDB()
    : m_impl(new EmbeddedSecretsDBImpl())
{
}

EmbeddedSecretsDB::~EmbeddedSecretsDB()
{
    delete m_impl;
}

void EmbeddedSecretsDB::create(const boost::filesystem::path& path, Ishiko::Error& error)
{
    m_impl->create(path, error);
}

void EmbeddedSecretsDB::open(const boost::filesystem::path& path, Ishiko::Error& error)
{
    m_impl->open(path, error);
}

void EmbeddedSecretsDB::close()
{
    m_impl->close();
}

}
