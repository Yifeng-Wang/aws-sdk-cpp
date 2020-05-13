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
#include <aws/macie2/Macie2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/FindingPublishingFrequency.h>
#include <aws/macie2/model/MacieStatus.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Macie2
{
namespace Model
{

  /**
   */
  class AWS_MACIE2_API EnableMacieRequest : public Macie2Request
  {
  public:
    EnableMacieRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableMacie"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline EnableMacieRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline EnableMacieRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline EnableMacieRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * Specifies how often to publish findings for the account. This includes adding
     * findings to AWS Security Hub and exporting finding events to Amazon CloudWatch.
     */
    inline const FindingPublishingFrequency& GetFindingPublishingFrequency() const{ return m_findingPublishingFrequency; }

    /**
     * Specifies how often to publish findings for the account. This includes adding
     * findings to AWS Security Hub and exporting finding events to Amazon CloudWatch.
     */
    inline bool FindingPublishingFrequencyHasBeenSet() const { return m_findingPublishingFrequencyHasBeenSet; }

    /**
     * Specifies how often to publish findings for the account. This includes adding
     * findings to AWS Security Hub and exporting finding events to Amazon CloudWatch.
     */
    inline void SetFindingPublishingFrequency(const FindingPublishingFrequency& value) { m_findingPublishingFrequencyHasBeenSet = true; m_findingPublishingFrequency = value; }

    /**
     * Specifies how often to publish findings for the account. This includes adding
     * findings to AWS Security Hub and exporting finding events to Amazon CloudWatch.
     */
    inline void SetFindingPublishingFrequency(FindingPublishingFrequency&& value) { m_findingPublishingFrequencyHasBeenSet = true; m_findingPublishingFrequency = std::move(value); }

    /**
     * Specifies how often to publish findings for the account. This includes adding
     * findings to AWS Security Hub and exporting finding events to Amazon CloudWatch.
     */
    inline EnableMacieRequest& WithFindingPublishingFrequency(const FindingPublishingFrequency& value) { SetFindingPublishingFrequency(value); return *this;}

    /**
     * Specifies how often to publish findings for the account. This includes adding
     * findings to AWS Security Hub and exporting finding events to Amazon CloudWatch.
     */
    inline EnableMacieRequest& WithFindingPublishingFrequency(FindingPublishingFrequency&& value) { SetFindingPublishingFrequency(std::move(value)); return *this;}


    /**
     * <p>Specifies the status for the account. To enable Amazon Macie and start all
     * Amazon Macie activities for the account, set this value to ENABLED.</p>
     */
    inline const MacieStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Specifies the status for the account. To enable Amazon Macie and start all
     * Amazon Macie activities for the account, set this value to ENABLED.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Specifies the status for the account. To enable Amazon Macie and start all
     * Amazon Macie activities for the account, set this value to ENABLED.</p>
     */
    inline void SetStatus(const MacieStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Specifies the status for the account. To enable Amazon Macie and start all
     * Amazon Macie activities for the account, set this value to ENABLED.</p>
     */
    inline void SetStatus(MacieStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Specifies the status for the account. To enable Amazon Macie and start all
     * Amazon Macie activities for the account, set this value to ENABLED.</p>
     */
    inline EnableMacieRequest& WithStatus(const MacieStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Specifies the status for the account. To enable Amazon Macie and start all
     * Amazon Macie activities for the account, set this value to ENABLED.</p>
     */
    inline EnableMacieRequest& WithStatus(MacieStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    FindingPublishingFrequency m_findingPublishingFrequency;
    bool m_findingPublishingFrequencyHasBeenSet;

    MacieStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
