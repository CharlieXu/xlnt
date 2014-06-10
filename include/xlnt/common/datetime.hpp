// Copyright (c) 2014 Thomas Fussell
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, WRISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE
//
// @license: http://www.opensource.org/licenses/mit-license.php
// @author: see AUTHORS file
#pragma once

#include <string>

namespace xlnt {

struct date
{
    date(int year, int month, int day)
        : year(year), month(month), day(day)
    {
    }

    int year;
    int month;
    int day;
};

struct time
{
    time(int hour = 0, int minute = 0, int second = 0, int microsecond = 0)
        : hour(hour), minute(minute), second(second), microsecond(microsecond)
    {
    }

    explicit time(long double number);
    explicit time(const std::string &time_string);

    double to_number() const;

    int hour;
    int minute;
    int second;
    int microsecond;
};

struct datetime
{
    static datetime now();

    datetime(int year, int month, int day, int hour = 0, int minute = 0, int second = 0, int microsecond = 0)
        : year(year), month(month), day(day), hour(hour), minute(minute), second(second), microsecond(microsecond)
    {
    }

    int year;
    int month;
    int day;
    int hour;
    int minute;
    int second;
    int microsecond;
};

} // namespace xlnt