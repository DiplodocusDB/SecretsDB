/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/DiplodocusDB/SecretsDB/blob/main/LICENSE.txt
*/

#include "EmbeddedSecretsDBTests.h"
#include <Ishiko/TestFramework/TestFrameworkCore.h>

using namespace Ishiko::Tests;

int main(int argc, char* argv[])
{
    TestHarness theTestHarness("DiplodocusEmbeddedSecretsDB");

    TestSequence& theTests = theTestHarness.tests();
    theTests.append<EmbeddedSecretsDBTests>();

    return theTestHarness.run();
}
