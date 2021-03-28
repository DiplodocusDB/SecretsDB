/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/DiplodocusDB/SecretsDB/blob/main/LICENSE.txt
*/

#ifndef _DIPLODOCUSDB_TEST_SECRETSDB_EMBEDDEDSECRETSDBTESTS_H_
#define _DIPLODOCUSDB_TEST_SECRETSDB_EMBEDDEDSECRETSDBTESTS_H_

#include <Ishiko/TestFramework/TestFrameworkCore.h>

class EmbeddedSecretsDBTests : public Ishiko::Tests::TestSequence
{
public:
    EmbeddedSecretsDBTests(const Ishiko::Tests::TestNumber& number, const Ishiko::Tests::TestEnvironment& environment);
};

#endif
