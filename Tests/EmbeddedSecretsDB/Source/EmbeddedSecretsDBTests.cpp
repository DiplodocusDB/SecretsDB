/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/DiplodocusDB/SecretsDB/blob/main/LICENSE.txt
*/

#include "EmbeddedSecretsDBTests.h"

using namespace Ishiko::Tests;

EmbeddedSecretsDBTests::EmbeddedSecretsDBTests(const TestNumber& number, const TestEnvironment& environment)
    : TestSequence(number, "EmbeddedSecretsDB tests", environment)
{
}
