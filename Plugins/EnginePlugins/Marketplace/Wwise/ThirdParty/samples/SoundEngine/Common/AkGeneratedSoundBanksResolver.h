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

#pragma once

#include <AK/SoundEngine/Common/AkSoundEngine.h>
#include <AK/Tools/Common/AkPlatformFuncs.h>
#include <AK/SoundEngine/Common/AkStreamMgrModule.h>

namespace AK
{
	class StringBuilder
	{
	public:
		StringBuilder(AkOSChar* in_pBuffer, size_t in_uBufferSize)
			: m_pBuffer(in_pBuffer)
			, m_uBufferSize(in_uBufferSize)
			, m_uDataLength(0)
		{
			AKASSERT(in_uBufferSize > 0);
			in_pBuffer[0] = '\0';
		}

		AKRESULT Append(const AkOSChar* str, size_t length)
		{
			m_uDataLength += length;
			if (m_uDataLength < m_uBufferSize)
			{
				AKPLATFORM::SafeStrCat(m_pBuffer, str, m_uBufferSize);
				return AK_Success;
			}
			return AK_MaxReached;
		}

		inline AkOSChar* Buffer() { return m_pBuffer; }
		inline size_t BufferSize() { return m_uBufferSize; } const
		inline size_t Length() { return m_uDataLength; } const

		void Truncate(size_t uLength)
		{
			AKASSERT(uLength < m_uBufferSize);
			m_uDataLength = uLength;
			m_pBuffer[uLength] = '\0';
		}

	private:
		AkOSChar* m_pBuffer;
		size_t m_uBufferSize;
		size_t m_uDataLength;
	};

	void ConvertFileIdToFilename(AkOSChar* out_pszTitle, AkUInt32 in_pszTitleMaxLen, AkUInt32 in_codecId, AkFileID in_fileID);
	void ResolveGeneratedSoundBanksPath(StringBuilder &dest, const AkOSChar* in_pszFileName, AkFileSystemFlags * in_pFlags, bool bUseSubfoldering);
}
