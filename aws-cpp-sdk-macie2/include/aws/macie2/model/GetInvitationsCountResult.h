﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Macie2
{
namespace Model
{
  class AWS_MACIE2_API GetInvitationsCountResult
  {
  public:
    GetInvitationsCountResult();
    GetInvitationsCountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetInvitationsCountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The total number of invitations that were received by the account, not
     * including the currently accepted invitation.</p>
     */
    inline long long GetInvitationsCount() const{ return m_invitationsCount; }

    /**
     * <p>The total number of invitations that were received by the account, not
     * including the currently accepted invitation.</p>
     */
    inline void SetInvitationsCount(long long value) { m_invitationsCount = value; }

    /**
     * <p>The total number of invitations that were received by the account, not
     * including the currently accepted invitation.</p>
     */
    inline GetInvitationsCountResult& WithInvitationsCount(long long value) { SetInvitationsCount(value); return *this;}

  private:

    long long m_invitationsCount;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
