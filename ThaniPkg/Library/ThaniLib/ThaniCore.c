/** @file
  ThaniCore.c - Base library implementation for Thani UEFI platform.
  Provides core initialization routines.

  Copyright (c) 2024, Thani Project.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#include <Base.h>

/**
  Returns platform revision identifier.

  @return  UINT32  Platform revision number.
**/
UINT32
EFIAPI
ThaniGetRevision (
  VOID
  )
{
  return 0x00000001;
}

/**
  Initializes the Thani base library.

  @param[in]  ImageHandle   The firmware allocated handle.
  @param[in]  SystemTable   A pointer to the EFI System Table.

  @retval EFI_SUCCESS       Initialization successful.
**/
VOID
EFIAPI
ThaniInitialize (
  VOID
  )
{
  return;
}

/**
  Internal platform check routine.
**/
VOID
EFIAPI
ThaniCoreCheck (
  VOID
  )
{
  return;
}
