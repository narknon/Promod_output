/*******************************************************************************
The content of this file includes portions of the AUDIOKINETIC Wwise Technology
released in source code form as part of the SDK installer package.

Commercial License Usage

Licensees holding valid commercial licenses to the AUDIOKINETIC Wwise Technology
may use this file in accordance with the end user license agreement provided 
with the software or, alternatively, in accordance with the terms contained in a
written agreement between you and Audiokinetic Inc.

  Copyright (c) 2022 Audiokinetic Inc.
*******************************************************************************/

//////////////////////////////////////////////////////////////////////
//
// AkPlatformStreamingDefaults.h
//
// Platform-specific default values for streaming and I/O device settings.
//
//////////////////////////////////////////////////////////////////////

#pragma once

// I/O pool settings.

#define AK_DEFAULT_BLOCK_ALLOCATION_TYPE	(0)		// Default memory type.

#define AK_REQUIRED_IO_POOL_ALIGNMENT		(16)			// 16 bytes (see note above). User granularity is checked against this number.

