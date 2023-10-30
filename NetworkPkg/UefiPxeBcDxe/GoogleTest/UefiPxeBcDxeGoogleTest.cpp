/** @file
  Acts as the main entry point for the tests for the UefiPxeBcDxe module.
  Copyright (c) Microsoft Corporation
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/
#include <gtest/gtest.h>

////////////////////////////////////////////////////////////////////////////////
// Add test files here
// Google Test will only pick up the tests from the files that are included
// here.
////////////////////////////////////////////////////////////////////////////////
#include "PxeBcDhcp6GoogleTest.cpp"

////////////////////////////////////////////////////////////////////////////////
// Run the tests
////////////////////////////////////////////////////////////////////////////////
int
main (
  int   argc,
  char  *argv[]
  )
{
  testing::InitGoogleTest (&argc, argv);
  return RUN_ALL_TESTS ();
}
