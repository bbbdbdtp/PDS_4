#include "pch.h"
#include "CppUnitTest.h"
#include "../PDS_4/Main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1 {
	TEST_CLASS(UnitTest1) {
	public:
        TEST_METHOD(TestLexicographicPermutations) {
            std::ostringstream output;
            std::streambuf* oldCoutBuffer = std::cout.rdbuf(output.rdbuf());

            lexicographicPermutations(3);

            std::cout.rdbuf(oldCoutBuffer);

            std::string strOutput = output.str();
            Assert::IsTrue(strOutput.find("permutation = {1, 2, 3}") != std::string::npos);
            Assert::IsTrue(strOutput.find("permutation = {1, 3, 2}") != std::string::npos);
            Assert::IsTrue(strOutput.find("permutation = {2, 1, 3}") != std::string::npos);
            Assert::IsTrue(strOutput.find("permutation = {2, 3, 1}") != std::string::npos);
            Assert::IsTrue(strOutput.find("permutation = {3, 1, 2}") != std::string::npos);
            Assert::IsTrue(strOutput.find("permutation = {3, 2, 1}") != std::string::npos);
        }
        TEST_METHOD(TestLexicographicCombinations) {
            std::ostringstream output;
            std::streambuf* oldCoutBuffer = std::cout.rdbuf(output.rdbuf());

            lexicographicCombinations(4, 2);

            std::cout.rdbuf(oldCoutBuffer);

            std::string strOutput = output.str();
            Assert::IsTrue(strOutput.find("combination = {1, 2}") != std::string::npos);
            Assert::IsTrue(strOutput.find("combination = {1, 3}") != std::string::npos);
            Assert::IsTrue(strOutput.find("combination = {1, 4}") != std::string::npos);
            Assert::IsTrue(strOutput.find("combination = {2, 3}") != std::string::npos);
            Assert::IsTrue(strOutput.find("combination = {2, 4}") != std::string::npos);
            Assert::IsTrue(strOutput.find("combination = {3, 4}") != std::string::npos);
        }
	};
}