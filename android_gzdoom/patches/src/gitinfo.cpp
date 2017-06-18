*** /home/draje/Code/gzdoom/src/gitinfo.cpp	2017-06-18 07:22:22.026240189 -0400
--- /home/draje/Code/GitHub/nvllsvm/GZDoom-Android/doom/src/main/jni/gzdoom21_pre/src/gitinfo.cpp	2017-06-18 09:09:24.165063945 -0400
***************
*** 1,65 ****
! /*
! ** gitinfo.cpp
! ** Returns strings from gitinfo.h.
! **
! **---------------------------------------------------------------------------
! ** Copyright 2013 Randy Heit
! ** All rights reserved.
! **
! ** Redistribution and use in source and binary forms, with or without
! ** modification, are permitted provided that the following conditions
! ** are met:
! **
! ** 1. Redistributions of source code must retain the above copyright
! **    notice, this list of conditions and the following disclaimer.
! ** 2. Redistributions in binary form must reproduce the above copyright
! **    notice, this list of conditions and the following disclaimer in the
! **    documentation and/or other materials provided with the distribution.
! ** 3. The name of the author may not be used to endorse or promote products
! **    derived from this software without specific prior written permission.
! **
! ** THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
! ** IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
! ** OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
! ** IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
! ** INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
! ** NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
! ** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
! ** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
! ** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
! ** THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
! **---------------------------------------------------------------------------
! **
! ** This file is just here so that when gitinfo.h changes, only one source
! ** file needs to be recompiled.
! */
! 
! #include "gitinfo.h"
! #include "version.h"
! 
! const char *GetGitDescription()
! {
! 	return GIT_DESCRIPTION;
! }
! 
! const char *GetGitHash()
! {
! 	return GIT_HASH;
! }
! 
! const char *GetGitTime()
! {
! 	return GIT_TIME;
! }
! 
! const char *GetVersionString()
! {
! 	if (GetGitDescription()[0] == '\0')
! 	{
! 		return VERSIONSTR;
! 	}
! 	else
! 	{
! 		return GIT_DESCRIPTION;
! 	}
! }
--- 1,65 ----
! /*
! ** gitinfo.cpp
! ** Returns strings from gitinfo.h.
! **
! **---------------------------------------------------------------------------
! ** Copyright 2013 Randy Heit
! ** All rights reserved.
! **
! ** Redistribution and use in source and binary forms, with or without
! ** modification, are permitted provided that the following conditions
! ** are met:
! **
! ** 1. Redistributions of source code must retain the above copyright
! **    notice, this list of conditions and the following disclaimer.
! ** 2. Redistributions in binary form must reproduce the above copyright
! **    notice, this list of conditions and the following disclaimer in the
! **    documentation and/or other materials provided with the distribution.
! ** 3. The name of the author may not be used to endorse or promote products
! **    derived from this software without specific prior written permission.
! **
! ** THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
! ** IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
! ** OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
! ** IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
! ** INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
! ** NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
! ** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
! ** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
! ** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
! ** THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
! **---------------------------------------------------------------------------
! **
! ** This file is just here so that when gitinfo.h changes, only one source
! ** file needs to be recompiled.
! */
! 
! #include "gitinfo.h"
! #include "version.h"
! 
! const char *GetGitDescription()
! {
! 	return GIT_DESCRIPTION;
! }
! 
! const char *GetGitHash()
! {
! 	return GIT_HASH;
! }
! 
! const char *GetGitTime()
! {
! 	return GIT_TIME;
! }
! 
! const char *GetVersionString()
! {
! 	if (GetGitDescription()[0] == '\0')
! 	{
! 		return VERSIONSTR;
! 	}
! 	else
! 	{
! 		return GIT_DESCRIPTION;
! 	}
! }