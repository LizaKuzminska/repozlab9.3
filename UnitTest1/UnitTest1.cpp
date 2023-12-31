﻿#include "pch.h"
#include "CppUnitTest.h"
#include "../lab9.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest93
{
    TEST_CLASS(UnitTest93)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            string name1 = "Lviv";
            string name2 = "Kyiv";
            Route* p = new Route[2];
            p[0].sname = "Lviv";
            p[0].ename = "Lutsk";
            p[0].rnum = 2;

            p[1].sname = "Odessa";
            p[1].ename = "Kyiv";
            p[1].rnum = 6;

            Sort(p, 2);
            Assert::AreEqual(p[0].sname, name1);


        }
    };
}
