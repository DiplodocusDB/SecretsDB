/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/DiplodocusDB/SecretsDB/blob/main/LICENSE.txt
*/

#include "EmbeddedSecretsDBTests.h"
#include "DiplodocusDB/SecretsDB/EmbeddedSecretsDB/EmbeddedSecretsDB.h"

using namespace Ishiko::Tests;

EmbeddedSecretsDBTests::EmbeddedSecretsDBTests(const TestNumber& number, const TestEnvironment& environment)
    : TestSequence(number, "EmbeddedSecretsDB tests", environment)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
    append<FileComparisonTest>("create test 1", CreateTest1);
}

void EmbeddedSecretsDBTests::ConstructorTest1(Test& test)
{
    DiplodocusDB::EmbeddedSecretsDB db;

    ISHTF_PASS();
}

void EmbeddedSecretsDBTests::CreateTest1(FileComparisonTest& test)
{
    boost::filesystem::path outputPath(test.environment().getTestOutputDirectory() / "EmbeddedSecretsDBTests_CreateTest1.dpdb");

    Ishiko::Error error;

    DiplodocusDB::EmbeddedSecretsDB db;
    db.create(outputPath, error);

    ISHTF_FAIL_IF(error);

    db.close();

    test.setOutputFilePath(outputPath);
    test.setReferenceFilePath(test.environment().getReferenceDataDirectory() / "EmbeddedSecretsDBTests_CreateTest1.dpdb");

    ISHTF_PASS();
}
