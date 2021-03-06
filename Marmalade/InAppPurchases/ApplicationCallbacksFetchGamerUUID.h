/*
 * Copyright (C) 2012, 2013 OUYA, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __APPLICATION_CALLBACKS_FETCH_GAMER_UUID_H__
#define __APPLICATION_CALLBACKS_FETCH_GAMER_UUID_H__

#include <string>

class ApplicationCallbacksFetchGamerUUID
{
public:
	
	s3eCallback GetSuccessEvent();

	s3eCallback GetFailureEvent();

	s3eCallback GetCancelEvent();

	void OnSuccess(const std::string& gamerUUID);

	void OnFailure(int errorCode, const std::string& errorMessage);

	void OnCancel();
};

#endif